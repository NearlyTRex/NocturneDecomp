#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/structs/SBug.h"

// Structure: CBugs
// Ghidra size: 0x198a0 (104608 bytes)
typedef struct CBugs {
    CEnemy base; // 0x0
    char unk1[12]; // 0xbeb4
    int count; // 0xbec0
    SBug unk2[400]; // 0xbec4
    int model_count; // 0x122c4
    char unk3[30160]; // 0x122c8
    int allow_chase; // 0x19898
    int allow_swarm; // 0x1989c
} CBugs;

