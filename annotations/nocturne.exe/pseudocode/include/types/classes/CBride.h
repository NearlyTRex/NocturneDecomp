#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBride
// Ghidra size: 0xbd54 (48468 bytes)
#pragma pack(push, 1)
typedef struct CBride {
    CEnemy base; // 0x0
    int part_indices[9]; // 0xbd24
    float action_timer; // 0xbd48
    uint sfx_handles[2]; // 0xbd4c
} CBride;
#pragma pack(pop)

