#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CSpotView
// Ghidra size: 0x3c (60 bytes)
#pragma pack(push, 1)
typedef struct CSpotView {
    float default_distance; // 0x0
    float default_zoom; // 0x4
    float default_pitch; // 0x8
    float default_yaw; // 0xc
    float default_pan_x; // 0x10
    float default_pan_y; // 0x14
    CVector3f loat_at; // 0x18
    float pitch; // 0x24
    float yaw; // 0x28
    float distance; // 0x2c
    float pan_x; // 0x30
    float pan_y; // 0x34
    float zoom; // 0x38
} CSpotView;
#pragma pack(pop)

