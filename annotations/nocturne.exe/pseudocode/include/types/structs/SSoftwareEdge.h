#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SHardwareEdge.h"

// Structure: SSoftwareEdge
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct SSoftwareEdge {
    SHardwareEdge base; // 0x0
    int green_current; // 0x38
    int green_gradient; // 0x3c
    int blue_current; // 0x40
    int blue_gradient; // 0x44
} SSoftwareEdge;
#pragma pack(pop)

