/* Copyright 2018 Carlos Filoteo
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

#define ST_BSLS  RSFT_T(KC_BSLS)
#define Q  0
#define L  1
#define R  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-------------------------------------------------------------------------.
   * | Tab |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | Bspace|
   * |-------------------------------------------------------------------------+
   * | Ctrl |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Enter|
   * |-------------------------------------------------------------------------+
   * | Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | Sh/\ |
   * |-------------------------------------------------------------------------+
   * | Esc | Gui | Alt | App | Lower|   Space   | Raise| Left| Down|  Up |Right|
   * `-------------------------------------------------------------------------'
   */
  [Q] = LAYOUT( \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,  \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, ST_BSLS, \
    KC_ESC,  KC_LGUI, KC_LALT, KC_APP,  MO(L),   KC_SPC,  MO(R),   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT \
  ),

  /* Lower
   * ,-------------------------------------------------------------------------.
   * | ` ~ |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  | - _ | = + | Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |  (  |  )  | ' "  |
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     | [ { | ] } |      |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |           |     | Home| PgDn| PgUp| End  |
   * `-------------------------------------------------------------------------'
   */
  [L] = LAYOUT( \
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  KC_DEL,  \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, KC_QUOT, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, \
    _______, _______, _______, _______, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
  ),

  /* Raise
   * ,-------------------------------------------------------------------------.
   * |RESET|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |           |     | Home| PgDn| PgUp| End  |
   * `-------------------------------------------------------------------------'
   */
  [R] = LAYOUT( \
    RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______,     _______,      _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
  ),
};
