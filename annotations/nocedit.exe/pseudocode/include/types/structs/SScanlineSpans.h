#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SScanlineSpans
// Ghidra size: 0x84 (132 bytes)
#pragma pack(push, 1)
typedef struct SScanlineSpans {
    int span_count; // 0x0
    int starts[16]; // 0x4
    int lengths[16]; // 0x44
} SScanlineSpans;
#pragma pack(pop)

