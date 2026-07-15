#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/unions/UIntegerFloat.h"

// Structure: SClipPlane
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SClipPlane {
    UIntegerFloat A; // 0x0
    UIntegerFloat B; // 0x4
    UIntegerFloat C; // 0x8
    UIntegerFloat D; // 0xc
} SClipPlane;
#pragma pack(pop)

