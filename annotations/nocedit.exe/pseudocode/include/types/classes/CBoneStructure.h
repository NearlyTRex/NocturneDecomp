#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SBoneData.h"

// Structure: CBoneStructure
// Ghidra size: 0x3524 (13604 bytes)
#pragma pack(push, 1)
typedef struct CBoneStructure {
    int bone_count; // 0x0
    SBoneData bones[100]; // 0x4
    int shuffled_bone_indices[100]; // 0x3394
} CBoneStructure;
#pragma pack(pop)

