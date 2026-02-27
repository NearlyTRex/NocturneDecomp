#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SColorQuantBox
// Ghidra size: 0x40 (64 bytes)
typedef struct SColorQuantBox {
    short avg_red; // 0x0
    short avg_green; // 0x2
    short avg_blue; // 0x4
    short avg_intensity; // 0x6
    double total_weighted_error; // 0x8
    double spread_red; // 0x10
    double spread_green; // 0x18
    double spread_blue; // 0x20
    double spread_intensity; // 0x28
    double max_spread; // 0x30
    int start_index; // 0x38
    int count; // 0x3c
} SColorQuantBox;

