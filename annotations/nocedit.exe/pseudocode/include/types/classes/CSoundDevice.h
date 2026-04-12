#pragma once

// Forward declarations
struct CSoundDeviceFull_vtable;

// Dependencies
#include "system/basetypes.h"

// Structure: CSoundDevice
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CSoundDevice {
    struct CSoundDeviceFull_vtable* vtable; // 0x0
} CSoundDevice;
#pragma pack(pop)

