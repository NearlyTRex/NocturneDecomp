#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STextureLoadConfig
// Ghidra size: 0x250 (592 bytes)
typedef struct STextureLoadConfig {
    char field_0[512]; // 0x0
    int source_width; // 0x200
    int source_height; // 0x204
    char field_520[12]; // 0x208
    int processing_mode; // 0x214
    int src_x1; // 0x218
    int src_y1; // 0x21c
    int src_x2; // 0x220
    int src_y2; // 0x224
    int dest_x; // 0x228
    int dest_y; // 0x22c
    int scaled_dest_x; // 0x230
    int scaled_dest_y; // 0x234
    char field_568[8]; // 0x238
    int atlas_x1; // 0x240
    int atlas_y1; // 0x244
    int atlas_x2; // 0x248
    int atlas_y2; // 0x24c
} STextureLoadConfig;

