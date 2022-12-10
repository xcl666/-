#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDE29
#define PRODUCT_ID      0x7319
#define DEVICE_VER      0x0001
#define MANUFACTURER    Leo Deng
#define PRODUCT         BUBBLE 75
#define DESCRIPTION     BUBBLE 75

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, C7, F1 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, E6, F0, D0, D1, D4, D6, D7, B4, B5, B6, C6 }
#define UNUSED_PINS
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define NKRO

/* WS2812 RGB */
#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN B7
#define RGBLED_NUM 81
#define DRIVER_LED_TOTAL 81
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LAYERS
//#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_TIMEOUT 0
#define RGB_DISABLE_AFTER_TIMEOUT 0
#define RGB_DISABLE_WHEN_USB_SUSPENDED false
#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_STARTUP_HUE 0
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_STARTUP_SPD 127
#endif

/* VIA */
//#ifdef VIA_ENABLE
//#define DYNAMIC_KEYMAP_LAYER_COUNT 2
//#endif

#endif
