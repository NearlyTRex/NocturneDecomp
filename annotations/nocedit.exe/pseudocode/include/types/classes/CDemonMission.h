#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CLocation.h"
#include "types/classes/CRect.h"

// Structure: CDemonMission
// Ghidra size: 0x27d0 (10192 bytes)
typedef struct CDemonMission {
    int current_set_index; // 0x0
    int is_in_editor; // 0x4
    int mission_version_num; // 0x8
    int has_inventory_actors; // 0xc
    int current_camera_index; // 0x10
    CRect viewport; // 0x14
    int show_3d_viewport; // 0x24
    struct CDemonActor* selected_actor; // 0x28
    struct CDemonActor* hovered_actor; // 0x2c
    int render_sky_in_editor; // 0x30
    int render_water_in_editor; // 0x34
    int full_light_in_editor; // 0x38
    int skip_gore_load_flag; // 0x3c
    int show_waypoint_coverage; // 0x40
    char mission_name[256]; // 0x44
    int num_sets; // 0x144
    char set_names[4][256]; // 0x148
    struct CDemonActor* first_actor; // 0x548
    struct CDemonActor* last_actor; // 0x54c
    CLocation pending_teleport; // 0x550
    int delete_queue_count; // 0x560
    struct CDemonActor* delete_queue_actors[100]; // 0x564
    uint delete_queue_flags[100]; // 0x6f4
    int actors_prepared; // 0x884
    struct CDemonActor* next_inventory_actor; // 0x888
    int actor_lookup_count; // 0x88c
    struct CDemonActor* actor_lookup_table[2000]; // 0x890
} CDemonMission;

