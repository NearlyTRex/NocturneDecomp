#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CHostage
// Ghidra size: 0x1faf0 (129776 bytes)
typedef struct CHostage {
    CNPC base; // 0x0
    float rescue_distance; // 0x1f708
    char unk1[936]; // 0x1f70c
    int follow_state; // 0x1fab4
    char unk2[4]; // 0x1fab8
    int hostage_state; // 0x1fabc
    char unk3[28]; // 0x1fac0
    int no_shadows_when_saved; // 0x1fadc
    char unk4[16]; // 0x1fae0
} CHostage;

