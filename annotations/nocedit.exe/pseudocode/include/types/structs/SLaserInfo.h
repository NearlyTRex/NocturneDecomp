#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CVector3f.h"

// Structure: SLaserInfo
// Ghidra size: 0x54 (84 bytes)
typedef struct SLaserInfo {
    float intensity; // 0x0
    float beam_width; // 0x4
    int laser_type; // 0x8
    CColor3i color; // 0xc
    int is_hero_weapon; // 0x18
    int is_damaging; // 0x1c
    CVector3f local_origin; // 0x20
    CVector3f local_hit_position; // 0x2c
    CVector3f local_normal; // 0x38
    float incidence_angle; // 0x44
    float reflectivity; // 0x48
    float stored_angle; // 0x4c
    float transparency; // 0x50
} SLaserInfo;

