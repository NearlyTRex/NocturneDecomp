#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CBaron
// Ghidra size: 0x1fcd4 (130260 bytes)
typedef struct CBaron {
    CHero base; // 0x0
    char summon_event[100]; // 0x1fbd4
    char go_away_event[100]; // 0x1fc38
    int unk1; // 0x1fc9c
    int unk2; // 0x1fca0
    int unk3; // 0x1fca4
    float unk4; // 0x1fca8
    int unk5; // 0x1fcac
    int unk6; // 0x1fcb0
    int unk7; // 0x1fcb4
    int unk8; // 0x1fcb8
    int unk9; // 0x1fcbc
    int unk10; // 0x1fcc0
    int unk11; // 0x1fcc4
    int unk12; // 0x1fcc8
    int summoned; // 0x1fccc
    int unk13; // 0x1fcd0
} CBaron;

