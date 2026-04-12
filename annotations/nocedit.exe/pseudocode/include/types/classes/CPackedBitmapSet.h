#pragma once

// Forward declarations
struct CPackedBitmap;

// Dependencies
#include "system/basetypes.h"

// Structure: CPackedBitmapSet
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct CPackedBitmapSet {
    int bitmap_count; // 0x0
    struct CPackedBitmap* bitmap_array; // 0x4
    char filename[20]; // 0x8
    int width; // 0x1c
    int height; // 0x20
    int frames_per_bitmap; // 0x24
} CPackedBitmapSet;
#pragma pack(pop)

