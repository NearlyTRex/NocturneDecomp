#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CHostage
// Ghidra size: 0x1f958 (129368 bytes)
#pragma pack(push, 1)
typedef struct CHostage {
    CNPC base; // 0x0
    float rescue_distance; // 0x1f570
    char rescue_condition[100]; // 0x1f574
    char rescue_event[32]; // 0x1f5d8
    char hero_found_me_event[100]; // 0x1f5f8
    char hero_left_me_event[100]; // 0x1f65c
    char hero_came_back_event[100]; // 0x1f6c0
    char get_eaten_event[100]; // 0x1f724
    char going_to_sit_down_event[100]; // 0x1f788
    char sit_down_event[100]; // 0x1f7ec
    char damage_sound[100]; // 0x1f850
    char die_sound[100]; // 0x1f8b4
    uint sfx_handle; // 0x1f918
    int follow_state; // 0x1f91c
    int hostage_type; // 0x1f920
    int hostage_state; // 0x1f924
    struct CDemonActor* goal_way_point; // 0x1f928
    struct CDemonActor* sit_down_way_point; // 0x1f92c
    struct CDemonActor* next_way_point; // 0x1f930
    int bone_indices[4]; // 0x1f934
    int no_shadows_when_saved; // 0x1f944
    float gun_raise_progress; // 0x1f948
    float gun_blend_weight; // 0x1f94c
    struct CDemonActor* grabber; // 0x1f950
    float grabber_flee_timer; // 0x1f954
} CHostage;
#pragma pack(pop)

