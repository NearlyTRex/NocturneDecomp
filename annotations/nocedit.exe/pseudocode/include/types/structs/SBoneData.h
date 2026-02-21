#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: SBoneData
// Ghidra size: 0x84 (132 bytes)
typedef struct SBoneData {
    char name[30]; // 0x0
    short padding; // 0x1e
    int parent_index; // 0x20
    CMatrix3x4f local_matrix; // 0x24
    CMatrix3x4f world_matrix; // 0x54
} SBoneData;

