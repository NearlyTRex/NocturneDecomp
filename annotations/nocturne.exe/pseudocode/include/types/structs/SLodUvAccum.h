#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SLodUvAccum
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SLodUvAccum {
    int attr_id; // 0x0
    int count; // 0x4
    float u; // 0x8
    float v; // 0xc
} SLodUvAccum;
#pragma pack(pop)

