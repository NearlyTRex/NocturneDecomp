#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CEventList.h"
#include "types/classes/CMatrix3x3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D00000
// =============================================================================

// CEventList
extern CEventList g_CEventListInstance;

// CMatrix3x3i
extern CMatrix3x3i g_TransformMatrix;

// char[1024]
extern char g_FileTransferErrorMessage[1024];

// char[256]
extern char g_KeyboardState[256];

// char[32768]
extern char g_FileTransferBuffer[32768];

// char[768]
extern char g_SourcePaletteData[768];

// uchar[768]
extern uchar g_DefaultPalette[768];

// uint[1600]
extern uint g_ReciprocalLookupTable[1600];

// uint[256]
extern uint g_ColorTable32[256];
extern uint g_Hardware32BitPalette[256];

// ushort[256]
extern ushort g_ColorTable16[256];
extern ushort g_Hardware16BitPalette[256];

