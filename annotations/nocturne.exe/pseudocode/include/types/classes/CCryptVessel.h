#pragma once

// Forward declarations
struct CActorDestination;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CCryptVessel
// Ghidra size: 0x7e4 (2020 bytes)
#pragma pack(push, 1)
typedef struct CCryptVessel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    struct CDemonActor* carrier; // 0x2cc
    struct CCryptVessel* prey; // 0x2d0
    struct CCryptVessel* neutral; // 0x2d4
    char destroyed_event[100]; // 0x2d8
    char win_event[100]; // 0x33c
    struct CActorDestination* start_loc; // 0x3a0
    struct CActorDestination* end_loc; // 0x3a4
    float eat_distance; // 0x3a8
    int visual_type; // 0x3ac
    int state; // 0x3b0
    float timer; // 0x3b4
    int init_frame; // 0x3b8
    CFlame flame; // 0x3bc
    float spin_angle; // 0x658
    CKeyFramedModelInstance orb_model; // 0x65c
    int is_visible; // 0x7d8
    float water_anim_timer; // 0x7dc
    int puzzle_complete; // 0x7e0
} CCryptVessel;
#pragma pack(pop)

