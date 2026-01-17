#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SColorBox
// Ghidra size: 0x28 (40 bytes)
typedef struct SColorBox {
    short avg_red; // 0x0
    short avg_green; // 0x2
    short avg_blue; // 0x4
    short avg_intensity; // 0x6
    float weighted_variance; // 0x8
    float red_variance; // 0xc
    float green_variance; // 0x10
    float blue_variance; // 0x14
    float intensity_variance; // 0x18
    float final_metric; // 0x1c
    int start_index; // 0x20
    int pixel_count; // 0x24
} SColorBox;

