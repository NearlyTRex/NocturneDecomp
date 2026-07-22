#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"

// Structure: STriangleBoundsEntry
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct STriangleBoundsEntry {
    int triangle_index; // 0x0
    CBoundingBox3D box; // 0x4
} STriangleBoundsEntry;
#pragma pack(pop)

