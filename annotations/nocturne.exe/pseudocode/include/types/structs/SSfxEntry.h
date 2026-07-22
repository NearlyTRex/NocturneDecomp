#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSfxEntry
// Ghidra size: 0x120 (288 bytes)
#pragma pack(push, 1)
typedef struct SSfxEntry {
    uint sfx_handle; // 0x0
    char handle_name[20]; // 0x4
    char sound_filename[256]; // 0x18
    double playback_position; // 0x118
} SSfxEntry;
#pragma pack(pop)

