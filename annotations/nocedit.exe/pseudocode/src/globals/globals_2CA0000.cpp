#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CA0000
// =============================================================================

// CDemonCube*[20000]
CDemonCube* g_PVSCubePointers[20000] = {};

// CVector3i
CVector3i CVector3i_02ca0388 = {};

// SMRGLSkyTexture[24]
SMRGLSkyTexture g_SkyDomeTextureData[24] = {};

// int
int g_CubesTestedCount = {};
int g_CubesWithVoxelsCount = {};
int g_CubesVisibleCount = {};
int g_CubesRenderedCount = {};
int g_PVSDrawnCubeCount = {};
int g_PVSReadyFlag = {};

