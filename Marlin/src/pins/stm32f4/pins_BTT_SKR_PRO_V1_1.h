/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if HOTENDS > 3 || E_STEPPERS > 3
  #error "BIGTREE SKR Pro V1.1 supports up to 3 hotends / E steppers."
#endif

#define BOARD_INFO_NAME "BTT SKR Pro V1.1"
// DOUG - Missing Pin declaration added 8/11/2022
#define TFT_CS_PIN                     PB12
      #define TFT_A0_PIN                     PB10
      #define TFT_SCK_PIN                    PB13
      #define TFT_MISO_PIN                   PB14
      #define TFT_MOSI_PIN                   PB15

      #define TOUCH_INT_PIN                  PG6
      #define TOUCH_MISO_PIN                 PG1
      #define TOUCH_MOSI_PIN                 PC10
      #define TOUCH_SCK_PIN                  PG8
      #define TOUCH_CS_PIN                   PA8
      #define BTN_EN1                        PD10
      #define BTN_EN2                        PH10

#include "pins_BTT_SKR_PRO_common.h"
