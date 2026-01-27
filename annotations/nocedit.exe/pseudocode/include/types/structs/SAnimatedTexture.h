#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SAnimatedTexture
// Ghidra size: 0x1c (28 bytes)
typedef struct SAnimatedTexture {
    char unk[8]; // 0x0
    int frame_count; // 0x8
    int current_frame; // 0xc
    int frame_duration; // 0x10
    int accumulated_time; // 0x14
    int dirty_flag; // 0x18
} SAnimatedTexture;

