#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CFilmReel
// Ghidra size: 0x314 (788 bytes)
#pragma pack(push, 1)
typedef struct CFilmReel {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    struct CDemonActor* carrier; // 0x2cc
    char movie_name[32]; // 0x2d0
    float pickup_radius; // 0x2f0
    char dead[32]; // 0x2f4
} CFilmReel;
#pragma pack(pop)

