#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CScat
// Ghidra size: 0x1fc00 (130048 bytes)
typedef struct CScat {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    CVector3f head_euler_angles; // 0x1fbd8
    float head_blend_weight; // 0x1fbe4
    struct CDemonActor* weapon_actor; // 0x1fbe8
    float aim_pitch; // 0x1fbec
    float aim_yaw; // 0x1fbf0
    int dead; // 0x1fbf4
    struct CDemonActor* aim_target; // 0x1fbf8
    int aim_converged; // 0x1fbfc
} CScat;

