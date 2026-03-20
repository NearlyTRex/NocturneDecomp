#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C10000
// =============================================================================

// CDemonActorType
CDemonActorType g_CZombieDogClassInfo = {};
CDemonActorType g_CDoorClassInfo = {};

// CKeyFramedModel*
CKeyFramedModel* g_KeyFrameModelPoolEnd = {};

// FileSearchHandlerFunc*[5]
FileSearchHandlerFunc* g_SearchHandlers[5] = {};

// SMRGLPrimitiveQuad[5000]
SMRGLPrimitiveQuad g_FaceConversionBuffer[5000] = {};

// char[20]
char g_KFMShowEditorScreenshotFile[20] = {};

// int
int g_NumSearchHandlers = {};

// uint
uint UINT_02c14cd8 = {};

