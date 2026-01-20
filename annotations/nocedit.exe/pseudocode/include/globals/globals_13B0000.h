#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CMatrix3x3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x13B0000
// =============================================================================

// CDemonLight*
extern CDemonLight* g_CurrentLightForCorona;

// CMatrix3x3i
extern CMatrix3x3i g_CoronaCameraRotationMatrix;

// int
extern int g_BackdropSaveActive;
extern int g_DitherPatternOffset;
extern int g_CameraDownscaleIterations;
extern int g_CameraEdgeCount;

// int[10000]
extern int g_CameraEdgeDetectionResults[10000];

// int[256]
extern int g_DitherPatternTable[256];

