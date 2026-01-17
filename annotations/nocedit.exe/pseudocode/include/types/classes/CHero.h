#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CInventory.h"

// Structure: CHero
// Ghidra size: 0x1fbd4 (130004 bytes)
typedef struct CHero {
    CCharacter base_character; // 0x0
    int field_48676; // 0xbe24
    int control_type; // 0xbe28
    char field_48684[80140]; // 0xbe2c
    CInventory inventory; // 0x1f738
    int is_wearing_gas_mask; // 0x1fb98
    char field_129948[52]; // 0x1fb9c
    int ai_task; // 0x1fbd0
} CHero;

