#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: STriangleBoundsEntry
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct STriangleBoundsEntry {
    int triangle_index; // 0x0
    CVector3f min; // 0x4
    CVector3f max; // 0x10
} STriangleBoundsEntry;
#pragma pack(pop)

