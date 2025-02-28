/*
  NTP.cpp - functions to handle NTP
  
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

#include "NTP.h"
#include "../Logger/Logger.h"

NTP_Client::NTP_Client() {
}
void NTP_Client::setup()
{
#ifndef DISABLE_NTP
  Log::console(PSTR("NTP: Starting ... %s"), _ntp_server);
#ifdef ESP8266
  configTime(_ntp_tz, _ntp_server);
#else
  configTime(0, 0, _ntp_server); // 0, 0 because we will use TZ in the next line
  setenv("TZ", _ntp_tz, 1); // Set environment variable with your time zone
  tzset();
#endif
#endif
}