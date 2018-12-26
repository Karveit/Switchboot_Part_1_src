#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Trinket M0"
#define VOLUME_LABEL "REBUGBOOT"
#define INDEX_URL "https://rebug.me/nintendo-switch/"
#define BOARD_ID "SAMD21E18A-Trinket-v0"

#define USB_VID 0x239A
#define USB_PID 0x001E

#define LED_PIN PIN_PA10
//#define JOYCON_PIN_ONLY 1 //Comment out this and uncomment BOTH_PINS below to enable both joycon & vol+ straps
#define BOTH_PINS 1 //Comment out this and uncomment JOYCON_PIN_ONLY to enable joycon strap only (for dual boot?)
#define JOYCON_PIN PIN_PA07
#define VOLUP_PIN PIN_PA08
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA01
#define BOARD_RGBLED_DATA_PIN             PIN_PA00

#endif
