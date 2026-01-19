#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F30000
// =============================================================================

SMRGLTextureBasic g_TempTextureDescriptor;
CVector3f g_SamplePointArray[400] = {};
CDemonActorType g_CMimicClassInfo;
CDemonActorType g_CMineCarClassInfo;
CVector3f g_MirrorInputVertices[32] = {};
CVector3f g_MirrorOutputVertices[32] = {};
SMRGLHeaderPrimitive g_MirrorTempPrimitive;
CDemonMission g_CDemonMissionInstance;
CDemonActorType g_CMobsterClassInfo;
CDemonActorType g_CMolochClassInfo;
CAlphaBitmap g_MoonCloudTexture;
CAlphaBitmap g_MoonAnimTextures[30] = {};
CCourse g_MoonBatCourses[3] = {};
SBat g_MoonBats[30] = {};
CKeyFramedModel g_MoonBatModel;

