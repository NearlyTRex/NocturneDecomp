#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CPassenger
// Ghidra size: 0x20448 (132168 bytes)
typedef struct CPassenger {
    CNPC base; // 0x0
    char transform_event[100]; // 0x1f708
    char wolf_model_name[32]; // 0x1f76c
    char name_of_wolf[32]; // 0x1f78c
    char* transform_wav; // 0x1f7ac
    char unk[3216]; // 0x1f7b0
    float morph_time; // 0x20440
    float wolf_size; // 0x20444
} CPassenger;

