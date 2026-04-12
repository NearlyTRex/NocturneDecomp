#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SActorVarBlock
// Ghidra size: 0x5e0 (1504 bytes)
#pragma pack(push, 1)
typedef struct SActorVarBlock {
    int count; // 0x0
    char var_names[25][30]; // 0x4
    char actor_names[25][30]; // 0x2f2
} SActorVarBlock;
#pragma pack(pop)

