#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CFlies
// Ghidra size: 0x2a20 (10784 bytes)
typedef struct CFlies {
    CDemonActor base; // 0x0
    CVector3f box_size; // 0x158
    int count; // 0x164
    char unk1[10400]; // 0x168
    struct CDemonActor* follow_actor; // 0x2a08
    int gather_count; // 0x2a0c
    int unk2; // 0x2a10
    float gather_time; // 0x2a14
    char unk3[8]; // 0x2a18
} CFlies;

