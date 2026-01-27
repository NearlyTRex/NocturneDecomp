#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CGrave
// Ghidra size: 0x3b0 (944 bytes)
typedef struct CGrave {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    float cur_frame; // 0x2d4
    float fps; // 0x2d8
    char unk1[4]; // 0x2dc
    int grave_state; // 0x2e0
    int hide_on_first_frame; // 0x2e4
    char* start_condition; // 0x2e8
    char unk2[96]; // 0x2ec
    char* start_sound; // 0x34c
    char unk3[96]; // 0x350
} CGrave;

