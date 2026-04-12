#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CBitmap
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct CBitmap {
    char name[20]; // 0x0
    short width; // 0x14
    short height; // 0x16
    short bytes_per_row; // 0x18
    char bit_depth; // 0x1a
    char bytes_per_pixel; // 0x1b
    void* pixel_data; // 0x1c
    void** row_table; // 0x20
    void* palette; // 0x24
} CBitmap;
#pragma pack(pop)

