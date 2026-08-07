#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BD0000
// =============================================================================

// uchar[256][256]
uchar g_BlendTableAvg[256][256] = {};

// uint*[1200]
uint* g_ZBufferScanlineArray[1200] = {};

// void*[1200]
void* g_ScreenBufferArray[1200] = {};

