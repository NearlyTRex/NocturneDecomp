#pragma once

// Forward declarations
struct CKeyFramedModel;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CBulletTrail
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct CBulletTrail {
    CVector3f start_position; // 0x0
    CVector3f end_position; // 0xc
    struct CKeyFramedModel* model_ptr; // 0x18
    float segment_length; // 0x1c
    int frames_remaining; // 0x20
} CBulletTrail;
#pragma pack(pop)

