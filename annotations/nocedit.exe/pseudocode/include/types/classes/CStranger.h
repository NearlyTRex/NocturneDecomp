#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CStranger
// Ghidra size: 0x1fe70 (130672 bytes)
typedef struct CStranger {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    char unk1[96]; // 0x1fbd8
    int action_pending; // 0x1fc38
    char unk2[156]; // 0x1fc3c
    CKeyFramedModelInstance model; // 0x1fcd8
    char unk3[28]; // 0x1fe54
} CStranger;

