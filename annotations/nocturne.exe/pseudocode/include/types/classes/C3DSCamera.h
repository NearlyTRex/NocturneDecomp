#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SFog.h"

// Structure: C3DSCamera
// Ghidra size: 0x1a0 (416 bytes)
#pragma pack(push, 1)
typedef struct C3DSCamera {
    char name[256]; // 0x0
    CVector3f position; // 0x100
    CVector3f orientation; // 0x10c
    CMatrix3x3f rotation_matrix; // 0x118
    int dead; // 0x13c
    float projection_scale; // 0x140
    float ambient_value; // 0x144
    int camera_group; // 0x148
    int fog_enabled; // 0x14c
    SFog fog; // 0x150
    int reverb_preset; // 0x174
    CBoundingBox3D box; // 0x178
    int pvs_count; // 0x190
    int* pvs_list; // 0x194
    int vdir_zone; // 0x198
    int enabled; // 0x19c
} C3DSCamera;
#pragma pack(pop)

