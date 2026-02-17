#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// Structure: CBloodSplat
// Ghidra size: 0x44 (68 bytes)
typedef struct CBloodSplat {
    int expired; // 0x0
    CVector3f position; // 0x4
    int is_wall_splat; // 0x10
    int blood_type; // 0x14
    CVector3f rotation; // 0x18
    float age; // 0x24
    int texture_variant; // 0x28
    CVector3i position_fixed; // 0x2c
    CVector3i normal_fixed; // 0x38
} CBloodSplat;

