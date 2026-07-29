#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CLightCone
// Ghidra size: 0x224 (548 bytes)
#pragma pack(push, 1)
typedef struct CLightCone {
    CDemonActor base; // 0x0
    float fov; // 0x150
    float falloff; // 0x154
    int state; // 0x158
    char on_event[100]; // 0x15c
    char off_event[100]; // 0x1c0
} CLightCone;
#pragma pack(pop)

