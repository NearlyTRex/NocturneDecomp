#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"

// Structure: CMouse
// Ghidra size: 0x260 (608 bytes)
typedef struct CMouse {
    CAlphaBitmap cursors[8]; // 0x0
    CAlphaBitmap flames[7]; // 0xa0
    CAlphaBitmap skulls[15]; // 0x12c
    int anim_timer; // 0x258
    int effect_mode; // 0x25c
} CMouse;

