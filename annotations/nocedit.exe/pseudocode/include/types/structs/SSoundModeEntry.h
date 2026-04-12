#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SSoundModeEntry
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SSoundModeEntry {
    char* name; // 0x0
    CVector3f listener_orient; // 0x4
} SSoundModeEntry;
#pragma pack(pop)

