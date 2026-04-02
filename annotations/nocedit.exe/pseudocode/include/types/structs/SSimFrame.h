#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SPlayerInput.h"

// Structure: SSimFrame
// Ghidra size: 0x64 (100 bytes)
typedef struct SSimFrame {
    int sequence_number; // 0x0
    int random_seed; // 0x4
    float delta_time; // 0x8
    SPlayerInput player_input[2]; // 0xc
} SSimFrame;

