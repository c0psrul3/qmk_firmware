#include QMK_KEYBOARD_H
  /* Keymap BL: Base Layer (Default Layer)
   *
   * ,-----------------------------------------------------------.
   * | ' | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp |
   * |-----------------------------------------------------------|
   * | Tab | q | w | e | r | t | y | u | i | o | p | [ | ] |enter|
   * |------------------------------------------------------     |
   * | Caps  | a | s | d | f | g | h | j | k | l | ; | ' | # |   |
   * |-----------------------------------------------------------|
   * |Shft| < | z | x | c | v | b | n | m | , | . | / |  Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt | Space  | FN |  Space  |Alt |Gui | NL |Ctrl |
   * `-----------------------------------------------------------'
   */

  /* Keymap FL: Function Layer
   *
   * ,-----------------------------------------------------------.
   * |ESC|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|  DEL  |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |prt|   |   |     |
   * |------------------------------------------------------     |
   * |       |m l|m d|m u|m r|   |   | l | d | u | r |   |   |   |
   * |-----------------------------------------------------------|
   * |    |   |   |   |   |mb1|mb2|   |hm |pgd|pgu|end|          |
   * |-----------------------------------------------------------|
   * |    |    |    |        |    |         |    |    |    |     |
   * `-----------------------------------------------------------'
   */


/***** boris_burger *****/
    /* Qwerty
    * ,-----------------------------------------------------------------------------------------.
    * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
    * |-----------------------------------------------------------------------------------------+
    * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
    * |-----------------------------------------------------------------------------------------+
    * |   Fn    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
    * |-----------------------------------------------------------------------------------------+
    * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Ins |
    * |-----------------------------------------------------------------------------------------+
    * | Ctrl |  Win  |  Alt  |              Space                | Alt | Menu |  L  |  D  |  R  |
    * `-----------------------------------------------------------------------------------------'
    */
/*
    LAYOUT_directional(
        KC_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , _______, KC_BSPC,
        KC_TAB ,          KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1)  ,          KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,
        KC_LSFT,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , KC_INS ,
        KC_LCTL, KC_LGUI,          KC_LALT, KC_SPC ,          KC_SPC ,          KC_SPC ,          KC_RALT, KC_RGUI, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
*/
    /* FN Layer
    * ,-----------------------------------------------------------------------------------------.
    * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
    * |-----------------------------------------------------------------------------------------+
    * |        |RBB T|RGB M| Hue+| Hue-| Sat+| Sat-| Val+| Val-|     |     |      |     |       |
    * |-----------------------------------------------------------------------------------------+
    * |         | BL T| BL M| BL+ | BL- |     |     |     |     |     |     |     |             |
    * |-----------------------------------------------------------------------------------------+
    * |           |     |     |     |     |RESET|     |     |     |     |     |     | PgUp|     |
    * |-----------------------------------------------------------------------------------------+
    * |      |       |       |                                   |     |      | Home| PgDn| End |
    * `-----------------------------------------------------------------------------------------'
    */

/***** crd *****/
  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl/Esc|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | DEL |
   * |-----------------------------------------------------------------------------------------+
   * | FN1  |  Alt  |  Cmd  |              Space                | Cmd  | FN2 |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */


/***** hailbreno *****/
/*layout template
 * ,-----------------------------------------------------------------------------------------.
 * |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
 * |-----------------------------------------------------------------------------------------+
 * |          |     |     |     |     |     |     |     |     |     |     |     |            |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------------------------+
 * |      |      |      |             |      |                 |     |     |     |     |     |
 * `-----------------------------------------------------------------------------------------'

 [LAYOUT] = LAYOUT_all(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______,
  _______, X,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,           _______,        _______,           _______,         _______, _______, _______, _______, _______),
*/


/***** frogger *****/
  /* Base Layer
   * ,-----------------------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | LAY1    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | LAY2|
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |   LAY1    | LAY2 |      SPACE     | RAlt | LAY1 |  L  |  D  |  R |
   * `-----------------------------------------------------------------------------------------'
   */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_all(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_DEL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, LT(5,KC_GRV), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LCAG_T(KC_PIPE), KC_UP, LT(15,KC_PSCR), LCTL_T(KC_ESC), KC_LGUI, KC_LALT, LT(2,KC_SPC), C_S_T(KC_ESC), LSFT_T(KC_SPC), LT(6,KC_GRV), LCA_T(KC_APP), KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_all(KC_GRV, KC_HELP, KC_F2, KC_F3, KC_WSCH, KC_WBAK, KC_WSTP, KC_WFWD, KC_WREF, TG(9), TG(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LGUI(KC_TAB)), KC_EXEC, OSL(7), OSL(3), OSL(15), KC_SLCT, KC_AGIN, KC_7, KC_8, KC_9, KC_PPLS, KC_MPRV, KC_MNXT, LALT(KC_F2), LGUI(KC_TAB), LCA(KC_A), LCA(KC_S), LCA(KC_D), LCA(KC_F), LCA(KC_G), LCA(KC_P), KC_4, KC_5, KC_6, KC_PCMM, KC_TRNS, KC_TRNS, KC_LSFT, KC_FIND, KC_UNDO, LCTL(KC_X), LCA(KC_O), LCTL(KC_V), LCA(KC_H), KC_MYCM, KC_1, KC_2, KC_3, KC_PEQL, KC_NO, KC_PGUP, LCTL(LSFT(KC_PSCR)), KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, LCA_T(KC_SPC), KC_0, KC_PDOT, KC_WAKE, KC_HOME, KC_PGDN, KC_END),
	[3] = LAYOUT_all(KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_MUTE, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT, KC_PENT, KC_MPRV, KC_VOLD, KC_MNXT),
	[4] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_all(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, LGUI(KC_TAB), KC_TILD, KC_NO, SGUI(KC_E), SGUI(KC_R), KC_P0, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, LALT(KC_F2), KC_TRNS, KC_NO, LALT(LGUI(KC_TAB)), SGUI(KC_D), SGUI(KC_F), KC_CIRC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DLR, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B), LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_UP), LCTL(KC_RGHT), KC_NO, KC_TRNS, LCTL(LSFT(KC_PGUP)), KC_PSCR, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_ESC, LCTL(KC_PGUP), LCTL(LSFT(KC_PGDN)), LCTL(KC_PGDN)),
	[6] = LAYOUT_all(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, LGUI(KC_TAB), KC_WH_D, KC_MS_U, KC_WH_U, KC_TRNS, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_LCBR, KC_RCBR, LALT(KC_F2), KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3, KC_BTN4, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DLR, KC_DQUO, KC_TRNS, KC_WH_L, KC_WH_R, KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B), LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_UP), LCTL(KC_RGHT), MEH(KC_NO), HYPR(KC_NO), LCTL(LSFT(KC_PGUP)), KC_PSCR, KC_LCTL, KC_TRNS, KC_TRNS, KC_BTN1, LCA(KC_BTN5), KC_SPC, KC_TRNS, KC_ESC, LCTL(KC_PGUP), LCTL(LSFT(KC_PGDN)), LCTL(KC_PGDN)),
	[7] = LAYOUT_all(KC_PAUSE, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[9] = LAYOUT_all(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_BTN5, KC_BTN4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[10] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[11] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[12] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[13] = LAYOUT_all(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[14] = LAYOUT_all(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[15] = LAYOUT_all(LT(14,KC_NO), TG(1), TG(2), TG(3), TG(4), TG(5), TG(6), TG(7), TG(0), TG(9), DF(0), KC_BRID, KC_BRIU, KC_PWR, KC_SLEP, KC_NO, KC_PWR, KC_WAKE, RESET, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_M_P, KC_NO, KC_NO, RESET, KC_NO, AU_ON, KC_NO, DEBUG, KC_NO, RGB_M_G, RGB_M_R, KC_NO, RGB_M_K, KC_NO, KC_NO, KC_NO, KC_WAKE, RGB_RMOD, RGB_MOD, AU_OFF, RGB_M_X, KC_CALC, KC_NO, RGB_M_B, RGB_M_SN, RGB_M_SW, KC_NO, RGB_HUI, RGB_SAI, RGB_SPI, RGB_VAI, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WAKE, KC_NO, RGB_TOG, RGB_HUD, RGB_SAD, RGB_SPD, RGB_VAD, KC_MUTE)
};

