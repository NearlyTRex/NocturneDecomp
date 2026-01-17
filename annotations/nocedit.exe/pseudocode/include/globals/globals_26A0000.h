#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x26A0000
// =============================================================================

extern void* g_SavedScreenBufferArray[1024];
extern int g_DirtySpanStarts[256];
extern int g_DirtySpanEnds[256];
extern int g_NoiseTable[100];
extern CKeyFramedModel g_CKeyFramedModelPool[256];

