#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

void*[1024] g_SavedScreenBufferArray = {};
int[256] g_DirtySpanStarts = {};
int[256] g_DirtySpanEnds = {};
int[100] g_NoiseTable = {};
CKeyFramedModel[256] g_CKeyFramedModelPool = {};

