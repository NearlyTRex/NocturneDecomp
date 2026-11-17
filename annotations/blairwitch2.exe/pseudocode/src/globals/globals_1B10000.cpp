#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1B10000
// =============================================================================

// CKeyFramedModel[256]
CKeyFramedModel g_CKeyFramedModelPool[256] = {};

// CVector3f
CVector3f g_CoronaGeometryOrigin = {};

// int
int g_BackgroundSceneNestingCount = {};
int g_DirtySpanCount = {};
int g_NoiseTableIndex = {};
int g_KeyframeModelCount = {};

// int[100]
int g_INT_ARRAY_01b1388c[100] = {};

// int[256]
int g_DirtySpanStarts[256] = {};
int g_DirtySpanEnds[256] = {};

// uint
uint g_ShadowRestoreAllocator = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_SavedScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

