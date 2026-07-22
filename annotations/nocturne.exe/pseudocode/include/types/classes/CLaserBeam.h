#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CVector3f.h"

// Structure: CLaserBeam
// Ghidra size: 0x40 (64 bytes)
#pragma pack(push, 1)
typedef struct CLaserBeam {
    CVector3f origin; // 0x0
    CVector3f hit_position; // 0xc
    float beam_width; // 0x18
    float reticle_intensity; // 0x1c
    CVector3f reflection_normal; // 0x20
    CColor3i color; // 0x2c
    float halo_spread; // 0x38
    float cone_angle; // 0x3c
} CLaserBeam;
#pragma pack(pop)

