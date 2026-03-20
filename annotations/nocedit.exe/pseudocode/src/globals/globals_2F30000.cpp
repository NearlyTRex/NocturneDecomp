#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F30000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_MoonCloudTexture = {};

// CAlphaBitmap[30]
CAlphaBitmap g_MoonAnimTextures[30] = {};

// CCourse[3]
CCourse g_MoonBatCourses[3] = {};

// CDemonActorType
CDemonActorType g_CMimicClassInfo = {};
CDemonActorType g_CMineCarClassInfo = {};
CDemonActorType g_CMobsterClassInfo = {};
CDemonActorType g_CMolochClassInfo = {};

// CDemonMission
CDemonMission g_CDemonMissionInstance = {};

// CKeyFramedModel
CKeyFramedModel g_MoonBatModel = {};

// CQuaternion4f*
CQuaternion4f* g_LodMeshHighlightVertices = {};

// CVector3f[32]
CVector3f g_MirrorInputVertices[32] = {};
CVector3f g_MirrorOutputVertices[32] = {};

// CVector3f[400]
CVector3f g_SamplePointArray[400] = {};

// CVector3i[2000]
CVector3i g_MorphVertexBuffer[2000] = {};

// SBat[30]
SBat g_MoonBats[30] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_MirrorTempPrimitive = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_TempTextureDescriptor = {};

// char[400]
char g_LodMeshProgressBuffer[400] = {};

// char[8100]
char g_PendingMissionName[8100] = {};

// double[400]
double g_SampleDistances[400] = {};

// float
float g_MoonAnimationTimer = {};

// int
int INT_02f31234 = {};
int INT_02f31238 = {};
int INT_02f3123c = {};
int g_SamplePointCount = {};
int g_LodReplayMode = {};
int g_LodGenerationStamp = {};
int g_LodTempFaceStamp = {};
int g_MirrorInputVertexCount = {};
int g_MirrorOutputVertexCount = {};
int g_MoonCloudScrollX = {};
int g_MoonCloudScrollY = {};

// int[12]
int g_MobsterIndices[12] = {};

// int[20]
int g_MimicIndices[20] = {};

// int[5]
int g_MobsterTauntCounters[5] = {};

// uchar
uchar g_TempFacesInitGuard = {};

