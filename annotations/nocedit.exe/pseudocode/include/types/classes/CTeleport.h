#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CTeleport
// Ghidra size: 0x168 (360 bytes)
typedef struct CTeleport {
    CDemonActor base; // 0x0
    int unk1; // 0x158
    int unk2; // 0x15c
    int unk3; // 0x160
    struct CDemonActor* destination; // 0x164
} CTeleport;

