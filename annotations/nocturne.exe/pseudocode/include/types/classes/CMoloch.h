#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CHero.h"
#include "types/classes/CMorph.h"

// Structure: CMoloch
// Ghidra size: 0x22a00 (141824 bytes)
#pragma pack(push, 1)
typedef struct CMoloch {
    CHero base; // 0x0
    CDeformableModelInstance model; // 0x1fa3c
    int in_human_form; // 0x21cf0
    int morphing; // 0x21cf4
    float morph_timer; // 0x21cf8
    char human_to_demon_condition[100]; // 0x21cfc
    char demon_to_human_condition[100]; // 0x21d60
    CMorph morph; // 0x21dc4
    int dead1; // 0x229f0
    float aim_yaw; // 0x229f4
    int dead2; // 0x229f8
    int dead3; // 0x229fc
} CMoloch;
#pragma pack(pop)

