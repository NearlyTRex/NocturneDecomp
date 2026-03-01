#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SHardwareEdge.h"

// Structure: SSoftwareEdge
// Ghidra size: 0x48 (72 bytes)
typedef struct SSoftwareEdge {
    SHardwareEdge base; // 0x0
    int color_current; // 0x38
    int color_gradient; // 0x3c
    int alpha_current; // 0x40
    int alpha_gradient; // 0x44
} SSoftwareEdge;

