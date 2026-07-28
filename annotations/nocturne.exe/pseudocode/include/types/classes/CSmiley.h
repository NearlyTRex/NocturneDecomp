#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSmiley
// Ghidra size: 0xbd68 (48488 bytes)
#pragma pack(push, 1)
typedef struct CSmiley {
    CEnemy base; // 0x0
    float attack_cooldown; // 0xbd24
    float guard_distance; // 0xbd28
    int part_indices[11]; // 0xbd2c
    int attack_hit_count; // 0xbd58
    int dismember_hit_count; // 0xbd5c
    float dismember_cooldown; // 0xbd60
    int model_variant; // 0xbd64
} CSmiley;
#pragma pack(pop)

