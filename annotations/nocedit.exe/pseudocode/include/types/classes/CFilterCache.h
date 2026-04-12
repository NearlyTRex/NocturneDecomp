#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonFilter.h"

// Structure: CFilterCache
// Ghidra size: 0xb04 (2820 bytes)
#pragma pack(push, 1)
typedef struct CFilterCache {
    int filter_count; // 0x0
    char filter_names[64][40]; // 0x4
    struct CDemonFilter* filters[64]; // 0xa04
} CFilterCache;
#pragma pack(pop)

