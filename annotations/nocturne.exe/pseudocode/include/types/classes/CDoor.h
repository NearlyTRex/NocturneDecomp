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
// Ghidra size: 0x9d8 (2520 bytes)
#pragma pack(push, 1)
typedef struct CDoor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    EGroundType ground_type; // 0x2cc
    EDoorType door_type; // 0x2d0
    int door_side; // 0x2d4
    EDoorState door_state; // 0x2d8
    int door_swing; // 0x2dc
    char open_condition[100]; // 0x2e0
    char close_condition[100]; // 0x344
    char on_open_trigger_event[100]; // 0x3a8
    char on_close_trigger_event[100]; // 0x40c
    CRuleList open_rule; // 0x470
    char open_sound[100]; // 0x85c
    char close_sound[100]; // 0x8c0
    char locked_sound[100]; // 0x924
    int key_mask; // 0x988
    CVector3f orig_pos; // 0x98c
    CVector3f orig_orient; // 0x998
    float param; // 0x9a4
    float max_param; // 0x9a8
    float open_speed; // 0x9ac
    float close_speed; // 0x9b0
    CVector3f open_position; // 0x9b4
    int one_shot; // 0x9c0
    float swing_range; // 0x9c4
    int block_virtual_director_flag; // 0x9c8
    int plot_as_box_in_shadow; // 0x9cc
    int allowed_sides; // 0x9d0
    int allow_bullet_holes; // 0x9d4
} CDoor;
#pragma pack(pop)

