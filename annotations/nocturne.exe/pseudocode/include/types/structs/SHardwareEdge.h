#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SHardwareEdge
// Ghidra size: 0x38 (56 bytes)
#pragma pack(push, 1)
typedef struct SHardwareEdge {
    int y_min; // 0x0
    int y_max; // 0x4
    int x_current; // 0x8
    int x_gradient; // 0xc
    int red_current; // 0x10
    int red_gradient; // 0x14
    int u_current; // 0x18
    int u_gradient; // 0x1c
    int v_current; // 0x20
    int v_gradient; // 0x24
    int depth_current; // 0x28
    int depth_gradient; // 0x2c
    int alpha_current; // 0x30
    int alpha_gradient; // 0x34
} SHardwareEdge;
#pragma pack(pop)

