#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CLodMeshPrecomputeEntry
// Ghidra size: 0x310 (784 bytes)
#pragma pack(push, 1)
typedef struct CLodMeshPrecomputeEntry {
    char pos_filename[256]; // 0x0
    char skl_filename[256]; // 0x100
    char s3d_filename[256]; // 0x200
    int dead1; // 0x300
    int dead2; // 0x304
    int skip_generation; // 0x308
    int for_shadows; // 0x30c
} CLodMeshPrecomputeEntry;
#pragma pack(pop)

