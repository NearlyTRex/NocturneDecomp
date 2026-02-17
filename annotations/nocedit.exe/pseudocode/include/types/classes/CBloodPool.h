#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// Structure: CBloodPool
// Ghidra size: 0x28 (40 bytes)
typedef struct CBloodPool {
    int expired; // 0x0
    CVector3f position; // 0x4
    int blood_type; // 0x10
    int texture_variant; // 0x14
    float age; // 0x18
    CVector3i position_fixed; // 0x1c
} CBloodPool;

