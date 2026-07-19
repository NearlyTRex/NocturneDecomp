#pragma once

// Forward declarations
struct IDirect3DTexture2;
struct IDirectDrawSurface;

// Dependencies
#include "system/basetypes.h"

// Structure: SDX7TextureSurfaceSlot
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SDX7TextureSurfaceSlot {
    struct IDirect3DTexture2* texture; // 0x0
    struct IDirectDrawSurface* surface; // 0x4
} SDX7TextureSurfaceSlot;
#pragma pack(pop)

