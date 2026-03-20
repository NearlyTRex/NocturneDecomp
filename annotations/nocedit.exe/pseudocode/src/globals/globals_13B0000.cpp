#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x13B0000
// =============================================================================

// CDemonLight*
CDemonLight* g_CurrentLightForCorona = {};

// CMatrix3x3i
CMatrix3x3i g_CoronaCameraRotationMatrix = {};

// SCameraEdge[10000]
SCameraEdge g_CameraEdgeDetectionResults[10000] = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_CameraDownscaleIterations = {};

// int
int g_BackdropSaveActive = {};
int g_DitherPatternOffset = {};
int g_CameraEdgeCount = {};

// int[256]
int g_DitherPatternTable[256] = {};

