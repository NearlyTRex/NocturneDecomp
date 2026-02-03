#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CSpike
// Ghidra size: 0x560 (1376 bytes)
typedef struct CSpike {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int spike_type; // 0x2d4
    int spike_state; // 0x2d8
    int are_we_active; // 0x2dc
    char unk1[12]; // 0x2e0
    float extend_distance; // 0x2ec
    char start_event[100]; // 0x2f0
    char stop_event[100]; // 0x354
    char extend_event[100]; // 0x3b8
    char retract_event[100]; // 0x41c
    float extend_time; // 0x480
    float retract_time; // 0x484
    char unk6[4]; // 0x488
    char extend_sound[100]; // 0x48c
    char retract_sound[100]; // 0x4f0
    float period; // 0x554
    float damage_strength; // 0x558
    float param; // 0x55c
} CSpike;

