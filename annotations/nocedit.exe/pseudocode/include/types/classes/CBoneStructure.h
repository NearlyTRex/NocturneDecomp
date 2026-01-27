#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SBoneData.h"

// Structure: CBoneStructure
// Ghidra size: 0x4824 (18468 bytes)
typedef struct CBoneStructure {
    int bone_count; // 0x0
    SBoneData bones[100]; // 0x4
    char unk[4864]; // 0x3394
    int new_bone_indices[100]; // 0x4694
} CBoneStructure;

