#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLSkyTexture.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CA0000
// =============================================================================

// CDemonCube*[20000]
extern CDemonCube* g_PVSCubePointers[20000];

// CVector3i
extern CVector3i CVector3i_02ca0388;

// SMRGLSkyTexture[24]
extern SMRGLSkyTexture g_SkyDomeTextureData[24];

// int
extern int g_CubesTestedCount;
extern int g_CubesWithVoxelsCount;
extern int g_CubesVisibleCount;
extern int g_CubesRenderedCount;
extern int g_PVSDrawnCubeCount;
extern int g_PVSReadyFlag;

