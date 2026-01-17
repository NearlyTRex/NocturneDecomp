#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SScrape.h"

// Structure: CBox
// Ghidra size: 0x258 (600 bytes)
typedef struct CBox {
    CVector3f position; // 0x0
    CVector3f orientation; // 0xc
    CMatrix3x3f rotation_matrix; // 0x18
    int field_60; // 0x3c
    CVector3f linear_velocity; // 0x40
    CVector3f linear_velocity_local; // 0x4c
    CVector3f linear_velocity_temp; // 0x58
    CVector3f linear_momentum; // 0x64
    CVector3f angular_velocity; // 0x70
    CVector3f angular_velocity_temp; // 0x7c
    CVector3f angular_momentum; // 0x88
    int mass; // 0x94
    CVector3f moment_of_inertia; // 0x98
    CVector3f extents; // 0xa4
    int scrape_point_count; // 0xb0
    SScrape scrape_points[8]; // 0xb4
    int is_valid; // 0x254
} CBox;

