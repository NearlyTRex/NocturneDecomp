#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: SBodyPartModel
// Ghidra size: 0x1d4 (468 bytes)
typedef struct SBodyPartModel {
    char unk1[24]; // 0x0
    CKeyFramedModelInstance model; // 0x18
    char unk2[64]; // 0x194
} SBodyPartModel;

