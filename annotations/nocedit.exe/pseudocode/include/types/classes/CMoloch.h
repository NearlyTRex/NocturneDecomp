#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CMoloch
// Ghidra size: 0x22b98 (142232 bytes)
typedef struct CMoloch {
    CHero base_hero; // 0x0
    char field_130004[8884]; // 0x1fbd4
    int in_human_form; // 0x21e88
    int morphing; // 0x21e8c
    float morph_timer; // 0x21e90
    char field_138900[3332]; // 0x21e94
} CMoloch;

