#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSkeleditBiasEntry
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SSkeleditBiasEntry {
    int motion_index; // 0x0
    int source_frame; // 0x4
    int ref_motion_index; // 0x8
    int ref_frame; // 0xc
} SSkeleditBiasEntry;
#pragma pack(pop)

