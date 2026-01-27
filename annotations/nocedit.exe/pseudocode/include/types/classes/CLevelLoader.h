#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"

// Structure: CLevelLoader
// Ghidra size: 0x130 (304 bytes)
typedef struct CLevelLoader {
    int current_frame; // 0x0
    int total_frames; // 0x4
    int version; // 0x8
    int enabled; // 0xc
    char unk[256]; // 0x10
    int use_custom_viewport; // 0x110
    int viewport_x; // 0x114
    int viewport_y; // 0x118
    int viewport_width; // 0x11c
    int viewport_height; // 0x120
    CColor3i color; // 0x124
} CLevelLoader;

