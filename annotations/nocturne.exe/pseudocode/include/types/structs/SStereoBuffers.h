#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SStereoBuffers
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SStereoBuffers {
    float* left_channel; // 0x0
    float* right_channel; // 0x4
} SStereoBuffers;
#pragma pack(pop)

