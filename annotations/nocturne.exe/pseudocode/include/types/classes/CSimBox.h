#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CSimBox
// Ghidra size: 0x5c4 (1476 bytes)
#pragma pack(push, 1)
typedef struct CSimBox {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int type; // 0x2cc
    float weight; // 0x2d0
    char trigger_event[100]; // 0x2d4
    CVector3f initial_velocity; // 0x338
    CVector3f init_rot_vel; // 0x344
    CBox physics_box; // 0x350
    float ground_height; // 0x5a8
    CVector3f spawn_position; // 0x5ac
    CVector3f spawn_orientation; // 0x5b8
} CSimBox;
#pragma pack(pop)

