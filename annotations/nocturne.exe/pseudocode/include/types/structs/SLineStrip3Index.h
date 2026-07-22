#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SLineStrip.h"

// Structure: SLineStrip3Index
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SLineStrip3Index {
    SLineStrip base; // 0x0
    int vertices[3]; // 0x8
} SLineStrip3Index;
#pragma pack(pop)

