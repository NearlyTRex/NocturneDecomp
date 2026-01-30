#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CDrip
// Ghidra size: 0x33c (828 bytes)
typedef struct CDrip {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int type; // 0x2d4
    int auto_drop; // 0x2d8
    char unk1[4]; // 0x2dc
    float min_auto_drip_time; // 0x2e0
    float max_auto_drip_time; // 0x2e4
    float drip_radius; // 0x2e8
    char unk2[12]; // 0x2ec
    CVector3f home_pos; // 0x2f8
    CVector3f vel; // 0x304
    float damage; // 0x310
    char hit_sound[32]; // 0x314
    int no_rock_flag; // 0x334
    int unk3; // 0x338
} CDrip;

