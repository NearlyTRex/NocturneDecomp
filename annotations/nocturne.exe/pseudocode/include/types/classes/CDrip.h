#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EDripType.h"

// Structure: CDrip
// Ghidra size: 0x334 (820 bytes)
#pragma pack(push, 1)
typedef struct CDrip {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    EDripType type; // 0x2cc
    int auto_drop; // 0x2d0
    float drip_timer; // 0x2d4
    float min_auto_drip_time; // 0x2d8
    float max_auto_drip_time; // 0x2dc
    float drip_radius; // 0x2e0
    int is_ground_cached; // 0x2e4
    float ground_y; // 0x2e8
    int dead; // 0x2ec
    CVector3f home_pos; // 0x2f0
    CVector3f vel; // 0x2fc
    float damage; // 0x308
    char hit_sound[32]; // 0x30c
    int no_rock_flag; // 0x32c
    int is_visible; // 0x330
} CDrip;
#pragma pack(pop)

