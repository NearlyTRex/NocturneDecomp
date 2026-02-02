#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CInventory.h"
#include "types/classes/CPathMap.h"
#include "types/structs/SActionKeyBindings.h"

// Structure: CHero
// Ghidra size: 0x1fbd4 (130004 bytes)
typedef struct CHero {
    CCharacter base; // 0x0
    uint unk1; // 0xbe24
    int control_type; // 0xbe28
    SActionKeyBindings action_bindings; // 0xbe2c
    char unk2[12]; // 0xbe4c
    CPathMap path_map; // 0xbe58
    int unk3; // 0x1f734
    CInventory inventory; // 0x1f738
    int is_wearing_gas_mask; // 0x1fb98
    char unk4[52]; // 0x1fb9c
    int ai_task; // 0x1fbd0
} CHero;

