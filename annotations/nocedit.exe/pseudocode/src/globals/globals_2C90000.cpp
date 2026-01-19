#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C90000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDripClassInfo = {};
CDemonActorType g_CDroneClassInfo = {};

// SFace*[5000]
SFace* g_CapturedFacePointers[5000] = {};

// SMRGLTextureBasic[100]
SMRGLTextureBasic g_CapturedTextureArray[100] = {};

// int[5000]
int g_VertexIdRegistry[5000] = {};

