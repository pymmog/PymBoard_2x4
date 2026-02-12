// Copyright 2025 Pymmog (@pymmog)
// SPDX-License-Identifier: Unlicense

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0 - Default
     * ┌──────┬──────┬──────┬──────┐
     * │ Mute │ Vol- │ Vol+ │ Play │
     * ├──────┼──────┼──────┼──────┤
     * │ Prev │ Stop │ Next │ Calc │
     * └──────┴──────┴──────┴──────┘
     */
    [0] = LAYOUT(
        KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY,
        KC_MPRV, KC_MSTP, KC_MNXT, KC_CALC
    ),

    /* Layer 1 */
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* Layer 2 */
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* Layer 3 */
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
