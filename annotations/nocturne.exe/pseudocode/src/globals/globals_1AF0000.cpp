#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1AF0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CZombieDogClassInfo = {};
CDemonActorType g_CDoorClassInfo = {};

// FileSearchHandlerFunc*[5]
FileSearchHandlerFunc* g_SearchHandlers[5] = {};

// SMRGLPrimitiveQuad[5000]
SMRGLPrimitiveQuad g_FaceConversionBuffer[5000] = {};

// int
int g_NumSearchHandlers = {};

// uint
uint g_UINT_01af4e98 = {};

