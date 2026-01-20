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

// SMRGLHeaderPrimitive
SMRGLHeaderPrimitive g_MirrorTempPrimitive = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_TempTextureDescriptor = {};

// char[400]
char g_LodMeshProgressBuffer[400] = {};

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

// uchar
uchar g_TempFacesInitGuard = {};

// undefined1
undefined1 DAT_02f35f10 = {};
undefined1 DAT_02f35f11 = {};
undefined1 DAT_02f35f12 = {};
undefined1 DAT_02f35f13 = {};

// undefined4
undefined4 DAT_02f313e8 = {};
undefined4 DAT_02f33378 = {};
undefined4 DAT_02f33394 = {};
undefined4 DAT_02f33398 = {};
undefined4 DAT_02f37ec8 = {};
undefined4 DAT_02f37ecc = {};
undefined4 DAT_02f37ed0 = {};
undefined4 DAT_02f37eec = {};
undefined4 DAT_02f37ef0 = {};
undefined4 DAT_02f37ef4 = {};
undefined4 DAT_02f3dbb4 = {};
undefined4 DAT_02f3dbb8 = {};
undefined4 DAT_02f3dbbc = {};

