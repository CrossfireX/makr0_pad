#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ / │ * │ - │ + │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ $ │
     * ├───┼───┼───┤───┤
     * │ 4 │ 5 │ 6 │ € │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ @ │
     * ├───┴───┼───┤───┤
     * │ 0 │ , │ . │Ent│
     * └───────┴───┴───┘
     */
    [0] = LAYOUT(
        KC_PSLS,  KC_PAST,   KC_PMNS,   KC_PPLS, 
        KC_7,     KC_8,      KC_9,      KC_DLR, 
        KC_4,     KC_5,      KC_6,      ALGR(KC_E), 
        KC_1,     KC_2,      KC_3,      ALGR(KC_V),
        KC_0,     KC_COMMA,  KC_DOT,    KC_PENT
    ),
};