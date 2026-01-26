#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/structs/SFace.h"
#include "types/structs/SMRGLTextureBasic.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C90000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CDripClassInfo;
extern CDemonActorType g_CDroneClassInfo;

// CKeyFramedModelInstance
extern CKeyFramedModelInstance DAT_02c9b170;

// SFace*[5000]
extern SFace* g_CapturedFacePointers[5000];

// SMRGLTextureBasic[100]
extern SMRGLTextureBasic g_CapturedTextureArray[100];

// int[5000]
extern int g_VertexIdRegistry[5000];

