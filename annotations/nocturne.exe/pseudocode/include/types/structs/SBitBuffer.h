#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SBitBuffer
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SBitBuffer {
    int bits_available; // 0x0
    uint accumulated_bits; // 0x4
} SBitBuffer;
#pragma pack(pop)

