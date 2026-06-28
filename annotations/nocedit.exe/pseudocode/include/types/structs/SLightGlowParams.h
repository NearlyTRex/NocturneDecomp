#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SLightGlowParams
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct SLightGlowParams {
    float flare_axis_pos; // 0x0
    float size; // 0x4
    int uv[4]; // 0x8
} SLightGlowParams;
#pragma pack(pop)

