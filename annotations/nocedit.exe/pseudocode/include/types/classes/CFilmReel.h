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
    struct CDemonActor* carrier; // 0x2d4
    char movie_name[32]; // 0x2d8
    float unk1; // 0x2f8
    char unk2[32]; // 0x2fc
} CFilmReel;

