#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBat.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLTextureBasic.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F30000
// =============================================================================

extern SMRGLTextureBasic g_TempTextureDescriptor;
extern CVector3f g_SamplePointArray[400];
extern CDemonActorType g_CMimicClassInfo;
extern CDemonActorType g_CMineCarClassInfo;
extern CVector3f g_MirrorInputVertices[32];
extern CVector3f g_MirrorOutputVertices[32];
extern SMRGLHeaderPrimitive g_MirrorTempPrimitive;
extern CDemonMission g_CDemonMissionInstance;
extern CDemonActorType g_CMobsterClassInfo;
extern CDemonActorType g_CMolochClassInfo;
extern CAlphaBitmap g_MoonCloudTexture;
extern CAlphaBitmap g_MoonAnimTextures[30];
extern CCourse g_MoonBatCourses[3];
extern SBat g_MoonBats[30];
extern CKeyFramedModel g_MoonBatModel;

