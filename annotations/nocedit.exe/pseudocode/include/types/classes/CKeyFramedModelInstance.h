#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CKeyFramedModelPart.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SMRGLTextureExtended.h"

// Structure: CKeyFramedModelInstance
// Ghidra size: 0x17c (380 bytes)
typedef struct CKeyFramedModelInstance {
    int part_visibility_flags[30]; // 0x0
    char model_name[100]; // 0x78
    char animation_state[156]; // 0xdc
    struct CKeyFramedModel* model_ptr; // 0x178
} CKeyFramedModelInstance;

