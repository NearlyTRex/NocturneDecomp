#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SBone
// Ghidra size: 0x24 (36 bytes)
typedef struct SBone {
    char bone_name[32]; // 0x0
    int parent_index; // 0x20
} SBone;

