#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"

// Structure: CSvetlana
// Ghidra size: 0x9f8d8 (653528 bytes)
typedef struct CSvetlana {
    CHero base; // 0x0
    int unk1; // 0x1fbd4
    int unk2; // 0x1fbd8
    CCloth cape_cloth; // 0x1fbdc
    char unk3[12]; // 0x5fa40
    CCloth hair_cloth; // 0x5fa4c
    char unk4[12]; // 0x9f8b0
    int unk5; // 0x9f8bc
    char unk6[20]; // 0x9f8c0
    int unk7; // 0x9f8d4
} CSvetlana;

