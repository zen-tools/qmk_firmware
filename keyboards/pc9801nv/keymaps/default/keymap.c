// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define ___ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        KC_ESC, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_INS, KC_DEL, KC_PGUP, KC_PGDN, \
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_PIPE, KC_BSPC, KC_PSCR, \
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_HOME,  \
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_END,       \
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_GRV, KC_UP,             \
        KC_LCTL, KC_FN0, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT),
    /* 1: FN 1 */
    KEYMAP_ANSI(
        ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___, KC_F11, KC_F12,  ___,  ___, \
        ___,  ___,  ___,  ___,  ___,  ___,  KC_7, KC_8, KC_9, KC_MINS, KC_SLSH, ___,  ___,  ___,  ___,     \
        ___,  ___,  ___,  ___,  ___,  ___,  ___, KC_4, KC_5, KC_6, KC_ASTR, ___,  ___,  ___,  ___,         \
        ___,  ___,  ___,  ___,  ___,  ___,  ___, KC_1, KC_2, KC_3, KC_PLUS, ___,  ___,        ___,         \
        ___,  ___,  ___,  ___,  ___,  ___,  ___, KC_0, KC_COMM, KC_DOT, KC_EQL, KC_ENT,  ___,              \
        ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___,  ___)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
