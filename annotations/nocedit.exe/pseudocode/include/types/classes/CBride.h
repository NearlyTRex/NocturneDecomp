#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBride
// Ghidra size: 0xbeec (48876 bytes)
typedef struct CBride {
    CEnemy base; // 0x0
    int part_indices[9]; // 0xbebc
    float action_timer; // 0xbee0
    uint sfx_handles[2]; // 0xbee4
} CBride;

