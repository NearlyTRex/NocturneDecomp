#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorDestination.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFilmProjector
// Ghidra size: 0x3dc (988 bytes)
#pragma pack(push, 1)
typedef struct CFilmProjector {
    CActorDestination base; // 0x0
    CKeyFramedModelInstance model; // 0x1ec
    struct CDemonActor* key_reel; // 0x368
    char key_event[100]; // 0x36c
    float reel_rotation; // 0x3d0
    int prev_dest_state; // 0x3d4
    uint sfx_handle; // 0x3d8
} CFilmProjector;
#pragma pack(pop)

