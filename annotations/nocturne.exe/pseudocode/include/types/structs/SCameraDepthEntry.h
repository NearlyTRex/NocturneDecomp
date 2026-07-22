#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CVector3i.h"

// Structure: SCameraDepthEntry
// Ghidra size: 0x4b030 (307248 bytes)
#pragma pack(push, 1)
typedef struct SCameraDepthEntry {
    CVector3i origin; // 0x0
    CMatrix3x3i transform; // 0xc
    int depth_lookup[320][240]; // 0x30
} SCameraDepthEntry;
#pragma pack(pop)

