#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SInputFace.h"

// Structure: SFace
// Ghidra size: 0x20 (32 bytes)
typedef struct SFace {
    int texture_index; // 0x0
    int render_flags; // 0x4
    int depth; // 0x8
    SInputFace face_data; // 0xc
    short dead; // 0x1e
} SFace;

