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

// CAlphaBitmap
extern CAlphaBitmap g_MoonCloudTexture;

// CAlphaBitmap[30]
extern CAlphaBitmap g_MoonAnimTextures[30];

// CCourse[3]
extern CCourse g_MoonBatCourses[3];

// CDemonActorType
extern CDemonActorType g_CMimicClassInfo;
extern CDemonActorType g_CMineCarClassInfo;
extern CDemonActorType g_CMobsterClassInfo;
extern CDemonActorType g_CMolochClassInfo;

// CDemonMission
extern CDemonMission g_CDemonMissionInstance;

// CKeyFramedModel
extern CKeyFramedModel g_MoonBatModel;

// CVector3f[32]
extern CVector3f g_MirrorInputVertices[32];
extern CVector3f g_MirrorOutputVertices[32];

// CVector3f[400]
extern CVector3f g_SamplePointArray[400];

// SBat[30]
extern SBat g_MoonBats[30];

// SMRGLHeaderPrimitive
extern SMRGLHeaderPrimitive g_MirrorTempPrimitive;

// SMRGLTextureBasic
extern SMRGLTextureBasic g_TempTextureDescriptor;

// char[400]
extern char g_LodMeshProgressBuffer[400];

// double[400]
extern double g_SampleDistances[400];

