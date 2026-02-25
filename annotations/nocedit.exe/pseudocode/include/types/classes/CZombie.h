#pragma once

// Forward declarations
struct CDemonActor;
struct CDoor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombie
// Ghidra size: 0xbfac (49068 bytes)
typedef struct CZombie {
    CEnemy base; // 0x0
    float pickup_range_factor; // 0xbebc
    int pickup_seed; // 0xbec0
    float pickup_scan_timer; // 0xbec4
    float pickup_approach_progress; // 0xbec8
    struct CDemonActor* pickup_target; // 0xbecc
    int object_shape_class; // 0xbed0
    struct CDemonActor* grave_actor; // 0xbed4
    struct CDoor* target_door; // 0xbed8
    char rise_from_grave_condition[100]; // 0xbedc
    int is_miner_zombie; // 0xbf40
    int always_chase_fast; // 0xbf44
    int is_female; // 0xbf48
    int bone_indices[11]; // 0xbf4c
    int part_indices[7]; // 0xbf78
    float pain_cooldown; // 0xbf94
    float bleedout_timer; // 0xbf98
    uint sfx_handles[2]; // 0xbf9c
    float rise_delay; // 0xbfa4
    float buried_timer; // 0xbfa8
} CZombie;

