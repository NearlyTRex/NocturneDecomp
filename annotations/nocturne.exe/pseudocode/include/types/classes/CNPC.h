#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CPathMap.h"

// Structure: CNPC
// Ghidra size: 0x1f570 (128368 bytes)
#pragma pack(push, 1)
typedef struct CNPC {
    CCharacter base; // 0x0
    CPathMap path_map; // 0xbc8c
    int shoot_me; // 0x1f568
    int pool_me; // 0x1f56c
} CNPC;
#pragma pack(pop)

