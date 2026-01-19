#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/structs/SEdge.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x820000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CDemonActorClassInfo;
extern CDemonActorType g_CAmmoClassInfo;
extern CDemonActorType g_CAmmoBoxClassInfo;
extern CDemonActorType g_CAnvilClassInfo;
extern CDemonActorType g_CArmourClassInfo;
extern CDemonActorType g_CBackgroundActorClassInfo;
extern CDemonActorType g_CBaronClassInfo;
extern CDemonActorType g_CBaronWeaponClassInfo;
extern CDemonActorType g_CBarrierClassInfo;
extern CDemonActorType g_CBatClassInfo;
extern CDemonActorType g_CBatCreatureClassInfo;
extern CDemonActorType g_CBatmanClassInfo;
extern CDemonActorType g_CBatteryClassInfo;
extern CDemonActorType g_CBeastClassInfo;
extern CDemonActorType g_CBiggsClassInfo;
extern CDemonActorType g_CBodyPartClassInfo;
extern CDemonActorType g_CBoneGuyClassInfo;
extern CDemonActorType g_CBoxActorClassInfo;
extern CDemonActorType g_CLightActorClassInfo;
extern CDemonActorType g_CBrideClassInfo;
extern CDemonActorType g_CBugsClassInfo;
extern CDemonActorType g_CCharacterClassInfo;
extern CDemonActorType g_CChainClassInfo;

// CDemonActorType*[200]
extern CDemonActorType* g_ActorClassRegistrations[200];

// CDemonFilter[8]
extern CDemonFilter CDemonFilter_ARRAY_008229ec[8];

// CKeyFramedModelInstance
extern CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance;
extern CKeyFramedModelInstance DAT_00823a98;

// SEdge[512]
extern SEdge g_TracedEdgeBuffer[512];

// SMRGLHeaderPrimitive*[2000]
extern SMRGLHeaderPrimitive* g_RenderFaceArray[2000];

// SRenderVertex*[16]
extern SRenderVertex* g_ClipperCullingPointers[16];

// SRenderVertex[12]
extern SRenderVertex g_ClipperTempBuffer[12];

// SRenderVertex[16]
extern SRenderVertex g_ClippedVertexBuffer[16];
extern SRenderVertex g_ClipperOutputBuffer[16];
extern SRenderVertex g_ClipperInputBuffer[16];
extern SRenderVertex g_ClipperWorkingBuffer[16];
extern SRenderVertex g_ClipperIntermediateBuffer[16];

// char[50]
extern char g_ActorDebugBuffer[50];

