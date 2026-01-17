#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CFrankenstienMachine
// Ghidra size: 0x49c (1180 bytes)
typedef struct CFrankenstienMachine {
    CDemonActor base_actor; // 0x0
    char* which_part; // 0x158
    float master_frame; // 0x15c
    char field_352[828]; // 0x160
} CFrankenstienMachine;

