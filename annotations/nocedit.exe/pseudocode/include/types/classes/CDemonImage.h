#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SRGBColorPalette.h"

// Structure: CDemonImage
// Ghidra size: 0x60c (1548 bytes)
typedef struct CDemonImage {
    uchar color_cube_lookup[256]; // 0x0
    ushort color_values[256]; // 0x100
    void* data; // 0x300
    int width; // 0x304
    int height; // 0x308
    SRGBColorPalette palette; // 0x30c
} CDemonImage;

