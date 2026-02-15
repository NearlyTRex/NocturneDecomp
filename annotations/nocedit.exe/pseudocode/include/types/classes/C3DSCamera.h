#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SFog.h"

// Structure: C3DSCamera
// Ghidra size: 0x1a4 (420 bytes)
typedef struct C3DSCamera {
    char name[256]; // 0x0
    CVector3f position; // 0x100
    CVector3f orientation; // 0x10c
    CMatrix3x3f rotation_matrix; // 0x118
    int padding; // 0x13c
    int is_panning; // 0x140
    float projection_scale; // 0x144
    float ambient_value; // 0x148
    int camera_group; // 0x14c
    int fog_enabled; // 0x150
    SFog fog; // 0x154
    int reverb_preset; // 0x178
    CVector3f box_min; // 0x17c
    CVector3f box_max; // 0x188
    int pvs_count; // 0x194
    int* pvs_list; // 0x198
    int vdir_zone; // 0x19c
    int enabled; // 0x1a0
} C3DSCamera;

