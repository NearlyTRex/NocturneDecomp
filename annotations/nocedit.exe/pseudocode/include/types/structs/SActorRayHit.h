#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SActorRayHit
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct SActorRayHit {
    CVector3f normal; // 0x0
    int part_index; // 0xc
    int lod_index; // 0x10
    int triangle_index; // 0x14
    int bone_index; // 0x18
} SActorRayHit;
#pragma pack(pop)

