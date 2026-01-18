#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CEventList.h"
#include "types/classes/CMatrix3x3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D00000
// =============================================================================

extern ushort g_ColorTable16[256];
extern uint g_ColorTable32[256];
extern uint g_Hardware32BitPalette[256];
extern ushort g_Hardware16BitPalette[256];
extern uint g_ReciprocalLookupTable[1600];
extern CMatrix3x3i g_TransformMatrix;
extern CEventList g_CEventListInstance;

