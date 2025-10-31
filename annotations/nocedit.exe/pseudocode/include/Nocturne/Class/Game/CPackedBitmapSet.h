#pragma once

// Structure: CPackedBitmapSet
// Ghidra size: 0x28 (40 bytes)
typedef struct CPackedBitmapSet {
    int bitmap_count; // 0x0
    CPackedBitmap* bitmap_array; // 0x4
    char filename[20]; // 0x8
    int extension; // 0x1c
    int base_path; // 0x20
    int config_param; // 0x24
} CPackedBitmapSet;

