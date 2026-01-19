#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F20000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_MenuBlurLeft = {};
CAlphaBitmap g_MenuBlurMiddle = {};
CAlphaBitmap g_MenuBlurRight = {};
CAlphaBitmap g_CalibrationBitmap = {};

// CAlphaBitmap[8]
CAlphaBitmap g_MenuBitmaps[8] = {};

// CLeakChecker
CLeakChecker g_CLeakCheckerInstance = {};

// CLodFace[200]
CLodFace g_TempNeighborFaces[200] = {};

// CMoon
CMoon g_CMoonInstance = {};

// int*[31]
int* g_CustomKeyPointers[31] = {};

// int[16]
int g_GraphicsCardVendorIDs[16] = {};

// int[17]
int g_GraphicsCardDeviceIDs[17] = {};

// int[200]
int g_MaxNeighborVerts[200] = {};

