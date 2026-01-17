#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CDrawSurface
// Ghidra size: 0x20 (32 bytes)
typedef struct CDrawSurface {
    int width; // 0x0
    int height; // 0x4
    int x; // 0x8
    int y; // 0xc
    int clip_left; // 0x10
    int clip_top; // 0x14
    int clip_right; // 0x18
    int clip_bottom; // 0x1c
} CDrawSurface;

