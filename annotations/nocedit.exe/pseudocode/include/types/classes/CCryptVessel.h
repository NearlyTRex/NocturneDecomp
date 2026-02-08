#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CCryptVessel
// Ghidra size: 0x7f4 (2036 bytes)
typedef struct CCryptVessel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
    struct CDemonActor* prey; // 0x2d8
    struct CDemonActor* neutral; // 0x2dc
    char destroyed_event[100]; // 0x2e0
    char win_event[100]; // 0x344
    struct CDemonActor* start_loc; // 0x3a8
    struct CDemonActor* end_loc; // 0x3ac
    float eat_distance; // 0x3b0
    int visual_type; // 0x3b4
    int state; // 0x3b8
    float timer; // 0x3bc
    char unk2[4]; // 0x3c0
    CFlame unk3; // 0x3c4
    int unk4; // 0x668
    CKeyFramedModelInstance unk5; // 0x66c
    int unk6; // 0x7e8
    float unk7; // 0x7ec
    int unk8; // 0x7f0
} CCryptVessel;

