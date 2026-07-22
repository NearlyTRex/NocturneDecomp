#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SSfxEntry.h"

// Structure: SSfxBlock
// Ghidra size: 0x1684 (5764 bytes)
#pragma pack(push, 1)
typedef struct SSfxBlock {
    int count; // 0x0
    SSfxEntry entries[20]; // 0x4
} SSfxBlock;
#pragma pack(pop)

