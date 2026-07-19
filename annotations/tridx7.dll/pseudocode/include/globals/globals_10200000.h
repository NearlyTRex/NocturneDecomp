#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SDX7TextureSurfaceSlot.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10200000
// =============================================================================

// SDX7TextureSurfaceSlot[4096]
extern SDX7TextureSurfaceSlot g_TextureSurfaces[4096];

// int
extern int g_AdapterCount;

// uchar*
extern uchar* g_TextureData;

