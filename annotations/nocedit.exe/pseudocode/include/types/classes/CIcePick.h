#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CIcePick
// Ghidra size: 0x1fc04 (130052 bytes)
typedef struct CIcePick {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    int attack_count; // 0x1fbd8
    uint swing_sfx_handle; // 0x1fbdc
    uint injured_sfx_handle; // 0x1fbe0
    CVector3f head_look_euler; // 0x1fbe4
    float head_look_blend_weight; // 0x1fbf0
    int is_armed; // 0x1fbf4
    struct CDemonActor* pending_pickup_target; // 0x1fbf8
    float shoot_blend_weight; // 0x1fbfc
    float aim_pitch; // 0x1fc00
} CIcePick;

