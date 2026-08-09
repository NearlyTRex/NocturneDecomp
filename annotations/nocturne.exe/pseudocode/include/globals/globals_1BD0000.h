#pragma once

// Type dependencies
#include "system/basetypes.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1BD0000
// =============================================================================

// uchar[18][256]
extern uchar g_FogTable[18][256];

// uchar[256][256]
extern uchar g_BlendTableAvg[256][256];

// uint*[1200]
extern uint* g_ZBufferScanlineArray[1200];

// void*[1200]
extern void* g_ScreenBufferArray[1200];

