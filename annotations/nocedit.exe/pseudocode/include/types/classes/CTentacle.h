#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CTentacle
// Ghidra size: 0xbf2c (48940 bytes)
typedef struct CTentacle {
    CEnemy base; // 0x0
    char unk1[16]; // 0xbeb4
    struct CDemonActor* grave_actor; // 0xbec4
    char unk2[100]; // 0xbec8
} CTentacle;

