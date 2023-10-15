/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xE1, 0x19, 0x66, 0xAE, 0x22, 0x17, 0xAA, 0x3C}

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_BREATHING

#define VIAL_UNLOCK_COMBO_ROWS { 5, 6 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

#define RGB_MATRIX_LED_COUNT RGBLED_NUM
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
