#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFilmReel
// Ghidra size: 0x31c (796 bytes)
typedef struct CFilmReel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int unk1; // 0x2d4
    char* movieName; // 0x2d8
    char unk2[64]; // 0x2dc
} CFilmReel;

