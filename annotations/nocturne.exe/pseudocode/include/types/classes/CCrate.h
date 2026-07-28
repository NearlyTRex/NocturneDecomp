#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/unions/UOrientationVector.h"

// Structure: CCrate
// Ghidra size: 0x2f4 (756 bytes)
#pragma pack(push, 1)
typedef struct CCrate {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    struct CDemonActor* carrier; // 0x2cc
    float ground_check_radius; // 0x2d0
    struct CDemonActor* last_platform; // 0x2d4
    CVector3f cached_position; // 0x2d8
    UOrientationVector cached_orientation; // 0x2e4
    float cached_ground_height; // 0x2f0
} CCrate;
#pragma pack(pop)

