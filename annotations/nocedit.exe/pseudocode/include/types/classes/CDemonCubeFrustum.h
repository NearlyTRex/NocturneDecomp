#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CDemonCubeFrustum
// Ghidra size: 0x20 (32 bytes)
typedef struct CDemonCubeFrustum {
    char field_0[8]; // 0x0
    CVector3f min; // 0x8
    CVector3f max; // 0x14
} CDemonCubeFrustum;

