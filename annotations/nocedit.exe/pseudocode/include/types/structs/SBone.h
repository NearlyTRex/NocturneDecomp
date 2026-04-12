#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SBone
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct SBone {
    char bone_name[32]; // 0x0
    int parent_index; // 0x20
} SBone;
#pragma pack(pop)

