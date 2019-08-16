/* Copyright 2019 naso
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
#include QMK_KEYBOARD_H

enum layer_number {
    _DEFAULT = 0,
    _LOWER,
    _RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT( LGUI(KC_TAB), SGUI(KC_S), KC_MUTE ),
  [_LOWER] = LAYOUT( KC_TRNS, RGB_HUI, RGB_TOG ),
  [_RAISE] = LAYOUT( RGB_MOD, KC_TRNS, RGB_TOG ),
};

//Encoder
void encoder_update_user(uint8_t index, bool clockwise) {
  if (IS_LAYER_OFF(_LOWER) && IS_LAYER_OFF(_RAISE)){
    if (clockwise) {
        tap_code(KC_VOLU);  //Rotary encoder clockcwise
    } else {
        tap_code(KC_VOLD);  //Rotary encoder Reverse clockcwise
    }
  }
  else if (IS_LAYER_ON(_LOWER)){
    if (clockwise) {
        rgblight_increase_val();  //Rotary encoder clockcwise
    } else {
        rgblight_decrease_val();  //Rotary encoder Reverse clockcwise
    }
  }
  else if (IS_LAYER_ON(_RAISE)){
    if (clockwise) {
        rgblight_increase_sat();  //Rotary encoder clockcwise
    } else {
        rgblight_decrease_sat();  //Rotary encoder Reverse clockcwise
    }
  }
}
