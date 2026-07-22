#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SWavChunkHeader
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SWavChunkHeader {
    char id[4]; // 0x0
    uint size; // 0x4
} SWavChunkHeader;
#pragma pack(pop)

