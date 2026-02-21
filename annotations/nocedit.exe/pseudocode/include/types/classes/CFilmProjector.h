#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorDestination.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFilmProjector
// Ghidra size: 0x3e4 (996 bytes)
typedef struct CFilmProjector {
    CActorDestination base; // 0x0
    CKeyFramedModelInstance model; // 0x1f4
    struct CDemonActor* key_reel; // 0x370
    char key_event[100]; // 0x374
    float reel_rotation; // 0x3d8
    int prev_dest_state; // 0x3dc
    uint sfx_handle; // 0x3e0
} CFilmProjector;

