#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTrash
// Ghidra size: 0x320 (800 bytes)
#pragma pack(push, 1)
typedef struct CTrash {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    CVector3f home_pos; // 0x2cc
    float collision_bottom_y; // 0x2d8
    float collision_top_y; // 0x2dc
    CVector3f velocity; // 0x2e0
    CVector3f acceleration; // 0x2ec
    CVector3f drift; // 0x2f8
    float damping_factor; // 0x304
    float collision_radius; // 0x308
    float animation_timer; // 0x30c
    CVector3f drift_target; // 0x310
    float gravity; // 0x31c
} CTrash;
#pragma pack(pop)

