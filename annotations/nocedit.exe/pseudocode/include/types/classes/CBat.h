#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CBat
// Ghidra size: 0x388 (904 bytes)
typedef struct CBat {
    CDemonActor base; // 0x0
    char course_filename[48]; // 0x158
    char model_name[380]; // 0x188
    float param; // 0x304
    float course_speed; // 0x308
    float speed; // 0x30c
    char unk1[4]; // 0x310
    char unused[100]; // 0x314
    float periodic_sound_timer_min; // 0x378
    float periodic_sound_timer_max; // 0x37c
    char unk2[8]; // 0x380
} CBat;

