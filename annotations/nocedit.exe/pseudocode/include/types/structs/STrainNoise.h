#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: STrainNoise
// Ghidra size: 0x10 (16 bytes)
typedef struct STrainNoise {
    CVector3f position; // 0x0
    uint sound_handle; // 0xc
} STrainNoise;

