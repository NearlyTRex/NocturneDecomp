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
CKeyFramedModelInstance CKeyFramedModelInstance_00823a98 = {};

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
SRenderVertex g_SecondaryClipVertexBuffer[16] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

// _FILE*
_FILE* g_ActorDataFile = {};

// char[50]
char g_ActorDebugBuffer[50] = {};

// float
float FLOAT_008224dc = {};
float FLOAT_00822c88 = {};
float FLOAT_00822c8c = {};
float FLOAT_00822c90 = {};
float FLOAT_00822c94 = {};
float FLOAT_00822c98 = {};
float FLOAT_00822c9c = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int INT_00822498 = {};
int INT_0082249c = {};
int INT_008224a0 = {};
int INT_008224a4 = {};
int INT_008224a8 = {};
int INT_008224ac = {};
int INT_008224b0 = {};
int INT_008224b4 = {};
int INT_008224b8 = {};
int INT_008224bc = {};
int INT_008224c0 = {};
int INT_008224c4 = {};
int INT_008224c8 = {};
int INT_008224cc = {};
int INT_008224d0 = {};
int INT_008224d4 = {};
int INT_008224d8 = {};
int INT_0082274c = {};
int INT_00822750 = {};
int INT_00822758 = {};
int INT_0082275c = {};
int INT_00822760 = {};
int INT_00822764 = {};
int INT_00822768 = {};
int INT_0082276c = {};
int INT_00822770 = {};
int INT_00822774 = {};
int INT_00822778 = {};
int INT_008227b8 = {};
int INT_008227bc = {};
int INT_008227c0 = {};
int INT_008227c4 = {};
int INT_008227c8 = {};
int INT_008227cc = {};
int INT_008227d0 = {};
int INT_008227d4 = {};
int INT_008227d8 = {};
int INT_008227dc = {};
int INT_008227e0 = {};
int INT_008227e4 = {};
int INT_00822950 = {};
int INT_00822954 = {};
int INT_00822958 = {};
int INT_0082295c = {};
int INT_00822960 = {};
int INT_00822964 = {};
int INT_00822cdc = {};
int INT_00822ce0 = {};
int INT_00822ce4 = {};
int INT_00822ce8 = {};
int INT_00822cec = {};
int INT_00822cf0 = {};
int INT_00822cf4 = {};
int INT_00822cf8 = {};
int INT_00822cfc = {};
int INT_00822d00 = {};
int INT_00822d04 = {};
int INT_00822d08 = {};
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

// uint
uint g_RandomSeedValue = {};

// undefined1
undefined1 DAT_00822d0c = {};
undefined1 DAT_00823a80 = {};
undefined1 DAT_00823a81 = {};
undefined1 DAT_00823a82 = {};
undefined1 DAT_00823a83 = {};

// undefined4
undefined4 DAT_00822754 = {};
undefined4 DAT_00822944 = {};
undefined4 DAT_00822948 = {};
undefined4 DAT_0082294c = {};
undefined4 DAT_00822968 = {};
undefined4 DAT_0082296c = {};
undefined4 DAT_008229ac = {};
undefined4 DAT_00822f48 = {};
undefined4 DAT_00822f4c = {};
undefined4 DAT_00822f50 = {};
undefined4 DAT_00823c54 = {};
undefined4 DAT_00823c58 = {};
undefined4 DAT_00827504 = {};
undefined4 DAT_00827518 = {};
undefined4 DAT_0082751c = {};
undefined4 DAT_00827520 = {};
undefined4 DAT_00827524 = {};
undefined4 DAT_00827528 = {};
undefined4 DAT_0082752c = {};
undefined4 DAT_0082754c = {};

