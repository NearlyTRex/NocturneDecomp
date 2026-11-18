#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x7D0000
// =============================================================================

// CAlphaBitmap[4]
CAlphaBitmap CAlphaBitmap_ARRAY_007dffc0[4] = {};

// CDemonActor*
CDemonActor* g_CurrentProcessingActor = {};
CDemonActor* g_CurrentActorBeingProcessed = {};

// CDemonActorType
CDemonActorType g_CDemonActorClassInfo = {};
CDemonActorType g_CAmmoClassInfo = {};
CDemonActorType g_CDemonActorType_007dfd28 = {};
CDemonActorType g_CDemonActorType_007dfd64 = {};
CDemonActorType g_CDemonActorType_007dfda0 = {};
CDemonActorType g_CAmmoBoxClassInfo = {};
CDemonActorType g_CBarrierClassInfo = {};
CDemonActorType g_CBatClassInfo = {};
CDemonActorType g_CBatteryClassInfo = {};
CDemonActorType g_CBindEvilClassInfo = {};
CDemonActorType g_CBirdClassInfo = {};
CDemonActorType g_CBlunderbusClassInfo = {};

// CDemonActorType*[200]
CDemonActorType* g_ActorClassRegistrations[200] = {};

// CPuzzle*
CPuzzle* g_CPuzzle_PTR_007dffb4 = {};

// SMRGLHeaderPrimitive*[2000]
SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};

// SRenderBufferEntry*[2500]
SRenderBufferEntry* g_RenderBufferSortArray[2500] = {};

// _FILE*
_FILE* g_ActorDataFile = {};

// char[52]
char g_ActorDebugBuffer[52] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int g_INT_007dff08 = {};
int g_INT_007dffb8 = {};
int g_INT_007dffbc = {};

// int[1]
int g_INT_ARRAY_007dff88[1] = {};

// uint
uint g_RandomSeedValue = {};

// undefined4
undefined4 DAT_007dff8c = {};
undefined4 DAT_007dff90 = {};

