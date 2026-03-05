#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EDoorState.h"
#include "types/enums/EDoorType.h"
#include "types/enums/EGroundType.h"

// Structure: CDoor
// Ghidra size: 0x9e0 (2528 bytes)
typedef struct CDoor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    EGroundType ground_type; // 0x2d4
    EDoorType door_type; // 0x2d8
    int door_side; // 0x2dc
    EDoorState door_state; // 0x2e0
    int door_swing; // 0x2e4
    char open_condition[100]; // 0x2e8
    char close_condition[100]; // 0x34c
    char on_open_trigger_event[100]; // 0x3b0
    char on_close_trigger_event[100]; // 0x414
    CRuleList open_rule; // 0x478
    char open_sound[100]; // 0x864
    char close_sound[100]; // 0x8c8
    char locked_sound[100]; // 0x92c
    int key_mask; // 0x990
    CVector3f orig_pos; // 0x994
    CVector3f orig_orient; // 0x9a0
    float param; // 0x9ac
    float max_param; // 0x9b0
    float open_speed; // 0x9b4
    float close_speed; // 0x9b8
    CVector3f open_position; // 0x9bc
    int one_shot; // 0x9c8
    float swing_range; // 0x9cc
    int block_virtual_director_flag; // 0x9d0
    int plot_as_box_in_shadow; // 0x9d4
    int allowed_sides; // 0x9d8
    int allow_bullet_holes; // 0x9dc
} CDoor;

