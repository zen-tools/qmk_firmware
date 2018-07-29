/*
Copyright 2018 Dmitry Poltavchenko <poltavchenko.dmitriy@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0x1209
#define PRODUCT_ID      0xA1E5
#define DEVICE_VER      0x0008
#define MANUFACTURER    NEC
#define PRODUCT         PC9801nv
#define DESCRIPTION     q.m.k. keyboard firmware for PC9801nv

/* key matrix size */
#define MATRIX_ROWS     8
#define MATRIX_COLS     11

// Change this to how you wired your keyboard
#define MATRIX_ROW_PINS { B1, B3, F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, B6, B7, D6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* key combination for command */
#define IS_COMMAND() ( false )

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

#endif
