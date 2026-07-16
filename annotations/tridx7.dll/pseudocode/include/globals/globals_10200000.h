#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/STextureSurfaceSlot.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10200000
// =============================================================================

// STextureSurfaceSlot[4096]
extern STextureSurfaceSlot g_TextureSurfaces[4096];

// int
extern int g_AdapterCount;

// void*
extern void* g_TextureData;

