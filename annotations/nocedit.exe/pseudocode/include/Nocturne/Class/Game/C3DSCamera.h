#pragma once

// Structure: C3DSCamera
// Ghidra size: 0x1a4 (420 bytes)
typedef struct C3DSCamera {
    char name[256]; // 0x0
    CVector3f position; // 0x100
    CVector3f orientation; // 0x10c
    CMatrix3x3f rotation_matrix; // 0x118
    int field_316; // 0x13c
    int is_panning; // 0x140
    float projection_scale; // 0x144
    float ambient_value; // 0x148
    int field_332; // 0x14c
    int fog_enabled; // 0x150
    SFog fog; // 0x154
    int reverb_preset; // 0x178
    CVector3f box_min; // 0x17c
    CVector3f box_max; // 0x188
    int pvs_count; // 0x194
    int* pvs_list; // 0x198
    int field_412; // 0x19c
    int field_416; // 0x1a0
} C3DSCamera;

