#pragma once

// Forward declarations
struct CDraculaBride;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SFreaky
// Ghidra size: 0x54 (84 bytes)
#pragma pack(push, 1)
typedef struct SFreaky {
    uint sfx_handle; // 0x0
    CVector3f position; // 0x4
    CVector3f tangent; // 0x10
    float t; // 0x1c
    CVector3f control_points[4]; // 0x20
    struct CDraculaBride* owner; // 0x50
} SFreaky;
#pragma pack(pop)

