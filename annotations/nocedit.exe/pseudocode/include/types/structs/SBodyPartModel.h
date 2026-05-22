#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: SBodyPartModel
// Ghidra size: 0x194 (404 bytes)
#pragma pack(push, 1)
typedef struct SBodyPartModel {
    CVector3f scale; // 0x0
    CVector3f position; // 0xc
    CKeyFramedModelInstance model; // 0x18
} SBodyPartModel;
#pragma pack(pop)

