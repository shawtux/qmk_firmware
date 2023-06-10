/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef LED_MATRIX_ENABLE
const ckled2001_led g_ckled2001_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to CKLED2001 manual for these locations
 *   driver
 *   |  LED address
 *   |  | */
    {0, B_16},
    {0, B_15},
    {0, B_14},
    {0, B_13},
    {0, B_12},
    {0, B_11},
    {0, B_10},
    {0, B_9},
    {0, B_8},
    {0, B_7},
    {0, B_6},
    {0, B_5},
    {0, B_4},
    {0, B_3},

    {0, C_16},
    {0, C_15},
    {0, C_14},
    {0, C_13},
    {0, C_12},
    {0, C_11},
    {0, C_10},
    {0, C_9},
    {0, C_8},
    {0, C_7},
    {0, C_6},
    {0, C_5},
    {0, C_4},
    {0, C_3},

    {0, D_16},
    {0, D_15},
    {0, D_14},
    {0, D_13},
    {0, D_12},
    {0, D_11},
    {0, D_10},
    {0, D_9},
    {0, D_8},
    {0, D_7},
    {0, D_6},
    {0, D_5},
    {0, D_3},

    {0, E_16},
    {0, E_14},
    {0, E_13},
    {0, E_12},
    {0, E_11},
    {0, E_10},
    {0, E_9},
    {0, E_8},
    {0, E_7},
    {0, E_6},
    {0, E_5},
    {0, E_3},

    {0, F_16},
    {0, F_15},
    {0, F_14},
    {0, F_10},
    {0, F_6},
    {0, F_5},
    {0, F_4},
    {0, F_3},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 0,  1,   2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 },
        { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 },
        { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, __, 40 },
        { 41, __, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, __, 52 },
        { 53, 54, 55, __, __, __, 56, __, __, __, 57, 58, 59, 60 }
    },
    {
        // LED Index to Physical Position
        {0,0},   {16,0},  {32,0},  {48,0},  {65,0},  {81,0},  {97,0},   {113,0},  {129,0},  {145,0},  {161,0},  {178,0},  {194,0},  {218,0},
        {4,16},  {24,16}, {40,16}, {57,16}, {73,16}, {89,16}, {105,16}, {121,16}, {137,16}, {153,16}, {170,16}, {186,16}, {202,16}, {222,16},
        {6,32},  {28,32}, {44,32}, {61,32}, {77,32}, {93,32}, {109,32}, {125,32}, {141,32}, {157,32}, {174,32}, {190,32},           {216,32},
        {10,48},          {36,48}, {52,48}, {69,48}, {85,48}, {101,48}, {117,48}, {133,48}, {149,48}, {165,48}, {182,48},           {212,48},
        {2,64},  {22,64}, {42,64},                            {103,64},                               {163,64}, {184,64}, {204,64}, {224,64},
    },
    {
        // RGB LED Index to Flag
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1, 1, 1,          4,          1, 4, 4, 1,
	}
};
#endif
