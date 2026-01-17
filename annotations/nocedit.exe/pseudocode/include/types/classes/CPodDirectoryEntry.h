#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CPodDirectoryEntry
// Ghidra size: 0x14 (20 bytes)
typedef struct CPodDirectoryEntry {
    uint name_or_offset; // 0x0
    uint size; // 0x4
    uint offset; // 0x8
    uint timestamp; // 0xc
    uint checksum; // 0x10
} CPodDirectoryEntry;

