#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CSimBox
// Ghidra size: 0x5cc (1484 bytes)
typedef struct CSimBox {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int type; // 0x2d4
    float weight; // 0x2d8
    char trigger_event[100]; // 0x2dc
    CVector3f initial_velocity; // 0x340
    CVector3f init_rot_vel; // 0x34c
    CBox physics_box; // 0x358
    float ground_height; // 0x5b0
    CVector3f spawn_position; // 0x5b4
    CVector3f spawn_orientation; // 0x5c0
} CSimBox;

