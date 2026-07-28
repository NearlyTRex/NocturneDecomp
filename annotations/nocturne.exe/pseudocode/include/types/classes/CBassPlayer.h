#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CBassPlayer
// Ghidra size: 0x1f578 (128376 bytes)
#pragma pack(push, 1)
typedef struct CBassPlayer {
    CNPC base; // 0x0
    int bone_indices[2]; // 0x1f570
} CBassPlayer;
#pragma pack(pop)

