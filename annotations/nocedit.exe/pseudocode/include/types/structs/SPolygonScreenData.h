#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPolygonScreenData
// Ghidra size: 0x14 (20 bytes)
typedef struct SPolygonScreenData {
    int center_x; // 0x0
    int center_y; // 0x4
    int distance_squared; // 0x8
    int dead; // 0xc
    int view_mode; // 0x10
} SPolygonScreenData;

