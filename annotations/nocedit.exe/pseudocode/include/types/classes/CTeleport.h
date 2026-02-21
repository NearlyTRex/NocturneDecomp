#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CTeleport
// Ghidra size: 0x168 (360 bytes)
typedef struct CTeleport {
    CDemonActor base; // 0x0
    CVector3f trigger_extents; // 0x158
    struct CDemonActor* destination; // 0x164
} CTeleport;

