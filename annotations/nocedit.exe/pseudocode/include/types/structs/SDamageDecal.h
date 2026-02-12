#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: SDamageDecal
// Ghidra size: 0x38 (56 bytes)
typedef struct SDamageDecal {
    int part_index; // 0x0
    int bone_index; // 0x4
    CMatrix3x4f transform; // 0x8
} SDamageDecal;

