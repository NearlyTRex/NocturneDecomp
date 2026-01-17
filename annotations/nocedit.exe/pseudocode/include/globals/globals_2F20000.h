#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CLodFace.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F20000
// =============================================================================

extern CAlphaBitmap g_MenuBitmaps[8];
extern int g_GraphicsCardVendorIDs[16];
extern int g_GraphicsCardDeviceIDs[17];
extern int* g_CustomKeyPointers[31];
extern int g_MaxNeighborVerts[200];
extern CLodFace g_TempNeighborFaces[200];

