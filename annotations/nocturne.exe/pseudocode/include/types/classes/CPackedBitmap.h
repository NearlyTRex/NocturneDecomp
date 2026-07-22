#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPackedBitmap
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct CPackedBitmap {
    char filename[20]; // 0x0
    ushort* packed_data; // 0x14
    int width; // 0x18
    int height; // 0x1c
    int* row_offsets; // 0x20
} CPackedBitmap;
#pragma pack(pop)

