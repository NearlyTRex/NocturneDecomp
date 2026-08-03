#pragma once

// Forward declarations
struct SMovieFrame;

// Dependencies
#include "system/basetypes.h"

// Structure: CFilterFX
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct CFilterFX {
    int frame_count; // 0x0
    struct SMovieFrame* movie_data; // 0x4
    float current_frame; // 0x8
} CFilterFX;
#pragma pack(pop)

