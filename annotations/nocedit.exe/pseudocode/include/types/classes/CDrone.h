#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CDrone
// Ghidra size: 0xbed4 (48852 bytes)
typedef struct CDrone {
    CEnemy base; // 0x0
    int dead; // 0xbebc
    int bone_indices[2]; // 0xbec0
    uint sfx_handles[3]; // 0xbec8
} CDrone;

