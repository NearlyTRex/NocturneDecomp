#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SFire
// Ghidra size: 0x18 (24 bytes)
typedef struct SFire {
    int bone_part; // 0x0
    int bone_index; // 0x4
    CVector3f offset; // 0x8
    float size; // 0x14
} SFire;

