#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/funcdefs/FileSearchHandlerFunc.h"
#include "types/structs/SMRGLPrimitiveQuad.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C10000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CZombieDogClassInfo;
extern CDemonActorType g_CDoorClassInfo;

// CKeyFramedModel*
extern CKeyFramedModel* g_KeyFrameModelPoolEnd;

// FileSearchHandlerFunc*[5]
extern FileSearchHandlerFunc* g_SearchHandlers[5];

// SMRGLPrimitiveQuad[5000]
extern SMRGLPrimitiveQuad g_FaceConversionBuffer[5000];

// char[20]
extern char g_KFMShowEditorScreenshotFile[20];

// int
extern int g_NumSearchHandlers;

// uint
extern uint UINT_02c14cd8;

