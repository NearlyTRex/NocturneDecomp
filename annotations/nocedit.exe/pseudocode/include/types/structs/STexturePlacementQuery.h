#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STexturePlacementQuery
// Ghidra size: 0x40 (64 bytes)
typedef struct STexturePlacementQuery {
    char unk1[16]; // 0x0
    int target_layer_id; // 0x10
    char unk2[28]; // 0x14
    int query_left_x; // 0x30
    int query_bottom_y; // 0x34
    int query_right_x; // 0x38
    int query_top_y; // 0x3c
} STexturePlacementQuery;

