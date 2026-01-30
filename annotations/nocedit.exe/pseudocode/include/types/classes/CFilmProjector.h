#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorDestination.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFilmProjector
// Ghidra size: 0x3e4 (996 bytes)
typedef struct CFilmProjector {
    CActorDestination base; // 0x0
    CKeyFramedModelInstance model; // 0x1f4
    char unk[116]; // 0x370
} CFilmProjector;

