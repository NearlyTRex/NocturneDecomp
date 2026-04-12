#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CPathMap.h"

// Structure: CNPC
// Ghidra size: 0x1f708 (128776 bytes)
#pragma pack(push, 1)
typedef struct CNPC {
    CCharacter base; // 0x0
    CPathMap path_map; // 0xbe24
    int shoot_me; // 0x1f700
    int pool_me; // 0x1f704
} CNPC;
#pragma pack(pop)

