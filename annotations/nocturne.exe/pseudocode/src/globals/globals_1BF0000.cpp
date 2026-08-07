#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BF0000
// =============================================================================

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uchar[34][256]
uchar g_LightTable[34][256] = {};

// uint[256]
uint g_ColorTable32[256] = {};

// ushort[256]
ushort g_ColorTable16[256] = {};

