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
    char unk1[48]; // 0x1fc9c
    int summoned; // 0x1fccc
    int unk2; // 0x1fcd0
} CBaron;

