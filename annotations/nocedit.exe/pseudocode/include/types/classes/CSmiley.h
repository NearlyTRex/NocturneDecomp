#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSmiley
// Ghidra size: 0xbf00 (48896 bytes)
#pragma pack(push, 1)
typedef struct CSmiley {
    CEnemy base; // 0x0
    float attack_cooldown; // 0xbebc
    float guard_distance; // 0xbec0
    int part_indices[11]; // 0xbec4
    int attack_hit_count; // 0xbef0
    int dismember_hit_count; // 0xbef4
    float dismember_cooldown; // 0xbef8
    int model_variant; // 0xbefc
} CSmiley;
#pragma pack(pop)

