#pragma once

// Forward declarations
struct CKeyFramedModel;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CParticle.h"
#include "types/classes/CVector3f.h"

// Structure: CShell
// Ghidra size: 0x58 (88 bytes)
#pragma pack(push, 1)
typedef struct CShell {
    CParticle base; // 0x0
    CVector3f euler_angles; // 0x38
    CVector3f angular_velocity; // 0x44
    int bounce_count; // 0x50
    struct CKeyFramedModel* model_ptr; // 0x54
} CShell;
#pragma pack(pop)

