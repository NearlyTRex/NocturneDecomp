#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCramRectangle
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SCramRectangle {
    int map_id; // 0x0
    int start_x; // 0x4
    int start_y; // 0x8
    int end_x; // 0xc
    int end_y; // 0x10
    int orientation; // 0x14
    int occupant; // 0x18
    int candidate_end_x; // 0x1c
    int candidate_end_y; // 0x20
    int active_flag; // 0x24
} SCramRectangle;
#pragma pack(pop)

