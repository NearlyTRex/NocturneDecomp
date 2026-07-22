#pragma once

// Forward declarations
struct CKeyFramedModel;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"
#include "types/classes/CVector3i.h"

// Structure: CRock
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct CRock {
    CParticle base; // 0x0
    CVector3i rotation; // 0x38
    struct CKeyFramedModel* model_ptr; // 0x44
} CRock;
#pragma pack(pop)

