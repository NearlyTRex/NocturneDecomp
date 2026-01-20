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

// float
extern float g_MoonAnimationTimer;

// int
extern int INT_02f31234;
extern int INT_02f31238;
extern int INT_02f3123c;
extern int g_SamplePointCount;
extern int g_LodReplayMode;
extern int g_LodGenerationStamp;
extern int g_LodTempFaceStamp;
extern int g_MirrorInputVertexCount;
extern int g_MirrorOutputVertexCount;
extern int g_MoonCloudScrollX;
extern int g_MoonCloudScrollY;

// uchar
extern uchar g_TempFacesInitGuard;

// undefined1
extern undefined1 DAT_02f35f10;
extern undefined1 DAT_02f35f11;
extern undefined1 DAT_02f35f12;
extern undefined1 DAT_02f35f13;

// undefined4
extern undefined4 DAT_02f313e8;
extern undefined4 DAT_02f33378;
extern undefined4 DAT_02f33394;
extern undefined4 DAT_02f33398;
extern undefined4 DAT_02f37ec8;
extern undefined4 DAT_02f37ecc;
extern undefined4 DAT_02f37ed0;
extern undefined4 DAT_02f37eec;
extern undefined4 DAT_02f37ef0;
extern undefined4 DAT_02f37ef4;
extern undefined4 DAT_02f3dbb4;
extern undefined4 DAT_02f3dbb8;
extern undefined4 DAT_02f3dbbc;

