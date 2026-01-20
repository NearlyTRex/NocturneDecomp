#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCameraViewportState.h"
#include "types/structs/SFogGrid.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1510000
// =============================================================================

// CVector3i
extern CVector3i g_CameraOutOfBoundsCoord;

// SCameraViewportState
extern SCameraViewportState g_BackgroundSavedCameraState;

// SFogGrid
extern SFogGrid g_CameraFogGrid;

// char[307200]
extern char g_CameraIndexedImageData[307200];

// int
extern int g_ImageProcessingState1;
extern int g_ImageProcessingState2;
extern int g_ImageBytesPerPixel;
extern int g_CameraScreenWidth;
extern int g_CameraScreenHeight;
extern int g_ScanlineSpanCount;
extern int g_BackgroundSceneDepth;
extern int g_BackgroundSavedBitsPerPixel;
extern int g_BackgroundSavedUseExternalRenderer;
extern int g_BackgroundSavedRedBitPosition;
extern int g_BackgroundSavedGreenBitPosition;
extern int g_BackgroundSavedBlueBitPosition;

// int[256]
extern int g_ScanlineSpanLeft[256];
extern int g_ScanlineSpanRight[256];

// void*[1024]
extern void* g_BackgroundSavedScreenBufferArray[1024];

