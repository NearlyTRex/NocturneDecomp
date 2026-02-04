#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/structs/SBug.h"

// Structure: CBugs
// Ghidra size: 0x199f8 (104952 bytes)
typedef struct CBugs {
    CEnemy base; // 0x0
    char unk1[12]; // 0xbeb4
    int count; // 0xbec0
    SBug bugs[400]; // 0xbec4
    int model_count; // 0x122c4
    char unk3[2100]; // 0x122c8
    CKeyFramedModelInstance model; // 0x12afc
    char unk4[27680]; // 0x12c78
    int allow_chase; // 0x19898
    int allow_swarm; // 0x1989c
    char allow_chase_event[100]; // 0x198a0
    char allow_swarm_event[100]; // 0x19904
    char animate_event[100]; // 0x19968
    char unk5[44]; // 0x199cc
} CBugs;

