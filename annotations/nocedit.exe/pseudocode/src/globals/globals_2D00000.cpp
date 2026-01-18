#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D00000
// =============================================================================

ushort g_ColorTable16[256] = {};
uint g_ColorTable32[256] = {};
uint g_Hardware32BitPalette[256] = {};
ushort g_Hardware16BitPalette[256] = {};
uint g_ReciprocalLookupTable[1600] = {};
CMatrix3x3i g_TransformMatrix;
CEventList g_CEventListInstance;

