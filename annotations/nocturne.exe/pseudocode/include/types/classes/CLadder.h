#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"

// Structure: CLadder
// Ghidra size: 0x2f8 (760 bytes)
#pragma pack(push, 1)
typedef struct CLadder {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    CVector3f ladder_size; // 0x2cc
    struct CDemonActor* master_actor; // 0x2d8
    CVector3f relative_position; // 0x2dc
    CVector3f cached_euler_angles; // 0x2e8
    EGroundType ground_type; // 0x2f4
} CLadder;
#pragma pack(pop)

