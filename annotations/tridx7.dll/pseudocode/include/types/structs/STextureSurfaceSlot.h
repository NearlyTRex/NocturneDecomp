#pragma once

// Forward declarations
struct IDirect3DTexture2;
struct IDirectDrawSurface;

// Dependencies
#include "system/basetypes.h"

// Structure: STextureSurfaceSlot
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct STextureSurfaceSlot {
    struct IDirect3DTexture2* texture; // 0x0
    struct IDirectDrawSurface* surface; // 0x4
} STextureSurfaceSlot;
#pragma pack(pop)

