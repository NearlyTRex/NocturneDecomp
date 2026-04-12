#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: STriangleRef
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct STriangleRef {
    struct CVector3f* vertices[3]; // 0x0
    CVector3f normal; // 0xc
    float plane_distance; // 0x18
} STriangleRef;
#pragma pack(pop)

