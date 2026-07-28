#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBatCreature
// Ghidra size: 0xbd6c (48492 bytes)
#pragma pack(push, 1)
typedef struct CBatCreature {
    CEnemy base; // 0x0
    int part_indices[14]; // 0xbd24
    uint sfx_handles[3]; // 0xbd5c
    int alert_played; // 0xbd68
} CBatCreature;
#pragma pack(pop)

