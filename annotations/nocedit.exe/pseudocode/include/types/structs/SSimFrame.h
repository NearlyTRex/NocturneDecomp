#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SPlayerControl.h"

// Structure: SSimFrame
// Ghidra size: 0x64 (100 bytes)
typedef struct SSimFrame {
    int sequence_number; // 0x0
    uint timestamp; // 0x4
    uint frame_flags; // 0x8
    SPlayerControl player_controls[2]; // 0xc
} SSimFrame;

