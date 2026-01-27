#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CDraculaBride
// Ghidra size: 0xbfec (49132 bytes)
typedef struct CDraculaBride {
    CEnemy base; // 0x0
    char unk[144]; // 0xbeb4
    int freakyVoiceNumber; // 0xbf44
    int mistState; // 0xbf48
    float vanishTimer; // 0xbf4c
    char padding_0xbf50[8]; // 0xbf50
    CVector3f newPos; // 0xbf58
    char padding_0xbf64[4]; // 0xbf64
    int partCount; // 0xbf68
    char padding_0xbf6c[120]; // 0xbf6c
    int exploded; // 0xbfe4
    float fadeTimer; // 0xbfe8
} CDraculaBride;

