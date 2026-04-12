#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CEdCheck
// Ghidra size: 0xec (236 bytes)
#pragma pack(push, 1)
typedef struct CEdCheck {
    int checkbox_mode; // 0x0, 0=binary,1=tri-state
    int checked_state; // 0x4
    int interactive_flag; // 0x8
    int text_color_mode; // 0xc
    int x_position; // 0x10
    int y_position; // 0x14
    int total_width; // 0x18
    int right_boundary; // 0x1c
    int border_style_flag; // 0x20
    char checkbox_text[200]; // 0x24
} CEdCheck;
#pragma pack(pop)

