#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CBoundingBox3D
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct CBoundingBox3D {
    CVector3f min; // 0x0
    CVector3f max; // 0xc
} CBoundingBox3D;
#pragma pack(pop)

