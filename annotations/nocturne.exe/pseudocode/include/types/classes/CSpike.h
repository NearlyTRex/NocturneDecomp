#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CSpike
// Ghidra size: 0x558 (1368 bytes)
#pragma pack(push, 1)
typedef struct CSpike {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int spike_type; // 0x2cc
    int spike_state; // 0x2d0
    int are_we_active; // 0x2d4
    CVector3f base_position; // 0x2d8
    float extend_distance; // 0x2e4
    char start_event[100]; // 0x2e8
    char stop_event[100]; // 0x34c
    char extend_event[100]; // 0x3b0
    char retract_event[100]; // 0x414
    float extend_time; // 0x478
    float retract_time; // 0x47c
    float wait_timer; // 0x480
    char extend_sound[100]; // 0x484
    char retract_sound[100]; // 0x4e8
    float period; // 0x54c
    float damage_strength; // 0x550
    float param; // 0x554
} CSpike;
#pragma pack(pop)

