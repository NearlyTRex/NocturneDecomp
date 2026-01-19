#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x13B0000
// =============================================================================

// CMatrix3x3i
CMatrix3x3i g_CoronaCameraRotationMatrix;

// int[10000]
int g_CameraEdgeDetectionResults[10000] = {};

// int[256]
int g_DitherPatternTable[256] = {};

