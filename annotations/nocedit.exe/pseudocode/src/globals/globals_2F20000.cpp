#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F20000
// =============================================================================

CLeakChecker g_CLeakCheckerInstance;
CAlphaBitmap g_MenuBitmaps[8] = {};
CMoon g_CMoonInstance;
CAlphaBitmap g_MenuBlurLeft;
CAlphaBitmap g_MenuBlurMiddle;
CAlphaBitmap g_MenuBlurRight;
CAlphaBitmap g_CalibrationBitmap;
int g_GraphicsCardVendorIDs[16] = {};
int g_GraphicsCardDeviceIDs[17] = {};
int* g_CustomKeyPointers[31] = {};
int g_MaxNeighborVerts[200] = {};
CLodFace g_TempNeighborFaces[200] = {};

