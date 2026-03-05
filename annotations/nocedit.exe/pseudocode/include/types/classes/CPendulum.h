#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"

// Structure: CPendulum
// Ghidra size: 0x444 (1092 bytes)
typedef struct CPendulum {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char start_event[100]; // 0x2d4
    char stop_event[100]; // 0x338
    int moving; // 0x39c
    float param; // 0x3a0
    float period; // 0x3a4
    float max_angle; // 0x3a8
    char swoosh_sound[32]; // 0x3ac
    float swoosh_phase_bias; // 0x3cc
    char creak_1_sound[32]; // 0x3d0
    char creak_2_sound[32]; // 0x3f0
    CVector3f swing_tip_local; // 0x410
    CVector3f swing_tip_world; // 0x41c
    int kill_hero; // 0x428
    int kill_enemy; // 0x42c
    float decay; // 0x430
    float decay_timer; // 0x434
    EGroundType ground_type; // 0x438
    int one_shot; // 0x43c
    int is_stopped; // 0x440
} CPendulum;

