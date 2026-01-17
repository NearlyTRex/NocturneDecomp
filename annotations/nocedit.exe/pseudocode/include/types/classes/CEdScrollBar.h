#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CEdScrollBar
// Ghidra size: 0x34 (52 bytes)
typedef struct CEdScrollBar {
    int scroll_position; // 0x0
    int current_value; // 0x4
    int max_value; // 0x8
    int scroll_increment; // 0xc
    int orientation; // 0x10
    int bounds_left; // 0x14
    int bounds_top; // 0x18
    int bounds_right; // 0x1c
    int bounds_bottom; // 0x20
    int track_start; // 0x24
    int track_end; // 0x28
    int thumb_start; // 0x2c
    int thumb_end; // 0x30
} CEdScrollBar;

