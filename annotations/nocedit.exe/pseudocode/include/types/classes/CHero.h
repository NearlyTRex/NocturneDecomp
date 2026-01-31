#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CInventory.h"
#include "types/classes/CPathMap.h"

// Structure: CHero
// Ghidra size: 0x1fbd4 (130004 bytes)
typedef struct CHero {
    CCharacter base; // 0x0
    int unk1; // 0xbe24
    int control_type; // 0xbe28
    char unk2[44]; // 0xbe2c
    CPathMap path_map; // 0xbe58
    int unk3; // 0x1f734
    CInventory inventory; // 0x1f738
    int is_wearing_gas_mask; // 0x1fb98
    char unk4[52]; // 0x1fb9c
    int ai_task; // 0x1fbd0
} CHero;

