#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CDemonTriangle
// Ghidra size: 0x38 (56 bytes)
#pragma pack(push, 1)
typedef struct CDemonTriangle {
    CVector3f vertex1; // 0x0
    CVector3f vertex2; // 0xc
    CVector3f vertex3; // 0x18
    CVector3f normal; // 0x24
    float plane_distance; // 0x30
    float area; // 0x34
} CDemonTriangle;
#pragma pack(pop)

