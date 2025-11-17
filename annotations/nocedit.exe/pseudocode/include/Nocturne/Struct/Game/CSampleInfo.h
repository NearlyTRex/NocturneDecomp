#pragma once

// Structure: CSampleInfo
// Ghidra size: 0x11c (284 bytes)
typedef struct CSampleInfo {
    char name[256]; // 0x0
    int streaming_flag; // 0x100
    int bit_depth; // 0x104
    int num_channels; // 0x108
    int sample_rate; // 0x10c
    int sample_count; // 0x110
    float reference_distance; // 0x114
    float reference_volume_distance; // 0x118
} CSampleInfo;

