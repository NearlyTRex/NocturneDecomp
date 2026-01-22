#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
extern CKeyFramedModel g_CKeyFramedModelPool[256];

// int
extern int g_BackgroundSceneNestingCount;
extern int g_DirtySpanCount;
extern int g_NoiseTableIndex;
extern int g_KeyframeModelCount;

// int[100]
extern int g_NoiseTable[100];

// int[256]
extern int g_DirtySpanStarts[256];
extern int g_DirtySpanEnds[256];

// uint
extern uint g_ShadowRestoreAllocator;

// undefined4
extern undefined4 DAT_026a72d8;
extern undefined4 DAT_026a72dc;
extern undefined4 DAT_026a72e0;

// void*[1200]
extern void* g_SavedScreenBufferArray[1200];

