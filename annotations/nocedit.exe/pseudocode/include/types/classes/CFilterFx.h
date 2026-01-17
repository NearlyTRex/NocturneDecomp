#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CFilterFx
// Ghidra size: 0xc (12 bytes)
typedef struct CFilterFx {
    int frame_count; // 0x0
    void* movie_data; // 0x4
    int current_frame; // 0x8
} CFilterFx;

