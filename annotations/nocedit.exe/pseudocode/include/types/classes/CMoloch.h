#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CMoloch
// Ghidra size: 0x22b98 (142232 bytes)
typedef struct CMoloch {
    CHero base; // 0x0
    char unk1[8884]; // 0x1fbd4
    int in_human_form; // 0x21e88
    int morphing; // 0x21e8c
    float morph_timer; // 0x21e90
    char human_to_demon_condition[100]; // 0x21e94
    char demon_to_human_condition[100]; // 0x21ef8
    char unk2[3132]; // 0x21f5c
} CMoloch;

