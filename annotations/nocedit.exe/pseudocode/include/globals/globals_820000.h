#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/structs/SEdge.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x820000
// =============================================================================

// CDemonActor*
extern CDemonActor* g_CurrentActorBeingProcessed;

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

// CDemonCamera*
extern CDemonCamera* g_CurrentSceneCamera;

// CDemonFilter[8]
extern CDemonFilter CDemonFilter_ARRAY_008229ec[8];

// CKeyFramedModelInstance
extern CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance;
extern CKeyFramedModelInstance DAT_00823a98;

// FILE*
extern FILE* g_ActorDataFile;

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

// float
extern float FLOAT_008224dc;
extern float FLOAT_00822c88;
extern float FLOAT_00822c8c;
extern float FLOAT_00822c90;
extern float FLOAT_00822c94;
extern float FLOAT_00822c98;
extern float FLOAT_00822c9c;

// int
extern int g_RenderFaceCount;
extern int g_ActorReadingMode;
extern int g_IncludeCommentsWhenWriting;
extern int g_NumActorClassTypes;
extern int INT_00822498;
extern int INT_0082249c;
extern int INT_008224a0;
extern int INT_008224a4;
extern int INT_008224a8;
extern int INT_008224ac;
extern int INT_008224b0;
extern int INT_008224b4;
extern int INT_008224b8;
extern int INT_008224bc;
extern int INT_008224c0;
extern int INT_008224c4;
extern int INT_008224c8;
extern int INT_008224cc;
extern int INT_008224d0;
extern int INT_008224d4;
extern int INT_008224d8;
extern int INT_00822750;
extern int INT_00822758;
extern int INT_0082275c;
extern int INT_00822760;
extern int INT_00822764;
extern int INT_00822768;
extern int INT_0082276c;
extern int INT_00822770;
extern int INT_00822774;
extern int INT_00822778;
extern int INT_008227b8;
extern int INT_008227bc;
extern int INT_008227c0;
extern int INT_008227c4;
extern int INT_008227c8;
extern int INT_008227cc;
extern int INT_008227d0;
extern int INT_008227d4;
extern int INT_008227d8;
extern int INT_008227dc;
extern int INT_008227e0;
extern int INT_00822950;
extern int INT_00822954;
extern int INT_00822958;
extern int INT_0082295c;
extern int INT_00822960;
extern int INT_00822964;
extern int INT_00822cf8;
extern int INT_00822cfc;
extern int INT_00822d04;
extern int INT_00823a90;
extern int INT_00823a94;
extern int g_LineBlendingDisabled;
extern int g_ClippedVertexCount;
extern int g_ClipperTempCount;
extern int g_InputVertexCount;
extern int g_OutputVertexCount;
extern int g_TempVertexCount;
extern int g_IntermediateVertexCount;

// uint
extern uint g_RandomSeedValue;

// undefined1
extern undefined1 DAT_00822d0c;
extern undefined1 DAT_00823a80;
extern undefined1 DAT_00823a81;
extern undefined1 DAT_00823a82;
extern undefined1 DAT_00823a83;

// undefined4
extern undefined4 DAT_00821ff4;
extern undefined4 DAT_0082274c;
extern undefined4 DAT_00822754;
extern undefined4 DAT_008227e4;
extern undefined4 DAT_00822944;
extern undefined4 DAT_00822948;
extern undefined4 DAT_0082294c;
extern undefined4 DAT_00822968;
extern undefined4 DAT_0082296c;
extern undefined4 DAT_008229ac;
extern undefined4 DAT_00822cdc;
extern undefined4 DAT_00822ce0;
extern undefined4 DAT_00822ce4;
extern undefined4 DAT_00822ce8;
extern undefined4 DAT_00822cec;
extern undefined4 DAT_00822cf0;
extern undefined4 DAT_00822cf4;
extern undefined4 DAT_00822d00;
extern undefined4 DAT_00822d08;
extern undefined4 DAT_00822f48;
extern undefined4 DAT_00822f4c;
extern undefined4 DAT_00822f50;
extern undefined4 DAT_00823c50;
extern undefined4 DAT_00823c54;
extern undefined4 DAT_00823c58;
extern undefined4 DAT_008254a8;
extern undefined4 DAT_008254b8;
extern undefined4 DAT_008254bc;
extern undefined4 DAT_008254dc;
extern undefined4 DAT_008254e8;
extern undefined4 DAT_00825514;
extern undefined4 DAT_00827504;
extern undefined4 DAT_00827518;
extern undefined4 DAT_0082751c;
extern undefined4 DAT_00827520;
extern undefined4 DAT_00827524;
extern undefined4 DAT_00827528;
extern undefined4 DAT_0082752c;
extern undefined4 DAT_0082754c;

// undefined8
extern undefined8 DAT_008254ac;
extern undefined8 DAT_008254e0;

