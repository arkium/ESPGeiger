/*
  ESPGHW.cpp - Geiger Counter class
  
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

#include <Arduino.h>
#include "ESPGHW.h"
#include "../Logger/Logger.h"

ESPGeigerHW::ESPGeigerHW() {

}

void ESPGeigerHW::begin() {
  Log::console(PSTR("ESPG-HW: PWM Setup"));
  pinMode(GEIGER_PWMPIN, OUTPUT);
  analogWrite (GEIGER_PWMPIN, 0) ;
  analogWriteFreq(8000);
}

void ESPGeigerHW::loop() {
  analogWrite (GEIGER_PWMPIN, 102) ;

}
