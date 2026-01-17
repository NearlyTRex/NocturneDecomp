#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CGrave
// Ghidra size: 0x3b0 (944 bytes)
typedef struct CGrave {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[376]; // 0x15c
    float cur_frame; // 0x2d4
    float fps; // 0x2d8
    char field_732[4]; // 0x2dc
    int grave_state; // 0x2e0
    int hide_on_first_frame; // 0x2e4
    char* start_condition; // 0x2e8
    char field_748[96]; // 0x2ec
    char* start_sound; // 0x34c
    char field_848[96]; // 0x350
} CGrave;

