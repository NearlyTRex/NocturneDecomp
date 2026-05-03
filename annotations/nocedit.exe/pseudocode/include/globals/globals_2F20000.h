#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CLeakChecker.h"
#include "types/classes/CLodFace.h"
#include "types/classes/CMoon.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F20000
// =============================================================================

// CAlphaBitmap
extern CAlphaBitmap g_MenuBlurLeft;
extern CAlphaBitmap g_MenuBlurMiddle;
extern CAlphaBitmap g_MenuBlurRight;
extern CAlphaBitmap g_CalibrationBitmap;

// CAlphaBitmap[8]
extern CAlphaBitmap g_MenuBitmaps[8];

// CLeakChecker
extern CLeakChecker g_CLeakCheckerInstance;

// CLodFace[200]
extern CLodFace g_TempNeighborFaces[200];

// CMoon
extern CMoon g_CMoonInstance;

// char*[10]
extern char* g_ControlOptionsMenuPointers[10];
extern char* g_SoundOptionsMenuPointers[10];

// char*[16]
extern char* g_GraphicsCardNames[16];

// char*[4]
extern char* g_OptionsMenuPointers[4];
extern char* g_MenuTextPointers[4];

// char*[9]
extern char* g_GraphicsMenuTextPointers[9];

// char[10][256]
extern char g_SoundMenuTextBuffers[10][256];
extern char g_StringBuffers[10][256];

// char[30][40]
extern char g_CustomKeyNames[30][40];

// char[4][256]
extern char g_OptionsMenuTextBuffers[4][256];
extern char g_MainMenuTextBuffers[4][256];

// char[64]
extern char g_GraphicsCardDriverData[64];

// char[9][256]
extern char g_GraphicsMenuTextBuffers[9][256];
extern char g_ControlsMenuTextBuffers[9][256];

// int
extern int g_MenuLeftRightPressed;
extern int g_AudioVisualizationCounter;
extern int g_MenuInputHappened;
extern int g_CurrentGraphicsBoard;
extern int g_GraphicsCardCount;
extern int g_CustomKeyCount;
extern int g_StringBufferIndex;

// int*[31]
extern int* g_CustomKeyPointers[31];

// int[16]
extern int g_GraphicsCardVendorIDs[16];

// int[17]
extern int g_GraphicsCardDeviceIDs[17];

// int[200]
extern int g_MaxNeighborVerts[200];

