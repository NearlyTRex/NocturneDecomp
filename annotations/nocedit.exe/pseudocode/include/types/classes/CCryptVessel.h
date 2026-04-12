#pragma once

// Forward declarations
struct CActorDestination;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CCryptVessel
// Ghidra size: 0x7f4 (2036 bytes)
#pragma pack(push, 1)
typedef struct CCryptVessel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
    struct CCryptVessel* prey; // 0x2d8
    struct CCryptVessel* neutral; // 0x2dc
    char destroyed_event[100]; // 0x2e0
    char win_event[100]; // 0x344
    struct CActorDestination* start_loc; // 0x3a8
    struct CActorDestination* end_loc; // 0x3ac
    float eat_distance; // 0x3b0
    int visual_type; // 0x3b4
    int state; // 0x3b8
    float timer; // 0x3bc
    int init_frame; // 0x3c0
    CFlame flame; // 0x3c4
    float spin_angle; // 0x668
    CKeyFramedModelInstance orb_model; // 0x66c
    int is_visible; // 0x7e8
    float water_anim_timer; // 0x7ec
    int puzzle_complete; // 0x7f0
} CCryptVessel;
#pragma pack(pop)

