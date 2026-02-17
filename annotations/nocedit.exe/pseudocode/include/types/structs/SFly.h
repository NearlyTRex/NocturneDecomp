#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SFly
// Ghidra size: 0x34 (52 bytes)
typedef struct SFly {
    float t; // 0x0
    CVector3f control_points[4]; // 0x4
} SFly;

