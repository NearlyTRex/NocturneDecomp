#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CTeleport
// Ghidra size: 0x160 (352 bytes)
#pragma pack(push, 1)
typedef struct CTeleport {
    CDemonActor base; // 0x0
    CVector3f trigger_extents; // 0x150
    struct CDemonActor* destination; // 0x15c
} CTeleport;
#pragma pack(pop)

