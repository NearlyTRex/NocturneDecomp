#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
CKeyFramedModel g_CKeyFramedModelPool[256] = {};

// CVector3f
CVector3f CVector3f_026a72d8 = {};

// int
int g_BackgroundSceneNestingCount = {};
int g_DirtySpanCount = {};
int g_NoiseTableIndex = {};
int g_KeyframeModelCount = {};

// int[102]
int g_NoiseTable[102] = {};

// int[256]
int g_DirtySpanStarts[256] = {};
int g_DirtySpanEnds[256] = {};

// uint
uint g_ShadowRestoreAllocator = {};

// void*[1200]
void* g_SavedScreenBufferArray[1200] = {};

