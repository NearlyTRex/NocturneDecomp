#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BE0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDripClassInfo = {};
CDemonActorType g_CDroneClassInfo = {};

// CDemonCube*[20000]
CDemonCube* g_PVSCubePointers[20000] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_StalactiteRockModelInstance = {};

// CVector3f
CVector3f g_SkyDomeCenter = {};

// SFace*[5000]
SFace* g_CapturedFacePointers[5000] = {};

// SMRGLSkyTexture[24]
SMRGLSkyTexture g_SkyDomeTextureData[24] = {};

// SMRGLTextureBasic[300]
SMRGLTextureBasic g_CapturedTextureArray[300] = {};

// int
int g_CubesTestedCount = {};
int g_CubesWithVoxelsCount = {};
int g_CubesVisibleCount = {};
int g_CubesRenderedCount = {};
int g_PVSDrawnCubeCount = {};
int g_PVSReadyFlag = {};

