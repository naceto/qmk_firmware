// Copyright 2023 MementoArgounaut

#pragma once

#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// Serial USART duplex.
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
// #define SERIAL_USART_PIN_SWAP      // Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)
#define SERIAL_USART_TX_PIN GP0    // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin

// Reset.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U