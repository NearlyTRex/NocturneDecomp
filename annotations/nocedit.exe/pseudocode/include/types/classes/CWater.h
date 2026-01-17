#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CWater
// Ghidra size: 0x10 (16 bytes)
typedef struct CWater {
    int wave_animation_enabled; // 0x0
    float water_level_y; // 0x4
    float tile_size; // 0x8
    float visible_area_sqft; // 0xc
} CWater;

