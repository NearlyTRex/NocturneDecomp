#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C90000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDripClassInfo = {};
CDemonActorType g_CDroneClassInfo = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_StalactiteRockModelInstance = {};

// SFace*[5000]
SFace* g_CapturedFacePointers[5000] = {};

// SMRGLTextureBasic[300]
SMRGLTextureBasic g_CapturedTextureArray[300] = {};

// int[5000]
int g_VertexIdRegistry[5000] = {};

