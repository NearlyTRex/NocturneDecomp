#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CProceduralTexture
// Ghidra size: 0x10608 (67080 bytes)
#pragma pack(push, 1)
typedef struct CProceduralTexture {
    int width; // 0x0
    int height; // 0x4
    uchar texture[65536]; // 0x8
    float wave_x[128]; // 0x10008
    float wave_y[128]; // 0x10208
    float wave_radius[128]; // 0x10408
} CProceduralTexture;
#pragma pack(pop)

