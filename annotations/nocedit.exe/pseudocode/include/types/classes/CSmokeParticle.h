#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CSmokeParticle
// Ghidra size: 0x2c (44 bytes)
#pragma pack(push, 1)
typedef struct CSmokeParticle {
    int active; // 0x0
    CVector3f position; // 0x4
    float vertical_accel; // 0x10
    float drag_factor; // 0x14
    float age; // 0x18
    CVector3f wind_influence; // 0x1c
    int alpha_value; // 0x28
} CSmokeParticle;
#pragma pack(pop)

