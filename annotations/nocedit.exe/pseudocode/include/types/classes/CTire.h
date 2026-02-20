#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTire
// Ghidra size: 0x1b4 (436 bytes)
typedef struct CTire {
    CVector3f static_bpos; // 0x0
    float radius; // 0xc
    float width; // 0x10
    CKeyFramedModelInstance model; // 0x14
    CVector3f spin_angle; // 0x190
    CVector3f runtime_position; // 0x19c
    CVector3f runtime_rotation; // 0x1a8
} CTire;

