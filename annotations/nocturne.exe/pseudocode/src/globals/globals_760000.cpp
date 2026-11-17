#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x760000
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
CDemonActorType g_CChainClassInfo = {};

// CDemonActorType*[200]
CDemonActorType* g_ActorClassRegistrations[200] = {};

// CDemonFilter[8]
CDemonFilter g_LightActorFilters[8] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance = {};
CKeyFramedModelInstance g_StakeModelInstance = {};

// CVector3f
CVector3f g_BrideOffsetMinusX = {};
CVector3f g_BrideOffsetPlusX = {};

// SMRGLHeaderPrimitive*[2000]
SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};

// SMRGLPrimitiveQuad[1000]
SMRGLPrimitiveQuad g_ClothBackfaceBuffer[1000] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_007658c4 = {};

// SRenderVertex*
SRenderVertex* g_SRenderVertex_PTR_00767274 = {};
SRenderVertex* g_SRenderVertex_PTR_00767278 = {};
SRenderVertex* g_SRenderVertex_PTR_0076727c = {};

// SRenderVertex[12]
SRenderVertex g_ClipperTempBuffer[12] = {};

// SRenderVertex[16]
SRenderVertex g_ClippedVertexBuffer[16] = {};
SRenderVertex g_SecondaryClipVertexBuffer[16] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

// _FILE*
_FILE* g_ActorDataFile = {};

// char[52]
char g_ActorDebugBuffer[52] = {};

// float
float g_FLOAT_0076432c = {};

// float[100]
float g_BoneBurnIntensity[100] = {};

// float[12][12]
float g_BugsGroundHeightGridTemp[12][12] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int g_INT_007642e8 = {};
int g_INT_0076431c = {};
int g_INT_00764320 = {};
int g_INT_0076459c = {};
int g_INT_007645a4 = {};
int g_INT_007645b0 = {};
int g_INT_007645b4 = {};
int g_INT_007645c0 = {};
int g_INT_007645c8 = {};
int g_INT_00764608 = {};
int g_INT_00764610 = {};
int g_INT_0076461c = {};
int g_INT_00764620 = {};
int g_INT_0076462c = {};
int g_INT_00764634 = {};
int g_INT_007647fc = {};
int g_EtherealUVScroll = {};
int g_EtherealBoltFrame = {};
int g_LineBlendingDisabled = {};
int g_ClippedVertexCount = {};
int g_SecondaryClipVertexCount = {};
int g_ClipperTempCount = {};
int g_InputVertexCount = {};
int g_OutputVertexCount = {};
int g_TempVertexCount = {};
int g_IntermediateVertexCount = {};

// int[11]
int g_BoneGuyIndices[11] = {};
int g_BrideIndices[11] = {};

// int[1]
int g_INT_ARRAY_00767270[1] = {};

// int[700]
int g_BugsSortedVertexIndices[700] = {};

// uint
uint g_RandomSeedValue = {};

// undefined2
undefined2 DAT_00765c6c = {};
undefined2 DAT_00765c6e = {};
undefined2 DAT_00765c70 = {};
undefined2 DAT_00765c72 = {};
undefined2 DAT_00765c74 = {};
undefined2 DAT_00765c76 = {};
undefined2 DAT_00765c78 = {};
undefined2 DAT_00765c7a = {};

// undefined4
undefined4 DAT_00767280 = {};

