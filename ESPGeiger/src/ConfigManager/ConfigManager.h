/*
  ConfigManager.h - Config Manager class
  
  Copyright (C) 2023 @steadramon

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef ConfigManager_h
#define ConfigManager_h
#include "WiFiManager.h"
#include "../Status.h"
#include "../Counter/Counter.h"
#include "../NTP/NTP.h"

#include "logos.h"
#include "html.h"
#ifdef ESPGEIGER_HW
#include "../ESPGHW/ESPGHW.h"
extern ESPGeigerHW hardware;
#endif

extern Status status;
extern Counter gcounter;

constexpr auto MQTT_SERVER_LENGTH = 31;
constexpr auto MQTT_PORT_LENGTH = 6;
constexpr auto MQTT_USER_LENGTH = 31;
constexpr auto MQTT_PASS_LENGTH = 31;
constexpr auto CHECKBOX_LENGTH = 9;
constexpr auto NUMBER_LEN = 32;
constexpr auto TEMPLATE_LEN = 256;
constexpr auto ADVANCED_LEN = 256;
constexpr auto CB_SELECTED_STR = "selected";

constexpr auto ROOT_URL = "/";
constexpr auto RESTART_URL = "/restart";
constexpr auto CONSOLE_URL = "/cs";
constexpr auto STATUS_URL = "/status";
constexpr auto JS_URL = "/js";
constexpr auto JSON_URL = "/json";
constexpr auto RESET_URL = "/reset";
constexpr auto HV_URL = "/hv";
constexpr auto HV_JS_URL = "/hvjs";
constexpr auto HV_JSON_URL = "/hvjson";
constexpr auto HV_SET_URL = "/hvset";

const char HTTP_HEAD_CTJS[17] PROGMEM = "text/javascript";
const char HTTP_HEAD_CTJSON[18] PROGMEM = "application/json";

#ifndef MQTT_DISCOVERY_TOPIC
#  define MQTT_DISCOVERY_TOPIC "homeassistant"
#endif

#ifndef MQTT_DISCOVERY
#ifdef GEIGERTESTMODE
#  define MQTT_DISCOVERY "N"
#else
#  define MQTT_DISCOVERY "Y"
#endif
#endif

#define MQTT_DEFAULT_PORT "8883"
//char mqttServer[MQTT_SERVER_LENGTH] = "";
//char mqttPort[MQTT_PORT_LENGTH] = MQTT_DEFAULT_PORT;
//char mqttUser[MQTT_USER_LENGTH] = "";
//char mqttPass[MQTT_PASS_LENGTH] = "";

class ConfigManager : public WiFiManager
{
public:
  static ConfigManager &getInstance()
  {
    static ConfigManager instance;
    return instance;
  }
  void bindServerCallback();
  void autoConnect();
  void startWebPortal();
  const char* getParamValueFromID(const char* str);
  int getIndexFromID(const char* str);
  void loadParams();
  void preSaveParams();
  void saveParams();
  void delay(unsigned long m);
  void resetSettings();
  const char* getHostName() { return hostName; };
  const char* getChipID() { return chipId; };
  const char* getThingName() { return thingName; };
  const char* getUserAgent() { return userAgent; };
  char* getUptimeString ();
  char* GetChipModel(){
#ifdef ESP8266
#ifdef ESPGEIGER_HW
    return (char*)"ESPG-HW";
#else
    return (char*)"ESP8266";
#endif
#elif defined(ESP32)
#ifdef ESPGEIGER_HW
    return (char*)"ESPG32-HW";
#else
    esp_chip_info_t chipInfo;
    esp_chip_info(&chipInfo);
    switch((int)chipInfo.model) {
        case 0 : return (char*)"ESP8266";
        case (int)esp_chip_model_t::CHIP_ESP32 : return (char*)"ESP32";
        case (int)esp_chip_model_t::CHIP_ESP32S2 : return (char*)"ESP32-S2";
        case (int)esp_chip_model_t::CHIP_ESP32S3 : return (char*)"ESP32-S3";
        case (int)esp_chip_model_t::CHIP_ESP32C3 : return (char*)"ESP32-C3";
        case 6 : return (char*)"ESP32-H4";
        case 12 : return (char*)"ESP32-C2";
        case 13 : return (char*)"ESP32-C6";
        case 16 : return (char*)"ESP32-H2";
        default: return (char*)"ESP32";
    }
#endif
#else
    return (char*)"UNKNOWN";
#endif
  }
private:
  ConfigManager();
  void handleRoot();
  void handleJSReturn();
  void handleJsonReturn();
  void handleStatusPage();
  void handleRefreshConsole();
  void handleRestart();
  void handleResetParams();
  void handleRegisterAPI();
#ifdef ESPGEIGER_HW
  void handleHVPage();
  void handleHVJSReturn();
  void handleHVJsonReturn();
  void handleHVSet();
#endif
  char thingName[11] = "";
  char chipId[7] = "";
  char hostName[20] = "";
  char userAgent[80] = "";
};

#endif