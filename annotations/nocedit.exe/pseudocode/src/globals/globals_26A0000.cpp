#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

void* g_SavedScreenBufferArray[1024] = {};
int g_DirtySpanStarts[256] = {};
int g_DirtySpanEnds[256] = {};
int g_NoiseTable[100] = {};
CKeyFramedModel g_CKeyFramedModelPool[256] = {};

