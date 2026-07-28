#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CGrave
// Ghidra size: 0x3a8 (936 bytes)
#pragma pack(push, 1)
typedef struct CGrave {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    float cur_frame; // 0x2cc
    float fps; // 0x2d0
    int animation_started; // 0x2d4
    int grave_state; // 0x2d8
    int hide_on_first_frame; // 0x2dc
    char start_condition[100]; // 0x2e0
    char start_sound[100]; // 0x344
} CGrave;
#pragma pack(pop)

