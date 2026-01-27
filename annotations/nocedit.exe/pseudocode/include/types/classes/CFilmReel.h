#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CFilmReel
// Ghidra size: 0x31c (796 bytes)
typedef struct CFilmReel {
    CDemonActor base; // 0x0
    char* modelName; // 0x158
    char unk1[380]; // 0x15c
    char* movieName; // 0x2d8
    char unk2[64]; // 0x2dc
} CFilmReel;

