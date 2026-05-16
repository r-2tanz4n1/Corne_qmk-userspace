#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NAV,
    _NUM,
    _FN
};

#define HM_ESC LCTL_T(KC_ESC)
#define HM_SCLN RALT_T(KC_SCLN)

#define NAV_SPC LT(_NAV, KC_SPC)
#define NUM_ENT LT(_NUM, KC_ENT)
#define FN_ENT LT(_FN, KC_ENT)
#define FN_BKS LT(_FN, KC_BSPC)


/* -------------------- COMBOS -------------------- */

enum combo_events {
    CB_1,
    CB_2,
    CB_3,
    CB_4,
    CB_5,
    CB_6,
    CB_7,
    CB_8,
    CB_9,
    CB_0,
    CB_AT,
    CB_EURO,
    CB_LBRC,
    CB_RBRC,
    CB_HASH,
    CB_EXLM,
    CB_QUES,
    CB_SLSH,
    CB_CAPS_WORD,
    CB_LT,
    CB_GT,
    CB_LPRN,
    CB_RPRN,
    CB_QUOT,
    CB_DQUO,
    CB_ASTR,
    CB_PLUS,
    CB_FN_L,
    CB_FN_R,
    CB_NUM_ON,
    CB_NUM_OFF,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

/* BASE layer combos */
const uint16_t PROGMEM cb_1[]         = {KC_TAB,  KC_Q,    COMBO_END};
const uint16_t PROGMEM cb_2[]         = {KC_Q,    KC_W,    COMBO_END};
const uint16_t PROGMEM cb_3[]         = {KC_W,    KC_E,    COMBO_END};
const uint16_t PROGMEM cb_4[]         = {KC_E,    KC_R,    COMBO_END};
const uint16_t PROGMEM cb_5[]         = {KC_R,    KC_T,    COMBO_END};

const uint16_t PROGMEM cb_6[]         = {KC_Y,    KC_U,    COMBO_END};
const uint16_t PROGMEM cb_7[]         = {KC_U,    KC_I,    COMBO_END};
const uint16_t PROGMEM cb_8[]         = {KC_I,    KC_O,    COMBO_END};
const uint16_t PROGMEM cb_9[]         = {KC_O,    KC_P,    COMBO_END};
const uint16_t PROGMEM cb_0[]         = {KC_P,    KC_RBRC, COMBO_END};

const uint16_t PROGMEM cb_at[]        = {KC_A,    KC_S,    COMBO_END};
const uint16_t PROGMEM cb_euro[]      = {KC_S,    KC_D,    COMBO_END};
const uint16_t PROGMEM cb_lbrc[]      = {KC_D,    KC_F,    COMBO_END};
const uint16_t PROGMEM cb_rbrc[]      = {KC_F,    KC_G,    COMBO_END};

const uint16_t PROGMEM cb_hash[]      = {KC_H,    KC_J,    COMBO_END};
const uint16_t PROGMEM cb_exlm[]      = {KC_J,    KC_K,    COMBO_END};
const uint16_t PROGMEM cb_ques[]      = {KC_K,    KC_L,    COMBO_END};
const uint16_t PROGMEM cb_slsh[]      = {KC_L,    HM_SCLN, COMBO_END};

const uint16_t PROGMEM cb_caps_word[] = {KC_LSFT, KC_Z,    COMBO_END};
const uint16_t PROGMEM cb_lt[]        = {KC_Z,    KC_X,    COMBO_END};
const uint16_t PROGMEM cb_gt[]        = {KC_X,    KC_C,    COMBO_END};
const uint16_t PROGMEM cb_lprn[]      = {KC_C,    KC_V,    COMBO_END};
const uint16_t PROGMEM cb_rprn[]      = {KC_V,    KC_B,    COMBO_END};

const uint16_t PROGMEM cb_quot[]      = {KC_N,    KC_M,    COMBO_END};
const uint16_t PROGMEM cb_dquo[]      = {KC_M,    KC_COMM, COMBO_END};
const uint16_t PROGMEM cb_astr[]      = {KC_COMM, KC_DOT,  COMBO_END};
const uint16_t PROGMEM cb_plus[]      = {KC_DOT,  KC_SLSH, COMBO_END};

const uint16_t PROGMEM cb_fn_l[]      = {LALT_T(KC_F2),    LGUI_T(KC_SPACE), COMBO_END};
const uint16_t PROGMEM cb_fn_r[]      = {RGUI_T(KC_BSPC),  NAV_SPC,          COMBO_END};
const uint16_t PROGMEM cb_num_on[]    = {NAV_SPC,          HYPR_T(KC_DEL),   COMBO_END};
const uint16_t PROGMEM cb_num_off[]   = {KC_SPC,           S(KC_0),          COMBO_END};


combo_t key_combos[COMBO_LENGTH] = {
    [CB_1]         = COMBO(cb_1, KC_1),
    [CB_2]         = COMBO(cb_2, KC_2),
    [CB_3]         = COMBO(cb_3, KC_3),
    [CB_4]         = COMBO(cb_4, KC_4),
    [CB_5]         = COMBO(cb_5, KC_5),

    [CB_6]         = COMBO(cb_6, KC_6),
    [CB_7]         = COMBO(cb_7, KC_7),
    [CB_8]         = COMBO(cb_8, KC_8),
    [CB_9]         = COMBO(cb_9, KC_9),
    [CB_0]         = COMBO(cb_0, KC_0),

    [CB_AT]        = COMBO(cb_at,   LALT(KC_2)),
    [CB_EURO]      = COMBO(cb_euro, LALT(KC_3)),
    [CB_LBRC]      = COMBO(cb_lbrc, LALT(KC_8)),
    [CB_RBRC]      = COMBO(cb_rbrc, LALT(KC_9)),

    [CB_HASH]      = COMBO(cb_hash, S(KC_3)),
    [CB_EXLM]      = COMBO(cb_exlm, S(KC_1)),
    [CB_QUES]      = COMBO(cb_ques, S(KC_MINUS)),
    [CB_SLSH]      = COMBO(cb_slsh, S(KC_7)),

    [CB_CAPS_WORD] = COMBO(cb_caps_word, CW_TOGG),
    [CB_LT]        = COMBO(cb_lt, KC_NUBS),
    [CB_GT]        = COMBO(cb_gt, S(KC_NUBS)),
    [CB_LPRN]      = COMBO(cb_lprn, S(KC_8)),
    [CB_RPRN]      = COMBO(cb_rprn, S(KC_9)),

    [CB_QUOT]      = COMBO(cb_quot, KC_MINUS),
    [CB_DQUO]      = COMBO(cb_dquo, S(KC_2)),
    [CB_ASTR]      = COMBO(cb_astr, S(KC_EQL)),
    [CB_PLUS]      = COMBO(cb_plus, KC_EQL),

    [CB_FN_L]      = COMBO(cb_fn_l, MO(_FN)),
    [CB_FN_R]      = COMBO(cb_fn_r, MO(_FN)),
    [CB_NUM_ON]    = COMBO(cb_num_on, TO(_NUM)),
    [CB_NUM_OFF]   = COMBO(cb_num_off, TO(_BASE)),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_VOLU,    KC_BRIU,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_RBRC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
       HM_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_VOLD,    KC_BRID,    KC_H,    KC_J,    KC_K,    KC_L, HM_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, RSFT_T(KC_ENT),
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                           LALT_T(KC_F2), LGUI_T(KC_SPACE), NUM_ENT,    RGUI_T(KC_BSPC), NAV_SPC, HYPR_T(KC_DEL)
                                      //`--------------------------'  `--------------------------'

  ),

  [_NAV] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB, HYPR(KC_Q), HYPR(KC_W), HYPR(KC_E), HYPR(KC_R), HYPR(KC_T), SGUI(KC_M), C(S(KC_DOWN)), LGUI(KC_B), LGUI(KC_I), KC_UP, C(S(KC_UP)), C(S(KC_RGHT)), LGUI(KC_BSPC),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
       HM_ESC, HYPR(KC_A), KC_LALT, KC_LGUI, KC_LSFT, HYPR(KC_G), KC_MUTE, C(S(KC_LEFT)), HYPR(KC_H),  KC_LEFT, KC_DOWN, KC_RGHT, LGUI(KC_L), KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, HYPR(KC_Z), HYPR(KC_X), HYPR(KC_C), HYPR(KC_V), HYPR(KC_B), LGUI(KC_K), LGUI(KC_Z), LGUI(KC_C), LGUI(KC_V), RGUI(KC_X), RSFT_T(KC_ENT),
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                            LALT_T(KC_F2), LGUI_T(KC_SPACE), FN_ENT,  FN_BKS, KC_SPC, C(S(KC_Q))
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
    KC_TAB,  S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),  KC_F4,    KC_COMM, S(KC_7), KC_7,  KC_8,   KC_9,  KC_EQL,    KC_LBRC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
    HM_ESC, LALT(KC_2), LALT(KC_3), KC_LGUI, KC_LSFT, S(KC_NUHS), KC_NUBS,    KC_DOT,  S(KC_EQL), KC_4,  KC_5,  KC_6,  LALT(KC_EQL), KC_NUHS,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
  KC_CAPS_LOCK, S(KC_6), LALT(KC_3), S(KC_8), S(KC_9), S(KC_0),                        KC_0,   KC_1,     KC_2,    KC_3,   KC_SLSH,  RSFT_T(KC_ENT),
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                              LALT_T(KC_F2), KC_SPC, KC_ENT,     KC_BSPC, KC_SPC, S(KC_0)
                                      //`--------------------------'  `--------------------------'
  ),

  [_FN] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
  QK_BOOT, G(C(S(A(KC_1)))), G(C(S(A(KC_2)))), G(C(S(A(KC_3)))), G(C(S(A(KC_4)))), G(C(S(A(KC_5)))), RM_NEXT, RM_VALU, C(S(KC_1)),    C(S(KC_W)),    C(S(KC_E)),    C(S(KC_R)),     C(S(KC_T)),     C(S(KC_3)),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  RM_HUEU, G(C(S(A(KC_6)))), G(C(S(A(KC_7)))), G(C(S(A(KC_8)))), G(C(S(A(KC_9)))), G(C(S(A(KC_0)))), RM_TOGG, RM_VALD, C(S(KC_2)),    C(S(KC_S)),    C(S(KC_D)),    C(S(KC_F)),     C(S(KC_G)),     C(S(KC_4)),
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
  RM_HUED, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,            C(S(KC_Z)),    C(S(KC_X)),    C(S(KC_C)),    C(S(KC_V)),     C(S(KC_B)),     C(S(KC_5)),
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                              KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'
  )
};

