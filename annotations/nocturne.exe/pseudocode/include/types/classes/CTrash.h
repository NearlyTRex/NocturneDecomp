#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTrash
// Ghidra size: 0x328 (808 bytes)
#pragma pack(push, 1)
typedef struct CTrash {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    CVector3f home_pos; // 0x2d4
    float collision_bottom_y; // 0x2e0
    float collision_top_y; // 0x2e4
    CVector3f velocity; // 0x2e8
    CVector3f acceleration; // 0x2f4
    CVector3f drift; // 0x300
    float damping_factor; // 0x30c
    float collision_radius; // 0x310
    float animation_timer; // 0x314
    CVector3f drift_target; // 0x318
    float gravity; // 0x324
} CTrash;
#pragma pack(pop)

