#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCramConfig
// Ghidra size: 0x74 (116 bytes)
typedef struct SCramConfig {
    char filename[80]; // 0x0
    int initial_value; // 0x50
    int algorithm_mode; // 0x54
    int coverage_threshold; // 0x58
    int enable_optimization; // 0x5c
    int enable_gap_filling; // 0x60
    int enable_rotation; // 0x64
    int enable_flipping; // 0x68
    int enable_scaling; // 0x6c
    int final_mode; // 0x70
} SCramConfig;

