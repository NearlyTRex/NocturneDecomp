#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SLodSamplePoint
// Ghidra size: 0x1c (28 bytes)
typedef struct SLodSamplePoint {
    CVector3f position; // 0x0
    int closest_triangle_idx; // 0xc
    double distance_to_triangle; // 0x10
    float weight; // 0x18
} SLodSamplePoint;

