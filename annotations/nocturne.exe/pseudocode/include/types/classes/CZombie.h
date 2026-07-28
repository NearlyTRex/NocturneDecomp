#pragma once

// Forward declarations
struct CDemonActor;
struct CDoor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombie
// Ghidra size: 0xbe14 (48660 bytes)
#pragma pack(push, 1)
typedef struct CZombie {
    CEnemy base; // 0x0
    float pickup_range_factor; // 0xbd24
    int pickup_seed; // 0xbd28
    float pickup_scan_timer; // 0xbd2c
    float pickup_approach_progress; // 0xbd30
    struct CDemonActor* pickup_target; // 0xbd34
    int object_shape_class; // 0xbd38
    struct CDemonActor* grave_actor; // 0xbd3c
    struct CDoor* target_door; // 0xbd40
    char rise_from_grave_condition[100]; // 0xbd44
    int is_miner_zombie; // 0xbda8
    int always_chase_fast; // 0xbdac
    int is_female; // 0xbdb0
    int bone_indices[11]; // 0xbdb4
    int part_indices[7]; // 0xbde0
    float pain_cooldown; // 0xbdfc
    float bleedout_timer; // 0xbe00
    uint sfx_handles[2]; // 0xbe04
    float rise_delay; // 0xbe0c
    float buried_timer; // 0xbe10
} CZombie;
#pragma pack(pop)

