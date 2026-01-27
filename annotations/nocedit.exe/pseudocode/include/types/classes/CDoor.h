#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CDoor
// Ghidra size: 0x9e0 (2528 bytes)
typedef struct CDoor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int ground_type; // 0x2d4
    int door_type; // 0x2d8
    int door_side; // 0x2dc
    int door_state; // 0x2e0
    int door_swing; // 0x2e4
    char unk1[400]; // 0x2e8
    int open_rules; // 0x478
    char unk2[1300]; // 0x47c
    int key_mask; // 0x990
    CVector3f orig_pos; // 0x994
    CVector3f orig_orient; // 0x9a0
    float param; // 0x9ac
    float max_param; // 0x9b0
    float open_speed; // 0x9b4
    float close_speed; // 0x9b8
    char unk3[12]; // 0x9bc
    int one_shot; // 0x9c8
    char unk4[4]; // 0x9cc
    int block_virtual_director_flag; // 0x9d0
    int plot_as_box_in_shadow; // 0x9d4
    int allowed_sides; // 0x9d8
    int allow_bullet_holes; // 0x9dc
} CDoor;

