#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SHardwareEdge
// Ghidra size: 0x38 (56 bytes)
typedef struct SHardwareEdge {
    int y_min; // 0x0
    int y_max; // 0x4
    int x_current; // 0x8
    int x_gradient; // 0xc
    int z_current; // 0x10
    int z_gradient; // 0x14
    int u_current; // 0x18
    int u_gradient; // 0x1c
    int v_current; // 0x20
    int v_gradient; // 0x24
    int w_current; // 0x28
    int w_gradient; // 0x2c
    int fog_current; // 0x30
    int fog_gradient; // 0x34
} SHardwareEdge;

