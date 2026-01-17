#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CInputString
// Ghidra size: 0x140 (320 bytes)
typedef struct CInputString {
    char string_data[300]; // 0x0
    int max_length; // 0x12c
    int current_length; // 0x130
    int cursor_position; // 0x134
    int selection_start; // 0x138
    int mask_mode; // 0x13c
} CInputString;

