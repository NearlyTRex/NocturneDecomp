#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CCrater
// Ghidra size: 0x70 (112 bytes)
typedef struct CCrater {
    int active; // 0x0
    int has_smoke; // 0x4
    float smoke_delay; // 0x8
    CVector3f center_position; // 0xc
    float smoke_spawn_timer; // 0x18
    CVector3f smoke_positions[3]; // 0x1c
    CVector3f corner_positions[4]; // 0x40
} CCrater;

