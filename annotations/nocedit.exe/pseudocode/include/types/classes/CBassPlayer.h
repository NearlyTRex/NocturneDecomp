#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CBassPlayer
// Ghidra size: 0x1f710 (128784 bytes)
typedef struct CBassPlayer {
    CNPC base; // 0x0
    int left_hand_bone_index; // 0x1f708
    int right_hand_bone_index; // 0x1f70c
} CBassPlayer;

