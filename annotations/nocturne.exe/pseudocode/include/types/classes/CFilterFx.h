#pragma once

// Forward declarations
struct SMovieFrame;

// Dependencies
#include "system/basetypes.h"

// Structure: CFilterFx
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct CFilterFx {
    int frame_count; // 0x0
    struct SMovieFrame* movie_data; // 0x4
    float current_frame; // 0x8
} CFilterFx;
#pragma pack(pop)

