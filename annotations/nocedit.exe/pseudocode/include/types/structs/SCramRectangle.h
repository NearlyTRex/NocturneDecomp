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
    int unk1; // 0x18
    int unk2; // 0x1c
    int unk3; // 0x20
    int active_flag; // 0x24
} SCramRectangle;

