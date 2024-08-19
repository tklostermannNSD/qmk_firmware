// Copyright 2023 James Young for QMK (@noroadsleft)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "sendstring_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_96_iso(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME, KC_END,  KC_PSCR, KC_PAUS, MO(1),
        DE_CIRC, DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,   DE_ACUT,          KC_BSPC, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, DE_PLUS,                   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, DE_HASH, KC_ENT,           KC_P4,   KC_P5,   KC_P6,
        KC_LSFT, DE_LABK, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT,          KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RCTL,   KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
    ),
    [1] = LAYOUT_96_iso(
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        _______, RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,          _______, _______, _______, _______,
        BL_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, _______, _______,
        _______, _______, _______, _______, BL_DOWN, BL_TOGG, BL_UP,   _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______
    )
};
