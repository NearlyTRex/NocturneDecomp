#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSmiley
// Ghidra size: 0xbf00 (48896 bytes)
typedef struct CSmiley {
    CEnemy base; // 0x0
    float attack_cooldown; // 0xbebc
    float guard_distance; // 0xbec0
    int part_index_larm; // 0xbec4
    int part_index_lforearm; // 0xbec8
    int part_index_rarm; // 0xbecc
    int part_index_rforearm; // 0xbed0
    int part_index_rthigh; // 0xbed4
    int part_index_rshin; // 0xbed8
    int part_index_lthigh; // 0xbedc
    int part_index_lshin; // 0xbee0
    int part_index_ass; // 0xbee4
    int part_index_torso; // 0xbee8
    int part_index_head; // 0xbeec
    int attack_hit_count; // 0xbef0
    int dismember_hit_count; // 0xbef4
    float dismember_cooldown; // 0xbef8
    int model_variant; // 0xbefc
} CSmiley;

