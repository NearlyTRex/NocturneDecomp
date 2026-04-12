#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CHero.h"
#include "types/classes/CMorph.h"

// Structure: CMoloch
// Ghidra size: 0x22b98 (142232 bytes)
#pragma pack(push, 1)
typedef struct CMoloch {
    CHero base; // 0x0
    CDeformableModelInstance model; // 0x1fbd4
    int in_human_form; // 0x21e88
    int morphing; // 0x21e8c
    float morph_timer; // 0x21e90
    char human_to_demon_condition[100]; // 0x21e94
    char demon_to_human_condition[100]; // 0x21ef8
    CMorph morph; // 0x21f5c
    int dead1; // 0x22b88
    float aim_yaw; // 0x22b8c
    int dead2; // 0x22b90
    int dead3; // 0x22b94
} CMoloch;
#pragma pack(pop)

