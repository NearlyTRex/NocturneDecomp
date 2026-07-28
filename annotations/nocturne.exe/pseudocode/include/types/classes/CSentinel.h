#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSentinel
// Ghidra size: 0xbd2c (48428 bytes)
#pragma pack(push, 1)
typedef struct CSentinel {
    CEnemy base; // 0x0
    uint sfx_handle; // 0xbd24
    float hover_timer; // 0xbd28
} CSentinel;
#pragma pack(pop)

