#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SDX7TextureCacheEntry.h"

// Structure: CDX7TextureCache
// Ghidra size: 0x48010 (294928 bytes)
#pragma pack(push, 1)
typedef struct CDX7TextureCache {
    int max_count; // 0x0
    int texture_size; // 0x4
    int entry_count; // 0x8
    int usage_counter; // 0xc
    SDX7TextureCacheEntry entries[4096]; // 0x10
} CDX7TextureCache;
#pragma pack(pop)

