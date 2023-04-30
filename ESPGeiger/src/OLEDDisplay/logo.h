/*
  logo.h - Logo for the OLED
  
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

const unsigned char ESPLogo [] PROGMEM = {
	// 'ESPGeiger, 51x51px
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x0f, 0x00, 
	0x00, 0x00, 0xe0, 0x1f, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0xf0, 0x03, 0x00, 0x7e, 0x00, 0x00, 0x00, 
	0xf8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xfe, 0x01, 
	0x00, 0xfe, 0x03, 0x00, 0x00, 0xff, 0x03, 0x00, 0xfe, 0x07, 0x00, 0x80, 0xff, 0x07, 0x00, 0xff, 
	0x0f, 0x00, 0x80, 0xff, 0x07, 0x00, 0xff, 0x0f, 0x00, 0xc0, 0xff, 0x0f, 0x80, 0xff, 0x1f, 0x00, 
	0xc0, 0xff, 0x0f, 0x80, 0xff, 0x1f, 0x00, 0xe0, 0xff, 0x1f, 0xc0, 0xff, 0x3f, 0x00, 0xe0, 0xff, 
	0x1f, 0xe0, 0xff, 0x3f, 0x00, 0xe0, 0xff, 0x3f, 0xe0, 0xff, 0x3f, 0x00, 0xf0, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xf0, 0xff, 0xff, 0xfd, 0xff, 0x7f, 
	0x00, 0xf0, 0xff, 0x7f, 0xf0, 0xff, 0x7f, 0x00, 0xf0, 0xff, 0x7f, 0xf0, 0xff, 0x7f, 0x00, 0x70, 
	0x00, 0x30, 0x60, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 
	0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x3d, 0x00, 0x70, 0x00, 0xf0, 0x00, 0xc0, 0x1f, 0x00, 
	0x78, 0x00, 0xf0, 0x00, 0x80, 0x0f, 0x00, 0x78, 0x00, 0xe0, 0x00, 0xc0, 0x1f, 0x00, 0x38, 0x00, 
	0xe0, 0x01, 0xe0, 0x3f, 0x00, 0x3c, 0x00, 0xe0, 0x01, 0xe0, 0x3f, 0x00, 0x3c, 0x00, 0xc0, 0x03, 
	0xf0, 0x7f, 0x00, 0x1e, 0x00, 0xc0, 0x03, 0xf0, 0x7f, 0x00, 0x1e, 0x00, 0x80, 0x07, 0xf8, 0xff, 
	0x00, 0x0f, 0x00, 0x80, 0x0f, 0xfc, 0xff, 0x81, 0x0f, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xc1, 0x07, 
	0x00, 0x00, 0x3e, 0xfe, 0xff, 0xe3, 0x03, 0x00, 0x00, 0x7c, 0xfe, 0xff, 0xf3, 0x01, 0x00, 0x00, 
	0xf8, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0xe0, 0xff, 
	0xff, 0x3f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char _iconimage_connected[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80,
	0xA0, 0xA0, 0xA8, 0xA8,
	0xAA, 0xAA, 0x00, 0x00,
	};

const unsigned char _iconimage_disconnected[] PROGMEM = {
	0x00, 0x00, 0x00, 0x11,
	0x0A, 0x04, 0x8A, 0x91,
	0xA0, 0xA0, 0xA8, 0xA8,
	0xAA, 0xAA, 0x00, 0x00,
	};

const unsigned char _iconimage_remotext[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x41,
	0x62, 0x54, 0x48, 0x44,
	0x22, 0x1F, 0x00, 0x00,
	};