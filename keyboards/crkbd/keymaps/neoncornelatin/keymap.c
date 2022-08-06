// kb: crkbd
// km: neoncornelatin

// -------------------------- KEYCODES LAYOUT LATINOAMERICANO ---------------------------------
// los keycodes KC predefinidos en QMK fueron pensandos para el layout US
// un keycode KC no necesariamente entrega el mismo simbolo en dos layouts distintos (por ej US y latinoamericano)
// por ej KC_EQL entrega el simbolo = con layout US, y el simbolo ¿ con layout latinoamericano
// entonces definimos la variable LA_QUEST_INV (QUEST de question e INV de inverted) y le asignamos el valor KC_EQL que entrega simbolo ¿
// la idea es mapear como obtener los distintos simbolos en layout latinoamericano e ir asignandolos a keycodes LA que iremos definiendo 
// el layout se cambia en los settings del sistema operativo

#include QMK_KEYBOARD_H

#define LA_1     KC_1    // 1 
#define LA_2     KC_2    // 2
#define LA_3     KC_3    // 3
#define LA_4     KC_4    // 4
#define LA_5     KC_5    // 5
#define LA_6     KC_6    // 6
#define LA_7     KC_7    // 7
#define LA_8     KC_8    // 8
#define LA_9     KC_9    // 9
#define LA_0     KC_0    // 0

#define LA_F1     KC_F1  // F1
#define LA_F2     KC_F2  // F2
#define LA_F3     KC_F3  // F3
#define LA_F4     KC_F4  // F4
#define LA_F5     KC_F5  // F5 
#define LA_F6     KC_F6  // F6 
#define LA_F7     KC_F7  // F7 
#define LA_F8     KC_F8  // F8 
#define LA_F9     KC_F9  // F9 
#define LA_F10    KC_F10 // F10 
#define LA_F11    KC_F11 // F11
#define LA_F12    KC_F12 // F12

#define LA_Q     KC_Q    // Q
#define LA_W     KC_W    // W
#define LA_E     KC_E    // E
#define LA_R     KC_R    // R
#define LA_T     KC_T    // T
#define LA_Y     KC_Y    // Y
#define LA_U     KC_U    // U
#define LA_I     KC_I    // I
#define LA_O     KC_O    // O
#define LA_P     KC_P    // P

#define LA_A     KC_A    // A
#define LA_S     KC_S    // S
#define LA_D     KC_D    // D
#define LA_F     KC_F    // F
#define LA_G     KC_G    // G
#define LA_H     KC_H    // H
#define LA_J     KC_J    // J
#define LA_K     KC_K    // K
#define LA_L     KC_L    // L
#define LA_NTIL  KC_SCLN // Ñ

#define LA_Z     KC_Z    // Z
#define LA_X     KC_X    // X
#define LA_C     KC_C    // C
#define LA_V     KC_V    // V
#define LA_B     KC_B    // B
#define LA_N     KC_N    // N
#define LA_M     KC_M    // M

#define LA_ENT   KC_ENT  // ENTER
#define LA_BSPC  KC_BSPC // BACKSPACE
#define LA_SPC   KC_SPC  // ESPACIO
#define LA_ESC   KC_ESC  // ESCAPE
#define LA_TAB   KC_TAB  // TABULADOR
#define LA_DEL   KC_DEL  // DELETE

#define LA_LEFT   KC_LEFT
#define LA_DOWN   KC_DOWN
#define LA_UP     KC_UP
#define LA_RIGHT  KC_RIGHT

#define LA_LCTRL  KC_LCTRL // LEFT CONTROL
#define LA_LCMD   KC_LCMD  // WINDOWS O COMMAND
#define LA_LSFT   KC_LSFT  // LEFT SHIFT
#define LA_RSFT   KC_RSFT  // RIGHT SHIFT
#define LA_CAPS   KC_CAPS  // CAPS LOCK
#define LA_ALTGR  KC_RALT  // ALTGR 
#define LA_ALT    KC_LALT  // ALT

#define LA_PGDN   KC_PGDN     // PAGEDOWN
#define LA_PGUP   KC_PGUP     // PAGEUP
#define LA_PSCR   KC_PSCREEN  // PRINTSCREEN
#define LA_HOME   KC_HOME     // HOME
#define LA_END    KC_END      // END
#define LA_INSERT KC_INSERT   // INSERT

#define LA_VOLU   KC_VOLU     // VOLUME UP
#define LA_VOLD   KC_VOLD     // VOLUME DOWN
#define LA_MUTE   KC_MUTE     // MUTE

#define LA_AT                   ALGR(KC_Q)     // @
#define LA_EXLM                 LSFT(KC_1)     // !
#define LA_EXLM_INV             LSFT(KC_EQL)   // ¡
#define LA_QUEST                LSFT(KC_MINS)  // ?
#define LA_QUEST_INV            KC_EQL         // ¿
#define LA_QUOTE                KC_MINS        // '
#define LA_DQUO                 LSFT(KC_2)     // "
#define LA_HASH                 LSFT(KC_3)     // #
#define LA_DOLLAR               LSFT(KC_4)     // $
#define LA_PERC                 LSFT(KC_5)     // %
#define LA_AMPR                 LSFT(KC_6)     // &
#define LA_SLASH                LSFT(KC_7)     // /
#define LA_LPRN                 LSFT(KC_8)     // (
#define LA_RPRN                 LSFT(KC_9)     // )
#define LA_EQUAL                LSFT(KC_0)     // =
#define LA_COMM                 KC_COMM        // ,
#define LA_SCLN                 LSFT(KC_COMM)  // ;
#define LA_DOT                  KC_DOT         // .
#define LA_COLON                LSFT(KC_DOT)   // :
#define LA_LSBRC                LSFT(KC_QUOT)  // [
#define LA_RSBRC                LSFT(KC_BSLS)  // ]
#define LA_LCBRC                KC_QUOT        // {
#define LA_RCBRC                KC_BSLS        // }
#define LA_PLUS                 KC_RBRC        // +
#define LA_ASTR                 LSFT(KC_RBRC)  // *
#define LA_MINUS                KC_SLSH        // -
#define LA_UNDS                 LSFT(KC_SLSH)  // _
#define LA_LINEQ                KC_NUBS        // <
#define LA_RINEQ                LSFT(KC_NUBS)  // >
#define LA_TILDE                ALGR(KC_RBRC)  // ~
#define LA_CIRC                 ALGR(KC_QUOT)  // ^
#define LA_PIPE                 KC_GRAVE       // |
#define LA_DEGREE               LSFT(KC_GRV)   // °
#define LA_NEG                  ALGR(KC_GRV)   // ¬
#define LA_BSLS                 ALGR(KC_MINS)  // \ (barra invertida)
#define LA_ACUTE                KC_LBRC        // ´ (dead)
#define LA_GRAVE                ALGR(KC_BSLS)  // ` (dead)
#define LA_DIAER                LSFT(KC_LBRC)  // ¨ (dead)

// -----------------------------------------------------------------------------------------------

enum corne_layers { // las capas en este keymap
    _BASE,
    _SYMB,
    _NUMP,
    _TUNE
};

enum custom_keycodes { // dando nombre a las keycodes que creare
    SYMB = SAFE_RANGE,
    NUMP,
    HUI,
    HUD,
    MACROS1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { // Las keycodes en cada capa

// hold quiere decir mantener presionado
// tap quiere decir el tipico click en una tecla
// LA_ESC actua como DELETE si CONTROL esta presionado, y como ESCAPE si no lo esta
// RALT_T(LA_CAPS) actua como ALTGR al estar presionado (en hold) y como CAPSLOCK (bloq mayus) con tap
// LA_Q entrega el simbolo @ al tener presionado RALT_T(LA_CAPS) 
// LA_PLUS actua como + con tap, y como * con tap y SHIFT en hold
// LA_MINUS actua como - con tap, y como _ con tap y SHIFT en hold
// RSFT_T(LA_QUEST_INV) entrega simbolo ¿ con tap y simbolo ? con tap y SHIFT en hold
// RSFT_T(LA_QUEST_INV) actua como SHIFT en hold (estar presionado)
// LSFT_T(LA_LPRN) entrega simbolo ( con tap y simbolo ) con tap y SHIFT en hold
// LSFT_T(LA_LPRN) actua como SHIFT en hold (estar presionado)
// LCTL_T(LA_LINEQ) entrega simbolo < con tap y simbolo > con tap y SHIFT en hold
// LCTL_T(LA_LINEQ) actua como CONTROL en hold (estar presionado)
// LALT_T(LA_LCMD) actua como ALT en hold y como CMD (ir a windows) con tap
// MT(SYMB, LA_TAB) actua como SYMB en hold y como TABULADOR con tap
// SYMB activa la capa _SYMB
// MT(NUMP,LA_ENT) actua como NUMP en hold y como ENTER con tap
// NUMP activa la capa _NUMP
// ALTGR + n entrega la enhe
// ALTGR + vocal entrega vocal con tilde
// Tanto HUI como HUD son para cambiar el color de los LEDs en la capa _BASE
// HUI aumenta en 5 el valor Hue de color
// HUD disminuye en 5 el valor Hue de color
// Este keymap debe usarse con el layout latinoamericano

/*
      .------------------------------------------------.                         .-------------------------------------------------.
      | ESC DEL|  Q @  |   W   |   E   |   R   |   T   |                         |   Y   |   U   |   I   |   O   |   P   | BACKSPC |
      |--------+-------+-------+-------+-------+-------|          _BASE          |-------+-------+-------+-------+-------+---------|
      |SFT ( ) |   A   |   S   |   D   |   F   |   G   |                         |   H   |   J   |   K   |   L   |  + *  | SFT ¿ ? |
      |--------+-------+-------+-------+-------+-------|                         |-------+-------+-------+-------+-------+---------|
      |CTRL < >|   Z   |   X   |   C   |   V   |   B   |                         |   N   |   M   |  , ;  |  . :  |  - _  |  '  "   |
      '---------------------------------------------------------|       |----------------------------------------------------------'
                               |  ALT CMD  | TAB SYMB | SPACE   |       | SPACE |  ENTER NUMP |  ALTGR CAPS  |
                               '--------------------------------'       '----------------------------------'
*/

  [_BASE] = LAYOUT_split_3x6_3(
//  .-----------------------------------------------------.                    .-----------------------------------------------------.
   LA_ESC,   LA_Q,   LA_W,    LA_E,    LA_R,    LA_T,                         LA_Y,    LA_U,    LA_I,    LA_O,   LA_P,   LA_BSPC,
//  |--------+--------+--------+--------+--------+--------|    /* _BASE */     |--------+--------+--------+--------+--------+--------|
LSFT_T(LA_LPRN), LA_A,    LA_S,    LA_D,    LA_F,    LA_G,                       LA_H,    LA_J,    LA_K,    LA_L, LA_PLUS, RSFT_T(LA_QUEST_INV),
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LCTL_T(LA_LINEQ), LA_Z,   LA_X,    LA_C,    LA_V,    LA_B,                         LA_N,    LA_M,  LA_COMM,  LA_DOT, LA_MINUS, LA_QUOTE,
//  '--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                          LALT_T(LA_LCMD), MT(SYMB, LA_TAB), LA_SPC,   LA_SPC, MT(NUMP,LA_ENT), RALT_T(LA_CAPS)
                              //'----------------------------------'  '--------------------------------'
  ),

/*
      .------------------------------------------------.                         .-------------------------------------------------.
      |    °   |   !   |   ¡   |   #   |   $   |   %   |                         |   &   | HOME  |   UP   | END  |       | BACKSPC |
      |--------+-------+-------+-------+-------+-------|          _SYMB          |-------+-------+-------+-------+-------+---------|
      |    |   |   {   |   }   |   [   |   ]   |   \   |                         |       |  LEFT |  DOWN | RIGHT |       |         |
      |--------+-------+-------+-------+-------+-------|                         |-------+-------+-------+-------+-------+---------|
      |        |       |       |       |       |PSCREEN|                         |       |    ´  |   `   |   ¬   |   ~   |         |
      '---------------------------------------------------------|       |----------------------------------------------------------'
                            |      ALT    |          |   SPACE  |       | SPACE | ENTER NUMP |   ALTGR   |
                            '-----------------------------------'       '--------------------------------'
*/

  [_SYMB] = LAYOUT_split_3x6_3(
//  .-----------------------------------------------------.                    .-----------------------------------------------------.
 LA_DEGREE, LA_EXLM, LA_EXLM_INV, LA_HASH, LA_DOLLAR, LA_PERC,                   LA_AMPR, LA_HOME, LA_UP,  LA_END,   XXXXXXX, LA_BSPC,
//  |--------+--------+--------+--------+--------+--------|     /* _SYMB */    |--------+--------+--------+--------+--------+--------|
   LA_PIPE, LA_LCBRC, LA_RCBRC, LA_LSBRC, LA_RSBRC, LA_BSLS,                    XXXXXXX, LA_LEFT,  LA_DOWN, LA_RIGHT, XXXXXXX, XXXXXXX,
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  LA_PSCR,                       XXXXXXX, LA_ACUTE, LA_GRAVE, LA_NEG, LA_TILDE, XXXXXXX,
//  '--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                        LA_ALT, _______, LA_SPC,      LA_SPC, MT(NUMP,LA_ENT), LA_ALTGR
                                    //'----------------------------'  '---------------------------------'
  ),

/*
      .------------------------------------------------.                         .-------------------------------------------------.
      |   -    |   +   |   7   |   8   |   9   |   ,   |                         |   >   |  HOME |   UP  |  END  |       | BACKSPC |
      |--------+-------+-------+-------+-------+-------|          _NUMP          |-------+-------+-------+-------+-------+---------|
      |    /   |   *   |   4   |   5   |   6   |   .   |                         |   <   | LEFT  | DOWN  | RIGHT |       |         |
      |--------+-------+-------+-------+-------+-------|                         |-------+-------+-------+-------+-------+---------|
      |    ^   |   =   |   1   |   2   |   3   |   0   |                         |       |   (   |   )   |       |       |         |
      '---------------------------------------------------------|       |----------------------------------------------------------'
                               |     ALT     | TAB SYMB | SPACE |       | SPACE |             |    ALTGR   |
                               '--------------------------------'       '----------------------------------'
*/

  [_NUMP] = LAYOUT_split_3x6_3(
//  .-----------------------------------------------------.                    .-----------------------------------------------------.
     LA_MINUS, LA_PLUS,  LA_7,   LA_8,    LA_9 ,  LA_COMM,                      LA_RINEQ, LA_HOME,  LA_UP,  LA_END,  XXXXXXX, LA_BSPC,
//  |--------+--------+--------+--------+--------+--------|    /* _NUMP */     |--------+--------+--------+--------+--------+--------|
     LA_SLASH, LA_ASTR,  LA_4,   LA_5,    LA_6,   LA_DOT,                      LA_LINEQ, LA_LEFT, LA_DOWN, LA_RIGHT, XXXXXXX, XXXXXXX,
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     LA_CIRC, LA_EQUAL,  LA_1,   LA_2,    LA_3,   LA_0,                         XXXXXXX, LA_LPRN, LA_RPRN, XXXXXXX, XXXXXXX, XXXXXXX,
//  '--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                  LA_ALT, MT(SYMB,LA_TAB), LA_SPC,    LA_SPC, _______, LA_ALTGR
                               //'---------------------------------'  '--------------------------'
  ),

/*
      .------------------------------------------------.                         .-------------------------------------------------.
      |   F1   |    F2 |    F3 |    F4 |   F5  |  F6   |                         |   F7  |   F8  |   F9  |  F10  |  F11  |   F12   |
      |--------+-------+-------+-------+-------+-------|          _TUNE          |-------+-------+-------+-------+-------+---------|
      |  TOG   |  HUI  | PLAIN |BREATH | RMOOD | RSWIRL|                         |       | MUTE  | VOLD  | VOLU  |       |         |
      |--------+-------+-------+-------+-------+-------|                         |-------+-------+-------+-------+-------+---------|
      |        |  HUD  |       |       |       |       |                         |       |       |       |       |       |         |
      '---------------------------------------------------------|       |----------------------------------------------------------'
                             |     ALT     |          |  SPACE  |       | SPACE |       |    ALTGR   |
                             '----------------------------------'       '----------------------------'
*/

  [_TUNE] = LAYOUT_split_3x6_3(
//  .-----------------------------------------------------.                    .-----------------------------------------------------.
      LA_F1,   LA_F2,   LA_F3,   LA_F4,   LA_F5,   LA_F6,                         LA_F7,  LA_F8,   LA_F9,  LA_F10,  LA_F11,   LA_F12,
//  |--------+--------+--------+--------+--------+--------|     /* _TUNE */    |--------+--------+--------+--------+--------+--------|
      RGB_TOG,  HUI,   RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,                      MACROS1, LA_MUTE, LA_VOLD, LA_VOLU, XXXXXXX, XXXXXXX,
//  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  HUD,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  '--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                         LA_ALT, _______,  LA_SPC,     LA_SPC, _______, LA_ALTGR
                                     //'---------------------------'  '--------------------------'
  )
};

// ---------------------- VARIABLES -----------------------------

led_t led_usb_state;

uint8_t mod_state;
bool key_registered;

uint32_t master_sleep;
uint32_t slave_sleep;

uint8_t current_wpm = 0;
uint8_t hue_value;
uint8_t sat_value;
uint8_t val_value;
uint8_t mode_value;
uint8_t current_hue;
uint8_t current_val;

char hue_str[4];
char sat_str[4];
char val_str[4];
char mode_str[4];
char wpm_str[4];

// --------------------------------------------------------------

void keyboard_post_init_user(void) {
    current_hue = rgblight_get_hue();
    current_val = RGBLIGHT_LIMIT_VAL;
}    
        
layer_state_t layer_state_set_user(layer_state_t state) {
// con esta funcion se puede controlar el color de los LEDs en cada capa

    switch (biton32(state)) {

        case _TUNE:
            rgblight_sethsv(HSV_WHITE); // color blanco para los LEDs en capa _TUNE
            break;

        case _NUMP:
            rgblight_sethsv(HSV_TEAL); // color celeste para los LEDs en capa _NUMP
            break;

        case _SYMB:
            rgblight_sethsv(245, 255, current_val); 
            // color rosado para los LEDs en capa _SYMB
            // valor Hue 245 entrega color rosado
            // 255 es el valor Saturation para todos los colores excepto para el blanco
            // current_val toma el valor de RGBLIGHT_LIMIT_VAL el cual defini como 110 en config.h
            // un valor alto de RGBLIGHT_LIMIT_VAL puede calentar el microcontrolador (hay uno en cada mitad)
            break;

        case _BASE: 
            if (host_keyboard_led_state().caps_lock) { // si CAPSLOCK (bloq mayus) esta activado
                rgblight_sethsv(18, 255, current_val);
                // color amarillo para los LEDs 
                // valor Hue 18 entrega color amarillo
            } else { // si CAPSLOCK (bloq mayus) no esta activado
                rgblight_sethsv(current_hue, 255, current_val); 
                // entonces asignar este color a los LEDs para la capa _BASE
                // valor Hue current_hue el cual puede ser modificado con los keycodes HUI y HUD en la capa _TUNE
                // HUI aumenta en 5 el valor Hue y HUD lo disminuye en 5
            } 
            break; 
    }
    return state;
}

void led_set_user(uint8_t usb_led) {
// con esta funcion se puede controlar el color de los LEDs al activar CAPSLOCK (bloq mayus)

    if (usb_led & (1<<USB_LED_CAPS_LOCK)) { // si CAPSLOCK esta activado
        rgblight_sethsv(18, 255, current_val); 
        // color amarillo para los LEDs 
        // valor Hue 18 entrega color amarillo
    } else { // si CAPSLOCK no esta activado
        rgblight_sethsv(current_hue, 255, current_val); // entonces asignar este color a los LEDs 
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
// esta funcion sirve para dar distintos tapping terms a distintas keycodes
// tapping term es el tiempo que diferencia el tap del hold
// por ej un tapping term de 125ms para RALT_T(LA_CAPS) 
// significa que al presionarla si esta es liberada antes de 125ms desde que fue presionada
// entonces se interpreta como tap
// si es presionada por mas de 125ms se interpreta como hold
// el tapping term tambien se usa para el tapdance

    switch (keycode) {

        case LSFT_T(LA_LPRN):
        case RSFT_T(LA_QUEST_INV):
        case LCTL_T(LA_LINEQ): 
        case MT(SYMB,LA_TAB):
        case MT(NUMP,LA_ENT):
        case LALT_T(LA_LCMD):
        case RALT_T(LA_CAPS):
            return 125; // 125ms (milisegundos)
            
        default: // para el resto de keycodes que no este en el listado anterior
            return TAPPING_TERM; // TAPPING_TERM fue definido como 200ms en config.h
    }
}

// -------------------------- CODIGO PARA LAS PANTALLAS OLED ---------------------------------

#ifdef OLED_ENABLE // si OLED_ENABLE = yes en rules.mk
#include <stdio.h>

static void master_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0x18, 0x00, 
        0xc0, 0xf0, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0xf8, 0xfc, 0xfe, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 
        0x3f, 0x3f, 0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7c, 0x78, 0x78, 0x38, 0x1c, 0x0f, 0x00, 0x00
    };
    
    oled_write_raw_P(crkbd_logo, 96);
    
    if (current_wpm != 0) { 
        master_sleep = timer_read32(); // se actualiza oled_sleep
    }        
}

static void render_layer(void) { // esta funcion muestra las capas en el OLED y resalta la capa presente
    oled_write_P(PSTR("BASE\n"), layer_state_is(_BASE));
    oled_write_P(PSTR("SYMB\n"), layer_state_is(_SYMB) && !layer_state_is(_TUNE));
    oled_write_P(PSTR("NUMP\n"), layer_state_is(_NUMP) && !layer_state_is(_TUNE));
    oled_write_P(PSTR("TUNE\n"), layer_state_is(_TUNE));
}

static void render_mode(void) {
    mode_str[3] = '\0';
    mode_str[2] = '0' + mode_value % 10;
    mode_str[1] = '0' + ( mode_value /= 10) % 10;
    mode_str[0] = '0' + mode_value / 10;
    oled_write("M ", false);
    oled_write(mode_str, false); // printear valor de WPM
}   

static void render_hsv(void) {
    oled_write("H ", false);
    hue_str[3] = '\0';
    hue_str[2] = '0' + hue_value % 10;
    hue_str[1] = '0' + ( hue_value /= 10) % 10;
    hue_str[0] = '0' + hue_value / 10;
    oled_write(hue_str, false);
    
    oled_write("S ", false);
    sat_str[3] = '\0';
    sat_str[2] = '0' + sat_value % 10;
    sat_str[1] = '0' + ( sat_value /= 10) % 10;
    sat_str[0] = '0' + sat_value / 10;
    oled_write(sat_str, false);
    
    oled_write("V ", false);
    val_str[3] = '\0';
    val_str[2] = '0' + val_value % 10;
    val_str[1] = '0' + ( val_value /= 10) % 10;
    val_str[0] = '0' + val_value / 10;
    oled_write(val_str, false);    
}    

static void slave_logo(void) {
    static const char PROGMEM corne_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,192,192,192,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,192, 96, 48, 16, 24,136,204,196,  6,  6,130,194,226,118, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,128,224,120, 60, 14,  6,  3,  1,  1,  0,  0,  0, 16, 29,  7,  0,128,240,124, 30,  7,  3,128,192,128,192,  0,  0,128,224, 68,  4,228,230,102,  6,134,246,126, 30,  7,130,134,  6,  6,134,128,128,128,  0,  0,128,128,128,192,192,  0,  0,  0,  0,  0,  0, 12, 31, 49, 48,224,248,254, 63, 63, 61, 30, 22, 23,147,145,176,240,192,208,248,236,140,248,192,224,112, 56, 28, 28,128,128,192,224,240,248,248,120,240,248,248,192, 96, 48,152,216,248,112, 56,152,128,192, 64,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,254,255,  1,  0,  0,  0,  0,128,192,192, 96, 48, 24, 12,  4,  6, 63, 63, 15, 15, 15, 13, 14, 15, 15,  3,  1,  3,  3,  7,197,246,251,127, 15,  2, 59,127, 99, 48, 28, 14, 31, 15,  6,  7,  7,  3, 15, 15,  6, 15, 15,  3, 31, 15,  6,  2,  1,  0,  0,  0,192,224, 96, 48,126,127,127, 63,  6,  6,130,195,225,241,121, 61, 15,  7,  1,  7,  7,  6,  7,  1,  7, 15,  6,  6,  3,  3,  1,  1,  1,  1,  1,  0, 12, 15,  7,131,193, 96, 48,179,255,127,  6,  2,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  1,  3,  3,  2,  2,  3,  3,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31, 63, 57, 56, 56, 24, 28, 28, 14,  7,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,124, 78,103, 97, 48, 60, 30,  7,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };

    //oled_write_P(corne_logo, false);
	oled_write_raw_P(corne_logo, sizeof(corne_logo));
    
    if (current_wpm != 0) { 
        slave_sleep = timer_read32(); // se actualiza oled_sleep
    }        
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_180;
    }
    return rotation;
    // rotacion de 270 en ambas pantallas OLED (master y slave)
    // de manera que el punto inicial este en un cierto extremo
    // y se siga cierta orientacion
}


bool oled_task_user(void) { 
// funcion en la cual se indica que poner en cada OLED
// el OLED es de 128x32 pixeles
// cada page es de 8 pixeles a lo largo del lado con 128 pixeles
// por lo que hay 16 pages a lo largo de los 128 pixeles


    current_wpm = get_current_wpm();
    mode_value = rgblight_get_mode();
    hue_value = rgblight_get_hue();
    sat_value = rgblight_get_sat();
    val_value = rgblight_get_val();
    
    if (timer_elapsed32(master_sleep) > 60000 && timer_elapsed32(slave_sleep) > 60000 && current_wpm == 0) {
        if (is_oled_on()) {
            oled_off();
        }    
        timer_init();
        return false;
    }
    
    if (current_wpm != 0 && !is_oled_on()) {
        oled_on();
    }
    
    led_usb_state = host_keyboard_led_state();      
    
    if (is_keyboard_master()) { // OLED del master
        oled_set_cursor(0,1);
        master_logo();
        oled_set_cursor(0,4);
        oled_write_P(PSTR("BOCAZ"), false);
        oled_set_cursor(0,6);
        render_layer(); // lo de las capas
        oled_set_cursor(0,11);
        render_mode();
        oled_set_cursor(0,12);
        render_hsv(); // lo del HSV
    } else {
        slave_logo();
    }

    return false;
}

#endif // OLED_ENABLE

// --------------------------------------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// esta funcion es llamada cada vez que se presiona o se libera una keycode
// es aca donde se le asigna codigo a una keycode que estoy creando
// y tambien es aca donde le cambio el codigo o le sumo codigo a una keycode ya predefinida

mod_state = get_mods();

    switch (keycode) {

        case MACROS1:
            if (record->event.pressed) {
                SEND_STRING("Aca escribir el mensaje");
            }
            return false;
 
        case LA_ESC:
            if (mod_state & MOD_MASK_CTRL) { // si CONTROL esta en hold
                if (record->event.pressed) { // si LA_ESC es tapeado o presionado
                    del_mods(MOD_MASK_CTRL); // desactivar momentaneamente CONTROL para que no interfiera con el tapeo de LA_DEL
                    tap_code16(LA_DEL); // tap_code involucra tanto register_code como unregister_code
                    set_mods(mod_state); // volver a mod_state a como estaba antes de desactivar CONTROL
                    return false; // esto seria todo para este caso
                }
            } else { // si CONTROL no esta en hold
                return true; // hacer lo que QMK tiene predeterminado para LA_ESC (aca se llega cuando CONTROL no esta en hold)
            }

        case LA_Q:
            if (get_mods() & MOD_BIT(LA_ALTGR)) { // si ALTGR esta en hold
                if (record->event.pressed) { // si LA_Q es tapeado o presionado
                    del_mods(LA_ALTGR); // desactivar momentaneamente ALTGR para que no interfiera con el tapeo de LA_AT
                    tap_code16(LA_AT); //tap_code involucra tanto register_code como unregister_code
                    set_mods(mod_state); // volver a mod_state a como estaba antes de desactivar ALTGR
                    return false; // esto seria todo para este caso
                }
            } else { // si ALTGR no esta en hold
                return true; // hacer lo que QMK tiene predeterminado para LA_Q (aca se llega cuando ALTGR no esta en hold)
            }

        case HUI:
            if (record->event.pressed) {
                current_hue = current_hue + 5;
                if (current_hue > 255) {
                    current_hue = current_hue - 256;
                }    
            } else {
                ;
            }
            return false;    
            
        case HUD:
            if (record->event.pressed) {
                current_hue = current_hue - 5;
                if (current_hue < 0) {
                    current_hue = 256 + current_hue;
                }    
            } else {
                ;
            }
            return false;    

        case MT(SYMB,LA_TAB):
            if (record->tap.count && record->event.pressed) { // si hay tap
                tap_code16(LA_TAB); // tapear LA_TAB
            } else if (record->event.pressed) { // si hay hold
                layer_on(_SYMB); // activar capa _SYMB
                update_tri_layer(_SYMB, _NUMP, _TUNE); // si ademas _NUMP esta activado entonces activar _TUNE
            } else { // si keycode es liberada
                layer_off(_SYMB); // desactivar capa _SYMB
                update_tri_layer(_SYMB, _NUMP, _TUNE); // desactivar _TUNE
            }
            return false; // seria todo
            
        case MT(NUMP,LA_ENT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LA_ENT);
            } else if (record->event.pressed) {
                layer_on(_NUMP);
                update_tri_layer(_SYMB, _NUMP, _TUNE);
            } else {
                layer_off(_NUMP);
                update_tri_layer(_SYMB, _NUMP, _TUNE);
            }
            return false;

        case LCTL_T(LA_LINEQ):
            if (record->tap.count && record->event.pressed) { // si hay tap
                if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta presionado
                    del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_RINEQ
                    tap_code16(LA_RINEQ); // >
                    set_mods(mod_state); // volver a como estaba mod_state antes de desactivar SHIFT
                } else { // si SHIFT no esta presionado
                    tap_code16(LA_LINEQ); // <
                }
            } else if (record->event.pressed) { // si hay hold
                register_code16(LA_LCTRL); // registrar CONTROL
            } else { // si keycode es liberada
                unregister_code16(LA_LCTRL); // unregister CONTROL
            }
            return false; // seria todo 

        case LSFT_T(LA_LPRN):
            if (record->tap.count && record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_RPRN
                    tap_code16(LA_RPRN); // )
                    set_mods(mod_state); // volver a como estaba mod_state antes de desactivar SHIFT
                } else {
                    tap_code16(LA_LPRN); // (
                }
            } else if (record->event.pressed) {
                register_code16(LA_LSFT);
            } else {
                unregister_code16(LA_LSFT);
            }
            return false;    

        case LA_A:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta presionado
                if (record->event.pressed) { // si el keycode es tapeado o holdeado
                    if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_ACUTE
                        tap_code16(LA_ACUTE); // ´
                        register_code(LA_LSFT); // registrar SHIFT para que la a salga mayuscula
                        tap_code16(LA_A); // A
                        unregister_code(LA_LSFT); // unregister SHIFT
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    } else { // si SHIFT no esta activado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        tap_code16(LA_ACUTE);
                        tap_code16(LA_A);
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    }
                }        
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predefinido para LA_A
            }
            
        case LA_E:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta presionado
                if (record->event.pressed) { // si el keycode es tapeado o holdeado
                    if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_ACUTE
                        tap_code16(LA_ACUTE); // ´
                        register_code(LA_LSFT); // registrar SHIFT para que la e salga mayuscula
                        tap_code16(LA_E); // E
                        unregister_code(LA_LSFT); // unregister SHIFT
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    } else { // si SHIFT no esta activado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        tap_code16(LA_ACUTE);
                        tap_code16(LA_E); // e
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    }
                }        
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predefinido para LA_E
            }
            
        case LA_I:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta presionado
                if (record->event.pressed) { // si el keycode es tapeado o holdeado
                    if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_ACUTE
                        tap_code16(LA_ACUTE); // ´
                        register_code(LA_LSFT); // registrar SHIFT para que la i salga mayuscula
                        tap_code16(LA_I); // I
                        unregister_code(LA_LSFT); // unregister SHIFT
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    } else { // si SHIFT no esta activado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        tap_code16(LA_ACUTE);
                        tap_code16(LA_I); // i
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    }
                }        
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predefinido para LA_I
            }

        case LA_O:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta presionado
                if (record->event.pressed) { // si el keycode es tapeado o holdeado
                    if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_ACUTE
                        tap_code16(LA_ACUTE); // ´
                        register_code(LA_LSFT); // registrar SHIFT para que la o salga mayuscula
                        tap_code16(LA_O); // O
                        unregister_code(LA_LSFT); // unregister SHIFT
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    } else { // si SHIFT no esta activado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        tap_code16(LA_ACUTE);
                        tap_code16(LA_O); // o
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    }
                }        
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predefinido para LA_O
            }
            
        case LA_U:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta presionado
                if (record->event.pressed) { // si el keycode es tapeado o holdeado
                    if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        del_mods(MOD_MASK_SHIFT); // desactivar SHIFT para que no interfiera con el tapeo de LA_ACUTE
                        tap_code16(LA_ACUTE); // ´
                        register_code(LA_LSFT); // registrar SHIFT para que la u salga mayuscula
                        tap_code16(LA_U); // U
                        unregister_code(LA_LSFT); // unregister SHIFT
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    } else { // si SHIFT no esta activado
                        del_mods(LA_ALTGR); // desactivar ALTGR
                        tap_code16(LA_ACUTE);
                        tap_code16(LA_U); // u
                        set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                        return false; // seria todo
                    }
                }        
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predefinido para LA_U
            }
            
        case LA_N:
            if (mod_state & MOD_BIT(LA_ALTGR)) { // si ALTGR esta siendo presionado
                if (record->event.pressed) { // si keycode es tapeado o holdeado
                    del_mods(LA_ALTGR); // desactivar ALTGR para que no interfiera con el tapeo de LA_NTIL
                    tap_code16(LA_NTIL); // tapear letra enhe
                    set_mods(mod_state); // volver a como estaba mod_state antes de desactivar ALTGR
                    return false; // seria todo
                }    
            } else { // si ALTGR no esta siendo presionado
                return true; // hacer lo que QMK tiene predeterminado para LA_N
            }

        case LA_CIRC:
            if (record->event.pressed) { // si keycode es tapeado o holdeado
                tap_code16(LA_CIRC); // tapear LA_CIRC
                tap_code16(LA_SPC); // tapear SPACE (ya que LA_CIRC es un simbolo mudo en layout latinoamericano)
            } else { // si keycode es liberado
                ; // no hacer nada
            }
            return false; // seria todo  

        case LA_ACUTE:
            if (record->event.pressed) {
                tap_code16(LA_ACUTE);
                tap_code16(LA_SPC);
            } else {
                ;
            }
            return false;  

        case LA_GRAVE:
            if (record->event.pressed) {
                tap_code16(LA_GRAVE);
                tap_code16(LA_SPC);
            } else {
                ;
            }
            return false;  

        case LA_QUOTE:
            if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta presionado
                if (record->event.pressed) { // al presionar el keycode
                    del_mods(MOD_MASK_SHIFT); // desactivar SHIFT
                    register_code16(LA_DQUO); // ya que LA_DQUO entrega el simbolo "
                    set_mods(mod_state); // volver a como estaba mod_state antes de desactivar SHIFT
                    return false; // seria todo
                } else { // al liberar el keycode
                    unregister_code16(LA_DQUO); // dejar de registrar LA_DQUO
                    return false;
                }
            } else { // si SHIFT no esta siendo presionado
                return true; // hacer lo que QMK tiene predeterminado para LA_QUOTE
            }

        case RSFT_T(LA_QUEST_INV):
            if (record->tap.count && record->event.pressed) { // si hay tap
                if (mod_state & MOD_MASK_SHIFT) { // si SHIFT esta siendo presionado
                    del_mods(MOD_MASK_SHIFT); // desactivar SHIFT
                    tap_code16(LA_QUEST); // ?
                    set_mods(mod_state); // volver a como estaba mod_state antes de desactivar SHIFT
                } else { // si SHIFT no esta siendo presionado
                    tap_code16(LA_QUEST_INV); // ¿
                }
            } else if (record->event.pressed) { // si hay hold
                register_code16(LA_RSFT); // registrar LA_RSFT
            } else { // al liberar keycode
                unregister_code16(LA_RSFT); // unregister LA_RSFT
            }
            return false; // seria todo

        case LALT_T(LA_LCMD): 
            if (record->tap.count && record->event.pressed) { // si hay tap
                tap_code16(LA_LCMD); // tapear LA_LCMD
                return false; // seria todo
            }
            return true; // aca se llega cuando no hay tap, y en este caso se debe hacer lo predefinido por QMK (ALT normal)

        case RALT_T(LA_CAPS):
            if (record->tap.count && record->event.pressed) { // si hay tap
                tap_code16(LA_CAPS); // tapear CAPSLOCK
                return false; // seria todo
            }
            return true;

    }
    return true;
}
