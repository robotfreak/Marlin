/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS Plus2, also known as 3DYMY version, pin assignments
 * The differences to the RAMPS v1.4 are:
 *  - additional E2 Extruder
 *  - additional temperature sensor
 *  - pin change filament runout sensor pin 11 -> 15 
 *  - additional power detect pin 2
 * Applies to the following boards:
 *
 *  RAMPS_PLUS_EFB (Extruder, Fan, Bed)
 *  RAMPS_PLUS_EEB (Extruder, Extruder, Bed)
 *  RAMPS_PLUS_EFF (Extruder, Fan, Fan)
 *  RAMPS_PLUS_EEF (Extruder, Extruder, Fan)
 *  RAMPS_PLUS_SF  (Spindle, Controller Fan)
 *
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
 #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
 #define BOARD_NAME "RAMPS Plus2"
#endif

/* additional E2 Extruder */
#define E2_STEP_PIN        42
#define E2_DIR_PIN         40
#define E2_ENABLE_PIN      44
#define E2_CS_PIN          44

/* additional Temperature sensor */
#define TEMP_2_PIN         12   // Analog Input

#include "pins_RAMPS.h"

#undef FIL_RUNOUT_PIN

#define FIL_RUNOUT_PIN     15
#define POWER_DETECT_PIN   2    //x-max


