#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CMirrorHack
// Ghidra size: 0x2d0 (720 bytes)
#pragma pack(push, 1)
typedef struct CMirrorHack {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance mirror_model; // 0x150
    struct CDemonActor* interacting_actor; // 0x2cc
} CMirrorHack;
#pragma pack(pop)

