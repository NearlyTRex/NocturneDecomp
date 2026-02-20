#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPaletteManager
// Ghidra size: 0x10 (16 bytes)
typedef struct CPaletteManager {
    int texture_count; // 0x0
    char* texture_names; // 0x4
    int max_pixel_count; // 0x8
    int max_texture_count; // 0xc
} CPaletteManager;

