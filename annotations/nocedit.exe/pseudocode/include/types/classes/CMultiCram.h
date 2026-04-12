#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDSEModel.h"

// Structure: CMultiCram
// Ghidra size: 0xfa4 (4004 bytes)
#pragma pack(push, 1)
typedef struct CMultiCram {
    int model_count; // 0x0
    struct CDSEModel* models[1000]; // 0x4
} CMultiCram;
#pragma pack(pop)

