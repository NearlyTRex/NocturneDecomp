#pragma once

// Structure: CFilterCache
// Ghidra size: 0xb04 (2820 bytes)
typedef struct CFilterCache {
    int filter_count; // 0x0
    char filter_names[64][40]; // 0x4
    CDemonFilter* filters[64]; // 0xa04
} CFilterCache;

