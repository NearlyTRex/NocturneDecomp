#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CGargoyle
// Ghidra size: 0xbf18 (48920 bytes)
typedef struct CGargoyle {
    CEnemy base; // 0x0
    char unk[48]; // 0xbebc
    int stone_red; // 0xbeec
    int stone_green; // 0xbef0
    int stone_blue; // 0xbef4
    struct CDemonActor* home_base; // 0xbef8
    char unk2[28]; // 0xbefc
} CGargoyle;

