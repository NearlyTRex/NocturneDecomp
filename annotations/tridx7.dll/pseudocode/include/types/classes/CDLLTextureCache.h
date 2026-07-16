#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/STextureCacheEntry.h"

// Structure: CDLLTextureCache
// Ghidra size: 0x48010 (294928 bytes)
#pragma pack(push, 1)
typedef struct CDLLTextureCache {
    int max_count; // 0x0
    int texture_size; // 0x4
    int entry_count; // 0x8
    int usage_counter; // 0xc
    STextureCacheEntry entries[4096]; // 0x10
} CDLLTextureCache;
#pragma pack(pop)

