#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CHostage
// Ghidra size: 0x1faf0 (129776 bytes)
#pragma pack(push, 1)
typedef struct CHostage {
    CNPC base; // 0x0
    float rescue_distance; // 0x1f708
    char rescue_condition[100]; // 0x1f70c
    char rescue_event[32]; // 0x1f770
    char hero_found_me_event[100]; // 0x1f790
    char hero_left_me_event[100]; // 0x1f7f4
    char hero_came_back_event[100]; // 0x1f858
    char get_eaten_event[100]; // 0x1f8bc
    char going_to_sit_down_event[100]; // 0x1f920
    char sit_down_event[100]; // 0x1f984
    char damage_sound[100]; // 0x1f9e8
    char die_sound[100]; // 0x1fa4c
    uint sfx_handle; // 0x1fab0
    int follow_state; // 0x1fab4
    int hostage_type; // 0x1fab8
    int hostage_state; // 0x1fabc
    struct CDemonActor* goal_way_point; // 0x1fac0
    struct CDemonActor* sit_down_way_point; // 0x1fac4
    struct CDemonActor* next_way_point; // 0x1fac8
    int bone_indices[4]; // 0x1facc
    int no_shadows_when_saved; // 0x1fadc
    float gun_raise_progress; // 0x1fae0
    float gun_blend_weight; // 0x1fae4
    struct CDemonActor* grabber; // 0x1fae8
    float grabber_flee_timer; // 0x1faec
} CHostage;
#pragma pack(pop)

