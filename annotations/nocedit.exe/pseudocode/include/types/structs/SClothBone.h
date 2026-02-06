#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CVector3f.h"

// Structure: SClothBone
// Ghidra size: 0xac (172 bytes)
typedef struct SClothBone {
    char name[20]; // 0x0
    float radius1; // 0x14
    float radius2; // 0x18
    CVector3f euler1; // 0x1c
    CVector3f euler2; // 0x28
    float length; // 0x34
    float inv_radius1; // 0x38
    float inv_radius2; // 0x3c
    int parent_bone_index; // 0x40
    float child_distance; // 0x44
    CMatrix3x4f world_matrix; // 0x48
    CMatrix3x3f local_matrix; // 0x78
    char unk[4]; // 0x9c
    CVector3f position_offset; // 0xa0
} SClothBone;

