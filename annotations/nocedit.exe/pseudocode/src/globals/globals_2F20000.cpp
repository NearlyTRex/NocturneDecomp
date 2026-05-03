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

// char*[10]
char* g_ControlOptionsMenuPointers[10] = {};
char* g_SoundOptionsMenuPointers[10] = {};

// char*[16]
char* g_GraphicsCardNames[16] = {};

// char*[4]
char* g_OptionsMenuPointers[4] = {};
char* g_MenuTextPointers[4] = {};

// char*[9]
char* g_GraphicsMenuTextPointers[9] = {};

// char[10][256]
char g_SoundMenuTextBuffers[10][256] = {};
char g_StringBuffers[10][256] = {};

// char[30][40]
char g_CustomKeyNames[30][40] = {};

// char[4][256]
char g_OptionsMenuTextBuffers[4][256] = {};
char g_MainMenuTextBuffers[4][256] = {};

// char[64]
char g_GraphicsCardDriverData[64] = {};

// char[9][256]
char g_GraphicsMenuTextBuffers[9][256] = {};
char g_ControlsMenuTextBuffers[9][256] = {};

// int
int g_MenuLeftRightPressed = {};
int g_AudioVisualizationCounter = {};
int g_MenuInputHappened = {};
int g_CurrentGraphicsBoard = {};
int g_GraphicsCardCount = {};
int g_CustomKeyCount = {};
int g_StringBufferIndex = {};

// int*[31]
int* g_CustomKeyPointers[31] = {};

// int[16]
int g_GraphicsCardVendorIDs[16] = {};

// int[17]
int g_GraphicsCardDeviceIDs[17] = {};

// int[200]
int g_MaxNeighborVerts[200] = {};

