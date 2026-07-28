#pragma once

// Forward declarations
struct CDemonActor;
struct CWeapon;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CScat
// Ghidra size: 0x1fa68 (129640 bytes)
#pragma pack(push, 1)
typedef struct CScat {
    CHero base; // 0x0
    int guns_drawn; // 0x1fa3c
    CVector3f head_euler_angles; // 0x1fa40
    float head_blend_weight; // 0x1fa4c
    struct CWeapon* weapon_actor; // 0x1fa50
    float aim_pitch; // 0x1fa54
    float aim_yaw; // 0x1fa58
    int dead; // 0x1fa5c
    struct CDemonActor* aim_target; // 0x1fa60
    int aim_converged; // 0x1fa64
} CScat;
#pragma pack(pop)

