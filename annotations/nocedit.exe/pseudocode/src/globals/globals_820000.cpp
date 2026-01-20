#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x820000
// =============================================================================

// CDemonActor*
CDemonActor* g_CurrentActorBeingProcessed = {};

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
CKeyFramedModelInstance DAT_00823a98 = {};

// FILE*
FILE* g_ActorDataFile = {};

// SEdge[512]
SEdge g_TracedEdgeBuffer[512] = {};

// SMRGLHeaderPrimitive*[2000]
SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};

// SRenderVertex*[16]
SRenderVertex* g_ClipperCullingPointers[16] = {};

// SRenderVertex[12]
SRenderVertex g_ClipperTempBuffer[12] = {};

// SRenderVertex[16]
SRenderVertex g_ClippedVertexBuffer[16] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

// char[50]
char g_ActorDebugBuffer[50] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int INT_00823a90 = {};
int INT_00823a94 = {};
int g_LineBlendingDisabled = {};
int g_ClippedVertexCount = {};
int g_ClipperTempCount = {};
int g_InputVertexCount = {};
int g_OutputVertexCount = {};
int g_TempVertexCount = {};
int g_IntermediateVertexCount = {};

// uint
uint g_RandomSeedValue = {};

// undefined1
undefined1 DAT_00822d0c = {};
undefined1 DAT_00823a80 = {};
undefined1 DAT_00823a81 = {};
undefined1 DAT_00823a82 = {};
undefined1 DAT_00823a83 = {};

// undefined4
undefined4 DAT_00821ff4 = {};
undefined4 DAT_00822498 = {};
undefined4 DAT_008224cc = {};
undefined4 DAT_008224d0 = {};
undefined4 DAT_008224dc = {};
undefined4 DAT_0082274c = {};
undefined4 DAT_00822754 = {};
undefined4 DAT_008227b8 = {};
undefined4 DAT_008227c0 = {};
undefined4 DAT_008227dc = {};
undefined4 DAT_008227e4 = {};
undefined4 DAT_00822944 = {};
undefined4 DAT_00822948 = {};
undefined4 DAT_0082294c = {};
undefined4 DAT_00822958 = {};
undefined4 DAT_0082295c = {};
undefined4 DAT_00822968 = {};
undefined4 DAT_0082296c = {};
undefined4 DAT_008229ac = {};
undefined4 DAT_00822cdc = {};
undefined4 DAT_00822ce0 = {};
undefined4 DAT_00822ce4 = {};
undefined4 DAT_00822ce8 = {};
undefined4 DAT_00822cec = {};
undefined4 DAT_00822cf0 = {};
undefined4 DAT_00822cf4 = {};
undefined4 DAT_00822d00 = {};
undefined4 DAT_00822d08 = {};
undefined4 DAT_00822f48 = {};
undefined4 DAT_00822f4c = {};
undefined4 DAT_00822f50 = {};
undefined4 DAT_00823c50 = {};
undefined4 DAT_00823c54 = {};
undefined4 DAT_00823c58 = {};
undefined4 DAT_008254a8 = {};
undefined4 DAT_008254b8 = {};
undefined4 DAT_008254bc = {};
undefined4 DAT_008254dc = {};
undefined4 DAT_008254e8 = {};
undefined4 DAT_00825514 = {};
undefined4 DAT_00827504 = {};
undefined4 DAT_00827518 = {};
undefined4 DAT_0082751c = {};
undefined4 DAT_00827520 = {};
undefined4 DAT_00827524 = {};
undefined4 DAT_00827528 = {};
undefined4 DAT_0082752c = {};
undefined4 DAT_0082754c = {};

// undefined8
undefined8 DAT_008254ac = {};
undefined8 DAT_008254e0 = {};

