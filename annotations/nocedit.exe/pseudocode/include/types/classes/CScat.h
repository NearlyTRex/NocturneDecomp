#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CScat
// Ghidra size: 0x1fc00 (130048 bytes)
typedef struct CScat {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    char unk1[8]; // 0x1fbd8
    int unk2; // 0x1fbe0
    float unk3; // 0x1fbe4
    int unk4; // 0x1fbe8
    int unk5; // 0x1fbec
    int unk6; // 0x1fbf0
    int unk7; // 0x1fbf4
    int unk8; // 0x1fbf8
    int unk9; // 0x1fbfc
} CScat;

