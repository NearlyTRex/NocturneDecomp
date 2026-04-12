#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPlayerActionState
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SPlayerActionState {
    int walk; // 0x0
    int backup; // 0x4
    int run; // 0x8
    int fire; // 0xc
    int use_item; // 0x10
    int light; // 0x14
    int draw; // 0x18
    int jump; // 0x1c
} SPlayerActionState;
#pragma pack(pop)

