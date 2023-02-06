#include QMK_KEYBOARD_H

// Keyboard Layers
#define _QW 0
#define _FN 1

enum custom_keycodes {
    C_MIC = SAFE_RANGE
};

// Keymap
/*
 * ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
 * ║   ½   │  !    │  " @  │  # £  │  ¤ $  │  %    │  &    │  / {  │  ( [  │  ) ]  │  = }  │  ?    │  ` |  │  INS  │  DEL  ║
 * ║  ESC  │  1    │  2    │  3    │  4    │  5    │  6    │  7    │  8    │  9    │  0    │  +    │  ´    │  MIC  │ BSPC  ║
 * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
 * ║       │  Q    │  W    │  E €  │  R    │  T    │  Y    │  U    │  I    │  O    │  P    │  Å    │  ^ ~  │       │       ║
 * ║  TAB  │       │       │       │       │       │       │       │       │       │       │       │  ¨    │ VOL + │  ENT  ║
 * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
 * ║ CAPS  │  A    │  S    │  D    │  F    │  G    │  H    │  J    │  K    │  L    │  Æ    │  Ø    │  *    │ MUTE  │       ║
 * ║ LOCK  │       │       │       │       │       │       │       │       │       │       │       │  '    │ VOL - │  ENT  ║
 * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
 * ║       │  > \  │  Z    │  X    │  C    │  V    │  B    │  N    │  M    │  ;    │  :    │  _    │       │ PG UP │       ║
 * ║ SHIFT │  <    │       │       │       │       │       │       │       │  ,    │  .    │  -    │       │  UP   │ SHIFT ║
 * ╟───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────╢
 * ║       │       │       │       │       │       │       │       │  ALT  │       │       │       │  HOME │ PG DN │  END  ║
 * ║ CTRL  │  WIN  │  FN   │  ALT  │       │ SPACE │ SPACE │       │  GR   │  FN   │  WIN  │ CTRL  │  LEFT │ DOWN  │ RIGHT ║
 * ╚═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╝
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   C_MIC,    KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_VOLU,  KC_ENT,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_VOLD,  KC_ENT,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_NO,    KC_UP,    KC_RSFT,
        KC_LCTL,  KC_LGUI,  MO(_FN),  KC_LALT,  KC_NO,    KC_SPC,   KC_SPC,   KC_NO,    KC_RALT,  MO(_FN),  KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
        QK_BOOT,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_NO,    KC_NO,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGUP,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END
    ),
};

bool vold_mute(keyrecord_t *record, bool *registered) {
    uint8_t mod_state = get_mods();
    if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
            clear_mods();
            send_keyboard_report();
            wait_ms(10); // Workaround
            register_code(KC_MUTE);
            set_mods(mod_state);
            *registered = true;
            return false;
        }
    } else {
        if (*registered) {
            unregister_code(KC_MUTE);
            *registered = false;
            return false;
        }
    }
    return true;
}

// Method for keys with special function when shifted
bool mod_function(keyrecord_t *record, bool *registered, uint8_t keycode) {
    uint8_t mod_state = get_mods();
    uint8_t lshift = MOD_BIT(KC_LEFT_SHIFT);
    uint8_t rshift = MOD_BIT(KC_RIGHT_SHIFT);

    if (record->event.pressed) {
        if ((mod_state & lshift) | (mod_state & rshift)) {
            del_mods(lshift | rshift);
            if ((mod_state & lshift) & (mod_state & rshift)) {
                add_mods(lshift); // Keep modifier1 on if both are held
            }

            register_code(keycode);
            *registered = true;
            set_mods(mod_state);
            return false;
        }
    } else {
        if (*registered) {
            unregister_code(keycode);
            *registered = false;
            return false;
        }
    }
    return true;
}

// Mute mic key
bool custom_mic_insert(keyrecord_t *record) {
    uint8_t mod_state = get_mods();
    if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
            del_mods(MOD_MASK_SHIFT);
            if ((mod_state & MOD_BIT(KC_LEFT_SHIFT)) && (mod_state & MOD_BIT(KC_RIGHT_SHIFT))) {
                add_mods(MOD_BIT(KC_LEFT_SHIFT)); // If both shifts are pressed, keep shift on
            }

            tap_code(KC_INS);
            set_mods(mod_state);
        } else {
            clear_mods();
            set_mods(MOD_BIT(KC_LEFT_CTRL) | MOD_BIT(KC_LEFT_SHIFT));
            tap_code(KC_M);
            clear_mods();
        }
    }
    return false;
}

// Prevent double presses from repeated keys (space, enter)
bool prevent_double(keyrecord_t *record, bool *registered) {
    if (record->event.pressed) {
        if (*registered) {
            return false;
        } else {
            *registered = true;
            return true;
        }
    } else {
        if (*registered) {
            *registered = false;
            return true;
        } else {
            return false;
        }
    }
}

// Special keys
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static bool mute_registered, del_registered, grv_registered, enter_registered, space_registered;

    switch (keycode) {
        case KC_VOLD:
            return vold_mute(record, &mute_registered);
        case KC_BSPC:
            return mod_function(record, &del_registered, KC_DEL);
        case KC_ESC:
            return mod_function(record, &grv_registered, KC_GRV);
        case C_MIC:
            return custom_mic_insert(record);
        case KC_ENTER:
            return prevent_double(record, &enter_registered);
        case KC_SPACE:
            return prevent_double(record, &space_registered);
        default:
            return true; // Process all other keycodes normally
    }
}
