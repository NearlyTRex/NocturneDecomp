#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

// CKeyFramedModel[256]
CKeyFramedModel g_CKeyFramedModelPool[256] = {};

// int[100]
int g_NoiseTable[100] = {};

// int[256]
int g_DirtySpanStarts[256] = {};
int g_DirtySpanEnds[256] = {};

// void*[1024]
void* g_SavedScreenBufferArray[1024] = {};

