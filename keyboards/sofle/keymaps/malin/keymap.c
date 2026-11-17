
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
            KC_ESC,        KC_LALT,        LALT(KC_F),    LCTL(KC_NUHS),   LALT(KC_LSFT),    KC_SPC,
            KC_LSFT,       G(S(KC_T)),     G(S(KC_S)),    LCTL(KC_Z),      LCTL(KC_Y),       LCTL(KC_A),
            TG(2),         MS_WHLD,        LCTL(KC_S),    LCTL(KC_C),      LCTL(KC_V),       KC_ENT,
            G(S(KC_S)),    LCTL(KC_F),     LGUI(KC_D),    LCTL(KC_A),      KC_DEL,           LGUI(KC_V),    KC_MPLY,
                                           LGUI(KC_L),    KC_LALT,         KC_LCTL,          KC_ESC,        KC_TAB,

        // Right half
            KC_6,       TG(2),      KC_8,       KC_9,       KC_0,       SE_PLUS,
            KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       SE_AA,
            KC_H,       KC_J,       KC_K,       KC_L,       SE_OE,      SE_AE,
KC_MFFD,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     SE_MINS,    KC_NUHS,
KC_CAPS,    MO(1),      KC_LSFT,    KC_LCTL,    KC_LGUI
    ),

    [1] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_4,       KC_F5,
            KC_LCTL,    KC_Z,       KC_W,       KC_X,       KC_TAB,     KC_R,  
            KC_LSFT,    KC_NO,      KC_F,       KC_D,       KC_B,       KC_G,
            TG(2),      SE_RABK,    SE_PIPE,    KC_V,       KC_TAB,     KC_T,         KC_MPLY,
                                    TG(2),      SE_PIPE,    KC_V,       KC_ESC,       KC_LCTL,

        // Right half
            KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
            KC_Y,       KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    SE_DLR,     KC_TAB,
KC_NO,      SE_MINS,    KC_ENT,     KC_BSPC,    KC_DEL,     KC_COMM,    SE_ACUT,
KC_CAPS,    MO(1),      KC_LSFT,    KC_LCTL,    KC_LGUI
    ),

    [2] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,        KC_SPC,          LALT(KC_LSFT),    LCTL(KC_NUHS),   LALT(KC_F),       KC_LSFT,
            KC_LSFT,       KC_LSFT,         LCTL(KC_Y),       LCTL(KC_Z),      G(S(KC_S)),       G(S(KC_T)),
            TG(2),         KC_ENT,          LCTL(KC_V),       LCTL(KC_C),      LCTL(KC_S),       KC_LSFT,
            KC_ESC,        LGUI(KC_V),      KC_DEL,           LCTL(KC_A),      KC_LSFT,          LCTL(KC_F),    KC_MPLY,
                                            KC_LCTL,          KC_LALT,         KC_LCTL,          KC_ESC,        KC_LSFT,

        // Right half
            KC_6,       TG(2),      KC_8,       KC_9,       KC_0,       SE_PLUS,
            LCTL(KC_X), LCTL(KC_Y), LCTL(KC_Z), G(S(KC_S)), KC_LSFT,    KC_LSFT,
            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    LCTL(KC_A), KC_LSFT,
KC_MFFD,    LGUI(KC_V), KC_DEL,     KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,
KC_LCTL,    KC_LALT,    KC_ESC,     KC_LCTL,    KC_LGUI
    ),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

