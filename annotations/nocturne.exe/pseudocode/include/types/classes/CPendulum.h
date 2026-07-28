#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"

// Structure: CPendulum
// Ghidra size: 0x43c (1084 bytes)
#pragma pack(push, 1)
typedef struct CPendulum {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    char start_event[100]; // 0x2cc
    char stop_event[100]; // 0x330
    int moving; // 0x394
    float param; // 0x398
    float period; // 0x39c
    float max_angle; // 0x3a0
    char swoosh_sound[32]; // 0x3a4
    float swoosh_phase_bias; // 0x3c4
    char creak_1_sound[32]; // 0x3c8
    char creak_2_sound[32]; // 0x3e8
    CVector3f swing_tip_local; // 0x408
    CVector3f swing_tip_world; // 0x414
    int kill_hero; // 0x420
    int kill_enemy; // 0x424
    float decay; // 0x428
    float decay_timer; // 0x42c
    EGroundType ground_type; // 0x430
    int one_shot; // 0x434
    int is_stopped; // 0x438
} CPendulum;
#pragma pack(pop)

