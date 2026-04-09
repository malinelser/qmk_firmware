
#include QMK_KEYBOARD_H
#include "keymap.h"
#include "process_combo.h"

// Combos
enum combo_events {
    COMBO_JKL_ENTER,
    COMBO_LENGTH  // always last
};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
combo_t key_combos[COMBO_LENGTH] = {
    [COMBO_JKL_ENTER] = COMBO(jkl_combo, KC_ENT)
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
            KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
            KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MPLY,
                                    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LALT,     KC_SPC,

        // Right half
            KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_GRV,
            KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       SE_AA,
            KC_H,       KC_J,       KC_K,       KC_L,       SE_OE,      SE_AE,
KC_MFFD,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     SE_MINS,    KC_NUHS,
KC_CAPS,     MO(1),     KC_LSFT,    KC_LCTL,    KC_LGUI
    ),

    [1] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
            KC_TAB,     KC_Z,       KC_B,       KC_X,       KC_G,       KC_TAB,
            KC_LCTL,    KC_NO,      KC_NO,      KC_C,       KC_V,    KC_VOLU,
            KC_LSFT,    SE_LABK,    SE_RABK,    SE_PIPE,    KC_V,       KC_B,       KC_MPLY,
                                    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LALT,     KC_SPC,

        // Right half
            KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
            KC_Y,       KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    SE_DLR,     KC_TAB,
KC_NO,      KC_ENT,     SE_MINS,    KC_BSPC,    KC_DEL,     KC_COMM,    SE_ACUT,
KC_CAPS,     MO(1),     KC_LSFT,    KC_LCTL,    KC_LGUI
    ),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

