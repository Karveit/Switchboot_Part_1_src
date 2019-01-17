#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Trinket M0"
#define VOLUME_LABEL "SWITCHBOOT"
#define INDEX_URL "http://adafru.it/3500"
#define BOARD_ID "SAMD21E18A-Trinket-v0"

#define USB_VID 0x239A
#define USB_PID 0x001E

#define STRAP_HOLD_TIME 5000

//#define JOYCON_PIN_ONLY 1 //Comment out this and uncomment BOTH_PINS below to enable both joycon & vol+ straps
#define BOTH_PINS 1 //Comment out this and uncomment JOYCON_PIN_ONLY to enable joycon strap only (for dual boot?)
#define LED_PIN PIN_PA10
#define JOYCON_PIN PIN_PA07
#define VOLUP_PIN PIN_PA08
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

#ifdef BOTH_PINS
#define STRAP_VERSION "Joycon and Vol+ Straps. Permanent boot into CFW. Hold RESET on device during power-on for OFW boot"
#endif

#ifdef JOYCON_PIN_ONLY
#define STRAP_VERSION "Joycon Strap ONLY. Dual-boot mode."
#endif

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA01
#define BOARD_RGBLED_DATA_PIN             PIN_PA00

#endif
