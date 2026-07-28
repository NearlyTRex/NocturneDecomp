#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBat
// Ghidra size: 0x380 (896 bytes)
#pragma pack(push, 1)
typedef struct CBat {
    CDemonActor base; // 0x0
    char course_filename[32]; // 0x150
    CCourse course; // 0x170
    float anim_frame; // 0x17c
    CKeyFramedModelInstance model; // 0x180
    float param; // 0x2fc
    float course_speed; // 0x300
    float speed; // 0x304
    float flap_speed; // 0x308
    char periodic_sound[100]; // 0x30c
    float periodic_sound_timer_min; // 0x370
    float periodic_sound_timer_max; // 0x374
    uint sfx_handle; // 0x378
    float sound_timer; // 0x37c
} CBat;
#pragma pack(pop)

