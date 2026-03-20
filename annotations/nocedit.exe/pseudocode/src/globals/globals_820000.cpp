#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x820000
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

// CDemonCamera*
CDemonCamera* g_CurrentSceneCamera = {};

// CDemonFilter[8]
CDemonFilter CDemonFilter_ARRAY_008229ec[8] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance = {};
CKeyFramedModelInstance CKeyFramedModelInstance_00823a98 = {};

// CVector3f
CVector3f CVector3f_00822c88 = {};
CVector3f CVector3f_00822c94 = {};

// SEdge[512]
SEdge g_TracedEdgeBuffer[512] = {};

// SMRGLHeaderPrimitive*[2000]
SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};

// SMRGLPrimitiveQuad[1000]
SMRGLPrimitiveQuad g_ClothBackfaceBuffer[1000] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_CollisionTexture = {};

// SRenderVertex*[16]
SRenderVertex* g_ClipperCullingPointers[16] = {};

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
float FLOAT_008224dc = {};

// float[100]
float g_BoneBurnIntensity[100] = {};

// float[12][12]
float g_BugsGroundHeightGridTemp[12][12] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int INT_008229ac = {};
int INT_00823a90 = {};
int INT_00823a94 = {};
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

// int[12]
int g_BatCreatureIndices[12] = {};
int g_BatmanIndices[12] = {};

// int[17]
int g_BaronIndices[17] = {};

// int[700]
int g_BugsSortedVertexIndices[700] = {};

// uint
uint g_RandomSeedValue = {};

