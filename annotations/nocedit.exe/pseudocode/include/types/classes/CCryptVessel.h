#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CCryptVessel
// Ghidra size: 0x7f4 (2036 bytes)
typedef struct CCryptVessel {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[376]; // 0x15c
    int field_724; // 0x2d4
    int prey; // 0x2d8
    int neutral; // 0x2dc
    char destroyed_event[100]; // 0x2e0
    char win_event[100]; // 0x344
    char start_loc[4]; // 0x3a8
    char end_loc[4]; // 0x3ac
    float eat_distance; // 0x3b0
    int visual_type; // 0x3b4
    int state; // 0x3b8
    float timer; // 0x3bc
    char field_960[1076]; // 0x3c0
} CCryptVessel;

