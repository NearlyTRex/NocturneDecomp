#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x820000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDemonActorClassInfo;
CDemonActorType g_CAmmoClassInfo;
CDemonActorType g_CAmmoBoxClassInfo;
CDemonActorType g_CAnvilClassInfo;
CDemonActorType g_CArmourClassInfo;
CDemonActorType g_CBackgroundActorClassInfo;
CDemonActorType g_CBaronClassInfo;
CDemonActorType g_CBaronWeaponClassInfo;
CDemonActorType g_CBarrierClassInfo;
CDemonActorType g_CBatClassInfo;
CDemonActorType g_CBatCreatureClassInfo;
CDemonActorType g_CBatmanClassInfo;
CDemonActorType g_CBatteryClassInfo;
CDemonActorType g_CBeastClassInfo;
CDemonActorType g_CBiggsClassInfo;
CDemonActorType g_CBodyPartClassInfo;
CDemonActorType g_CBoneGuyClassInfo;
CDemonActorType g_CBoxActorClassInfo;
CDemonActorType g_CLightActorClassInfo;
CDemonActorType g_CBrideClassInfo;
CDemonActorType g_CBugsClassInfo;
CDemonActorType g_CCharacterClassInfo;
CDemonActorType g_CChainClassInfo;

// CDemonActorType*[200]
CDemonActorType* g_ActorClassRegistrations[200] = {};

// CDemonFilter[8]
CDemonFilter CDemonFilter_ARRAY_008229ec[8] = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance;
CKeyFramedModelInstance DAT_00823a98;

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

