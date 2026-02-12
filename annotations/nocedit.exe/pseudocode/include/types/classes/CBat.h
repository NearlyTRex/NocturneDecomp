#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBat
// Ghidra size: 0x388 (904 bytes)
typedef struct CBat {
    CDemonActor base; // 0x0
    char course_filename[32]; // 0x158
    CCourse course; // 0x178
    int unk1; // 0x184
    CKeyFramedModelInstance model; // 0x188
    float param; // 0x304
    float course_speed; // 0x308
    float speed; // 0x30c
    float unk2; // 0x310
    char unused[100]; // 0x314
    float periodic_sound_timer_min; // 0x378
    float periodic_sound_timer_max; // 0x37c
    int unk3; // 0x380
    int unk4; // 0x384
} CBat;

