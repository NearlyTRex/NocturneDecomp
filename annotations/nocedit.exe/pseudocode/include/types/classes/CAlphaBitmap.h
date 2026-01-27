#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CAlphaBitmap
// Ghidra size: 0x14 (20 bytes)
typedef struct CAlphaBitmap {
    char* raw; // 0x0
    char* opa; // 0x4
    uint* act; // 0x8
    int width; // 0xc
    int height; // 0x10
} CAlphaBitmap;

