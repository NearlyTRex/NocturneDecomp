#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CAlphaBitmap
// Ghidra size: 0x14 (20 bytes)
typedef struct CAlphaBitmap {
    char* ptrRaw; // 0x0
    char* ptrOpa; // 0x4
    uint* ptrAct; // 0x8
    int width; // 0xc
    int height; // 0x10
} CAlphaBitmap;

