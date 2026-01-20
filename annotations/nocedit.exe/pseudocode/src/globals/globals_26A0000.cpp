#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
CKeyFramedModel g_CKeyFramedModelPool[256] = {};

// int
int g_BackgroundSceneNestingCount = {};
int g_DirtySpanCount = {};
int g_NoiseTableIndex = {};
int g_KeyframeModelCount = {};

// int[100]
int g_NoiseTable[100] = {};

// int[256]
int g_DirtySpanStarts[256] = {};
int g_DirtySpanEnds[256] = {};

// uint
uint g_ShadowRestoreAllocator = {};

// undefined4
undefined4 DAT_026a72d8 = {};
undefined4 DAT_026a72dc = {};
undefined4 DAT_026a72e0 = {};

// void*[1024]
void* g_SavedScreenBufferArray[1024] = {};

