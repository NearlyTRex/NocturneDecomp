#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
extern CKeyFramedModel g_CKeyFramedModelPool[256];

// int[100]
extern int g_NoiseTable[100];

// int[256]
extern int g_DirtySpanStarts[256];
extern int g_DirtySpanEnds[256];

// void*[1024]
extern void* g_SavedScreenBufferArray[1024];

