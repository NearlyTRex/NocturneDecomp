#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F30000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_MoonCloudTexture;

// CAlphaBitmap[30]
CAlphaBitmap g_MoonAnimTextures[30] = {};

// CCourse[3]
CCourse g_MoonBatCourses[3] = {};

// CDemonActorType
CDemonActorType g_CMimicClassInfo;
CDemonActorType g_CMineCarClassInfo;
CDemonActorType g_CMobsterClassInfo;
CDemonActorType g_CMolochClassInfo;

// CDemonMission
CDemonMission g_CDemonMissionInstance;

// CKeyFramedModel
CKeyFramedModel g_MoonBatModel;

// CVector3f[32]
CVector3f g_MirrorInputVertices[32] = {};
CVector3f g_MirrorOutputVertices[32] = {};

// CVector3f[400]
CVector3f g_SamplePointArray[400] = {};

// SBat[30]
SBat g_MoonBats[30] = {};

// SMRGLHeaderPrimitive
SMRGLHeaderPrimitive g_MirrorTempPrimitive;

// SMRGLTextureBasic
SMRGLTextureBasic g_TempTextureDescriptor;

