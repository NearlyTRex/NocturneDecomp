#pragma once

// Forward declarations
struct CDeformableModelInstance;
struct CKeyFramedModelInstance;

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SRayQueryState.h"

// Structure: SCollisionInfo
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SCollisionInfo {
    SRayQueryState ray_query; // 0x0
    float cylinder_bottom_y; // 0x14
    float cylinder_top_y; // 0x18
    float cylinder_radius; // 0x1c
    struct CDeformableModelInstance* deformable_model; // 0x20
    struct CKeyFramedModelInstance* keyframed_model; // 0x24
} SCollisionInfo;
#pragma pack(pop)

