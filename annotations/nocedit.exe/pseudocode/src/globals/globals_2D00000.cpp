#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D00000
// =============================================================================

// CEventList
CEventList g_CEventListInstance = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrix = {};

// char[1024]
char g_FileTransferErrorMessage[1024] = {};

// char[256]
char g_KeyboardState[256] = {};

// char[32768]
char g_FileTransferBuffer[32768] = {};

// char[768]
char g_SourcePaletteData[768] = {};

// uchar[768]
uchar g_DefaultPalette[768] = {};

// uint[1600]
uint g_ReciprocalLookupTable[1600] = {};

// uint[256]
uint g_ColorTable32[256] = {};
uint g_Hardware32BitPalette[256] = {};

// ushort[256]
ushort g_ColorTable16[256] = {};
ushort g_Hardware16BitPalette[256] = {};

