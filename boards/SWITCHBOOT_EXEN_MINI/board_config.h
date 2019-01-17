#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Sparkfun"
#define PRODUCT_NAME "SAMD21 Dev Breakout"
#define VOLUME_LABEL "SPARKFUN"
#define INDEX_URL "https://www.sparkfun.com/products/13672"
#define BOARD_ID "SAMD21G18A-Dev-Sparkfun-v0"

#define USB_VID 0x1B4F
#define USB_PID 0x0D21

#define STRAP_HOLD_TIME 100

#define JOYCON_PIN_ONLY 1 //Comment out this and uncomment BOTH_PINS below to enable both joycon & vol+ straps
//#define BOTH_PINS 1 //Comment out this and uncomment JOYCON_PIN_ONLY to enable joycon strap only (for dual boot?)

#define JOYCON_PIN PIN_PA04
#define VOLUP_PIN PIN_PA05

#ifdef BOTH_PINS
#define STRAP_VERSION "Joycon and Vol+ Straps. Permanent boot into CFW."
#endif

#ifdef JOYCON_PIN_ONLY
#define STRAP_VERSION "Joycon Strap ONLY. Dual-boot mode."
#endif

#define LED_PIN PIN_PA06

#endif