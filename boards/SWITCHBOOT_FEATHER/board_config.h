#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Feather M0 Express"
#define VOLUME_LABEL "SWITCHBOOT"
#define INDEX_URL "http://adafru.it/3403"
#define BOARD_ID "SAMD21G18A-Feather-M0-Express-v0"

#define USB_VID 0x239A
#define USB_PID 0x001B

#define STRAP_HOLD_TIME 100

#define JOYCON_PIN_ONLY 1 //Comment out this and uncomment BOTH_PINS below to enable both joycon & vol+ straps
//#define BOTH_PINS 1 //Comment out this and uncomment JOYCON_PIN_ONLY to enable joycon strap only (for dual boot?)
#define JOYCON_PIN PIN_PA07
#define VOLUP_PIN PIN_PA19

#ifdef BOTH_PINS
#define STRAP_VERSION "Joycon and Vol+ Straps. Permanent boot into CFW. Hold RESET on device during power-on for OFW boot"
#define PINS_ACTIVE "both_pins"
#endif

#ifdef JOYCON_PIN_ONLY
#define STRAP_VERSION "Joycon Strap ONLY. Dual-boot mode."
#define PINS_ACTIVE "joycon_pin_only"
#endif

#define LED_PIN PIN_PA17

#define BOARD_NEOPIXEL_PIN PIN_PA06
#define BOARD_NEOPIXEL_COUNT 1


#endif
