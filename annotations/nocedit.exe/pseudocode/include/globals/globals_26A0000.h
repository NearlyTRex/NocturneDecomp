#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
extern CKeyFramedModel g_CKeyFramedModelPool[256];

// CVector3f
extern CVector3f CVector3f_026a72d8;

// int
extern int g_BackgroundSceneNestingCount;
extern int g_DirtySpanCount;
extern int g_NoiseTableIndex;
extern int g_KeyframeModelCount;

// int[102]
extern int g_NoiseTable[102];

// int[256]
extern int g_DirtySpanStarts[256];
extern int g_DirtySpanEnds[256];

// uint
extern uint g_ShadowRestoreAllocator;

// void*[1200]
extern void* g_SavedScreenBufferArray[1200];

