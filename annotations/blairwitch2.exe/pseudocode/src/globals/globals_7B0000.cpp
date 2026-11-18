#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x7B0000
// =============================================================================

// CDemonActor*
CDemonActor* g_CurrentProcessingActor = {};
CDemonActor* g_CurrentActorBeingProcessed = {};
CDemonActor* g_LastCollisionActor = {};

// CDemonActorType
CDemonActorType g_CDemonActorClassInfo = {};
CDemonActorType g_CAmmoClassInfo = {};
CDemonActorType g_CAmmoBoxClassInfo = {};
CDemonActorType g_CAnvilClassInfo = {};
CDemonActorType g_CArmourClassInfo = {};
CDemonActorType g_CBackgroundActorClassInfo = {};
CDemonActorType g_CBaronClassInfo = {};
CDemonActorType g_CBaronWeaponClassInfo = {};
CDemonActorType g_CBarrierClassInfo = {};
CDemonActorType g_CBatClassInfo = {};
CDemonActorType g_CBatCreatureClassInfo = {};
CDemonActorType g_CBatmanClassInfo = {};
CDemonActorType g_CBatteryClassInfo = {};
CDemonActorType g_CBeastClassInfo = {};
CDemonActorType g_CBiggsClassInfo = {};
CDemonActorType g_CBodyPartClassInfo = {};
CDemonActorType g_CBoneGuyClassInfo = {};
CDemonActorType g_CBoxActorClassInfo = {};
CDemonActorType g_CLightActorClassInfo = {};
CDemonActorType g_CBrideClassInfo = {};
CDemonActorType g_CBugsClassInfo = {};
CDemonActorType g_CCharacterClassInfo = {};

// CDemonActorType*[200]
CDemonActorType* g_ActorClassRegistrations[200] = {};

// CDemonCamera*
CDemonCamera* g_CurrentSceneCamera = {};

// CDemonFilter[8]
CDemonFilter g_LightActorFilters[8] = {};

// CDemonGlobe
CDemonGlobe g_CDemonGlobe_007bda98 = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance = {};
CKeyFramedModelInstance g_StakeModelInstance = {};

// CVector3f
CVector3f g_BrideOffsetMinusX = {};
CVector3f g_BrideOffsetPlusX = {};

// SMRGLHeaderPrimitive*[2000]
SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_007bda78 = {};

// SRenderBufferEntry*[2500]
SRenderBufferEntry* g_RenderBufferSortArray[2500] = {};

// SRenderVertex*[16]
SRenderVertex* g_ClipperCullingPointers[16] = {};

// SRenderVertex[12]
SRenderVertex g_ClipperTempBuffer[12] = {};

// SRenderVertex[16]
SRenderVertex g_SRenderVertex_ARRAY_007bee34[16] = {};
SRenderVertex g_SRenderVertex_ARRAY_007bf4b8[16] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};

// _FILE*
_FILE* g_ActorDataFile = {};

// byte
byte g_BYTE_007bdad8 = {};

// char[52]
char g_ActorDebugBuffer[52] = {};

// float
float g_FLOAT_007bc4dc = {};

// float[100]
float g_BoneBurnIntensity[100] = {};

// float[12][12]
float g_BugsGroundHeightGridTemp[12][12] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int g_LightActorFiltersInitialized = {};
int g_EtherealUVScroll = {};
int g_EtherealBoltFrame = {};
int g_LineBlendingDisabled = {};
int g_INT_007bee30 = {};
int g_INT_007bf4b4 = {};
int g_ClipperTempCount = {};
int g_InputVertexCount = {};
int g_OutputVertexCount = {};
int g_TempVertexCount = {};
int g_IntermediateVertexCount = {};

// int[11]
int g_INT_ARRAY_007bc944[11] = {};
int g_BrideIndices[11] = {};

// int[12]
int g_BatCreatureIndices[12] = {};
int g_BatmanIndices[12] = {};

// int[17]
int g_BaronIndices[17] = {};

// int[1]
int g_INT_ARRAY_007bf430[1] = {};

// int[700]
int g_BugsSortedVertexIndices[700] = {};

// uint
uint g_RandomSeedValue = {};

