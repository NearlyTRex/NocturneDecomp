#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SProjectionParams
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SProjectionParams {
    int half_width_fixed; // 0x0
    int neg_half_height_fixed; // 0x4
    int center_x_fixed; // 0x8
    int center_y_fixed; // 0xc
} SProjectionParams;
#pragma pack(pop)

