#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SWavFmtChunk
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct SWavFmtChunk {
    ushort format_tag; // 0x0
    ushort num_channels; // 0x2
    uint sample_rate; // 0x4
    uint byte_rate; // 0x8
} SWavFmtChunk;
#pragma pack(pop)

