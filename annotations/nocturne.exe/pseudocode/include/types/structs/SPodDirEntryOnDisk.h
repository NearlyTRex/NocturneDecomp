#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPodDirEntryOnDisk
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SPodDirEntryOnDisk {
    uint name_offset; // 0x0
    uint size; // 0x4
    uint offset; // 0x8
    uint timestamp; // 0xc
    uint checksum; // 0x10
} SPodDirEntryOnDisk;
#pragma pack(pop)

