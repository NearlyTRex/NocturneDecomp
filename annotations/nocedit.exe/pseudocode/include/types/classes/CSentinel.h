#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSentinel
// Ghidra size: 0xbec4 (48836 bytes)
#pragma pack(push, 1)
typedef struct CSentinel {
    CEnemy base; // 0x0
    uint sfx_handle; // 0xbebc
    float hover_timer; // 0xbec0
} CSentinel;
#pragma pack(pop)

