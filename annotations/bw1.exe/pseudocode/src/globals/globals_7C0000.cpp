#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x7C0000
// =============================================================================

// CAlphaBitmap[4]
CAlphaBitmap CAlphaBitmap_ARRAY_007c3984[4] = {};

// CAlphaBitmap[5]
CAlphaBitmap CAlphaBitmap_ARRAY_007c39d4[5] = {};

// CAudioRecPuzzle
CAudioRecPuzzle g_CAudioRecPuzzleInstance = {};

// CChemPuzzle
CChemPuzzle g_CChemPuzzleInstance = {};

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
CDemonActorType g_CBirdClassInfo = {};
CDemonActorType g_CBodyPartClassInfo = {};
CDemonActorType g_CBoneGuyClassInfo = {};
CDemonActorType g_CBoxActorClassInfo = {};
CDemonActorType g_CLightActorClassInfo = {};
CDemonActorType g_CBrideClassInfo = {};
CDemonActorType g_CBugsClassInfo = {};
CDemonActorType g_CCarvedClassInfo = {};
CDemonActorType g_CCharacterClassInfo = {};
CDemonActorType g_CChainClassInfo = {};

// CDemonActorType*[200]
CDemonActorType* g_ActorClassRegistrations[200] = {};

// CDemonCamera*
CDemonCamera* g_CurrentSceneCamera = {};

// CDemonFilter[8]
CDemonFilter g_LightActorFilters[8] = {};

// CDemonGlobe
CDemonGlobe g_CDemonGlobe_007c6180 = {};

// CKeyFramedModelInstance
CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance = {};
CKeyFramedModelInstance g_StakeModelInstance = {};

// CPuzzle*
CPuzzle* g_CPuzzle_PTR_007c3978 = {};

// CVector3f
CVector3f g_BrideOffsetMinusX = {};
CVector3f g_BrideOffsetPlusX = {};

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
SRenderVertex g_SRenderVertex_ARRAY_007c7558[16] = {};
SRenderVertex g_SRenderVertex_ARRAY_007c7bdc[16] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

// _FILE*
_FILE* g_ActorDataFile = {};

// byte
byte g_BYTE_007c61c0 = {};

// char[52]
char g_ActorDebugBuffer[52] = {};

// float
float g_FLOAT_007c34dc = {};
float g_FLOAT_007c6340 = {};

// float[100]
float g_BoneBurnIntensity[100] = {};

// float[12][12]
float g_BugsGroundHeightGridTemp[12][12] = {};

// int
int g_RenderFaceCount = {};
int g_ActorReadingMode = {};
int g_IncludeCommentsWhenWriting = {};
int g_NumActorClassTypes = {};
int g_INT_007c3908 = {};
int g_INT_007c397c = {};
int g_INT_007c3980 = {};
int g_INT_007c5058 = {};
int g_EtherealUVScroll = {};
int g_EtherealBoltFrame = {};
int g_INT_007c7550 = {};
int g_INT_007c7554 = {};
int g_INT_007c7bd8 = {};
int g_ClipperTempCount = {};
int g_InputVertexCount = {};
int g_OutputVertexCount = {};
int g_TempVertexCount = {};
int g_IntermediateVertexCount = {};

// int[11]
int g_INT_ARRAY_007c4ff0[11] = {};
int g_INT_ARRAY_007c5388[11] = {};

// int[12]
int g_BatCreatureIndices[12] = {};
int g_BatmanIndices[12] = {};

// int[17]
int g_BaronIndices[17] = {};

// int[1]
int g_INT_ARRAY_007c394c[1] = {};
int g_INT_ARRAY_007c7b54[1] = {};

// int[700]
int g_BugsSortedVertexIndices[700] = {};

// uint
uint g_RandomSeedValue = {};

// undefined4
undefined4 DAT_007c3950 = {};
undefined4 DAT_007c3954 = {};

