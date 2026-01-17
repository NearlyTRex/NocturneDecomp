#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCramRectangle
// Ghidra size: 0x28 (40 bytes)
typedef struct SCramRectangle {
    int left; // 0x0
    int top; // 0x4
    int right; // 0x8
    int bottom; // 0xc
    int max_dimension; // 0x10
    int orientation; // 0x14
    int reserved_0x18; // 0x18
    int reserved_0x1c; // 0x1c
    int reserved_0x20; // 0x20
    int active_flag; // 0x24
} SCramRectangle;

