#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/unions/UOrientationVector.h"

// Structure: CCrate
// Ghidra size: 0x2fc (764 bytes)
typedef struct CCrate {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
    float ground_check_radius; // 0x2d8
    struct CDemonActor* last_platform; // 0x2dc
    CVector3f cached_position; // 0x2e0
    UOrientationVector cached_orientation; // 0x2ec
    float cached_ground_height; // 0x2f8
} CCrate;

