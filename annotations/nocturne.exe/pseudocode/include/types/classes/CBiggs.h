#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CMorph.h"

// Structure: CBiggs
// Ghidra size: 0xcb38 (52024 bytes)
#pragma pack(push, 1)
typedef struct CBiggs {
    CEnemy base; // 0x0
    CKeyFramedModelInstance model; // 0xbd24
    int morphing; // 0xbea0
    float morph_timer; // 0xbea4
    CMorph morph; // 0xbea8
    char morph_event[100]; // 0xcad4
} CBiggs;
#pragma pack(pop)

