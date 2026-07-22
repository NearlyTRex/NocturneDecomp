#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SLineStrip.h"

// Structure: SLineStrip2Index
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SLineStrip2Index {
    SLineStrip base; // 0x0
    int vertices[2]; // 0x8
} SLineStrip2Index;
#pragma pack(pop)

