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
    char rise_from_grave_condition[32]; // 0xbedc
    char unk3[68]; // 0xbefc
    int is_miner_zombie; // 0xbf40
    int always_chase_fast; // 0xbf44
    int is_female; // 0xbf48
    int bone_head; // 0xbf4c
    int bone_l_hand; // 0xbf50
    int bone_r_hand; // 0xbf54
    int bone_l_forearm; // 0xbf58
    int bone_r_forearm; // 0xbf5c
    int bone_l_upperarm; // 0xbf60
    int bone_r_upperarm; // 0xbf64
    int bone_l_foot; // 0xbf68
    int bone_r_foot; // 0xbf6c
    int bone_spine; // 0xbf70
    int bone_spine2; // 0xbf74
    int part_l_arm; // 0xbf78
    int part_l_forearm; // 0xbf7c
    int part_r_arm; // 0xbf80
    int part_r_forearm; // 0xbf84
    int part_waist; // 0xbf88
    int part_torso; // 0xbf8c
    int part_head; // 0xbf90
    float pain_sfx_cooldown; // 0xbf94
    float bleedout_timer; // 0xbf98
    uint pain_sfx_handle; // 0xbf9c
    uint alert_sfx_handle; // 0xbfa0
    float rise_delay; // 0xbfa4
    float buried_timer; // 0xbfa8
} CZombie;

