/* Copyright 2020 Michael Leuchtenburg
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
#pragma once

// Since our quirky block definitions are basically a list of comma separated
// arguments, we need a wrapper in order for these definitions to be
// expanded before being used as arguments to the LAYOUT_xxx macro.
#define LAYOUT_wrapper(...)             LAYOUT(__VA_ARGS__)

#define _______________QWERTY_LEFT1________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _______________QWERTY_LEFT2________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _______________QWERTY_LEFT3________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _______________QWERTY_RIGHT1_______________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _______________QWERTY_RIGHT2_______________ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _______________QWERTY_RIGHT3_______________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _______________DVORAK_LEFT1________________ KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define _______________DVORAK_LEFT2________________ KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define _______________DVORAK_LEFT3________________ KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define _______________DVORAK_RIGHT1_______________ KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _______________DVORAK_RIGHT2_______________ KC_D,    KC_H,    KC_T,    KC_N,    KC_S
#define _______________DVORAK_RIGHT3_______________ KC_B,    KC_M,    KC_W,    KC_V,    KC_Z
