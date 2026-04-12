#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector2d.h"
#include "types/classes/CVector3d.h"

// Structure: CClippedPoly
// Ghidra size: 0xa4 (164 bytes)
#pragma pack(push, 1)
typedef struct CClippedPoly {
    int vertex_count; // 0x0
    CVector3d vertices[4]; // 0x4
    CVector2d uvs[4]; // 0x64
} CClippedPoly;
#pragma pack(pop)

