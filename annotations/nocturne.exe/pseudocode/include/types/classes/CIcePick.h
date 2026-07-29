#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CIcePick
// Ghidra size: 0x1fa6c (129644 bytes)
#pragma pack(push, 1)
typedef struct CIcePick {
    CHero base; // 0x0
    int guns_drawn; // 0x1fa3c
    int attack_count; // 0x1fa40
    uint sfx_handles[2]; // 0x1fa44
    CVector3f head_look_euler; // 0x1fa4c
    float head_look_blend_weight; // 0x1fa58
    int is_armed; // 0x1fa5c
    struct CDemonActor* pending_pickup_target; // 0x1fa60
    float shoot_blend_weight; // 0x1fa64
    float aim_pitch; // 0x1fa68
} CIcePick;
#pragma pack(pop)

