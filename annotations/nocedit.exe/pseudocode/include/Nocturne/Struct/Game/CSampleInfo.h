#pragma once

// Structure: CSampleInfo
// Ghidra size: 0x11c (284 bytes)
typedef struct CSampleInfo {
    char name[256]; // 0x0
    int field_256; // 0x100
    int bit_depth; // 0x104
    int num_channels; // 0x108
    int sample_rate; // 0x10c
    int total_bytes; // 0x110
    int field_276; // 0x114
    int field_280; // 0x118
} CSampleInfo;

