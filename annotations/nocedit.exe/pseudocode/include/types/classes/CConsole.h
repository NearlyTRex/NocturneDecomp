#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CConsole
// Ghidra size: 0xfbc (4028 bytes)
typedef struct CConsole {
    int file_logging_enabled; // 0x0
    char console_buffer[4000]; // 0x4
    int current_column; // 0xfa4
    int current_row; // 0xfa8
    int console_width; // 0xfac
    int console_height; // 0xfb0
    int screen_x; // 0xfb4
    int screen_y; // 0xfb8
} CConsole;

