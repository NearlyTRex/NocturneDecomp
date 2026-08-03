#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CLocation.h"

// Structure: CDemonMission
// Ghidra size: 0x279c (10140 bytes)
#pragma pack(push, 1)
typedef struct CDemonMission {
    int current_set_index; // 0x0
    int is_in_editor; // 0x4
    int mission_version_num; // 0x8
    int has_inventory_actors; // 0xc
    char mission_name[256]; // 0x10
    int num_sets; // 0x110
    char set_names[4][256]; // 0x114
    struct CDemonActor* first_actor; // 0x514
    struct CDemonActor* last_actor; // 0x518
    CLocation pending_teleport; // 0x51c
    int delete_queue_count; // 0x52c
    struct CDemonActor* delete_queue_actors[100]; // 0x530
    uint delete_queue_flags[100]; // 0x6c0
    int actors_prepared; // 0x850
    struct CDemonActor* next_inventory_actor; // 0x854
    int actor_lookup_count; // 0x858
    struct CDemonActor* actor_lookup_table[2000]; // 0x85c
} CDemonMission;
#pragma pack(pop)

