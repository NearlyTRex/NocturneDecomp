#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CLightCone
// Ghidra size: 0x22c (556 bytes)
#pragma pack(push, 1)
typedef struct CLightCone {
    CDemonActor base; // 0x0
    float fov; // 0x158
    float falloff; // 0x15c
    int state; // 0x160
    char on_event[100]; // 0x164
    char off_event[100]; // 0x1c8
} CLightCone;
#pragma pack(pop)

