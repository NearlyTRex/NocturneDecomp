#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/structs/SFace.h"
#include "types/structs/SMRGLTextureBasic.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C90000
// =============================================================================

extern SFace* g_CapturedFacePointers[5000];
extern SMRGLTextureBasic g_CapturedTextureArray[100];
extern CDemonActorType g_CDripClassInfo;
extern CDemonActorType g_CDroneClassInfo;
extern int g_VertexIdRegistry[5000];

