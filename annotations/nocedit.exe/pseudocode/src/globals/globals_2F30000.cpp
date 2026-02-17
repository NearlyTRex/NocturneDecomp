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

// CVector3f[32]
CVector3f g_MirrorInputVertices[32] = {};
CVector3f g_MirrorOutputVertices[32] = {};

// CVector3f[400]
CVector3f g_SamplePointArray[400] = {};

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
int INT_02f33378 = {};
int INT_02f3337c = {};
int INT_02f33380 = {};
int INT_02f33384 = {};
int INT_02f33388 = {};
int INT_02f3338c = {};
int INT_02f33390 = {};
int INT_02f33394 = {};
int INT_02f33398 = {};
int INT_02f3339c = {};
int INT_02f333a0 = {};
int INT_02f333a4 = {};
int INT_02f333a8 = {};
int INT_02f333b8 = {};
int INT_02f333bc = {};
int INT_02f333c0 = {};
int INT_02f333c4 = {};
int g_MirrorInputVertexCount = {};
int g_MirrorOutputVertexCount = {};
int INT_02f37ec8 = {};
int INT_02f37ecc = {};
int INT_02f37ed0 = {};
int INT_02f37ed4 = {};
int INT_02f37ed8 = {};
int INT_02f37edc = {};
int INT_02f37ee0 = {};
int INT_02f37ee4 = {};
int INT_02f37ee8 = {};
int INT_02f37eec = {};
int INT_02f37ef0 = {};
int INT_02f37ef4 = {};
int g_MoonCloudScrollX = {};
int g_MoonCloudScrollY = {};

// int[5]
int g_MobsterTauntCounters[5] = {};

// uchar
uchar g_TempFacesInitGuard = {};

// undefined4
undefined4 DAT_02f3dbb4 = {};
undefined4 DAT_02f3dbb8 = {};
undefined4 DAT_02f3dbbc = {};

