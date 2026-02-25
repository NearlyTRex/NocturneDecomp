#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBatCreature
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CBatCreature {
    CEnemy base; // 0x0
    int part_indices[14]; // 0xbebc
    uint sfx_handles[3]; // 0xbef4
    int alert_played; // 0xbf00
} CBatCreature;

