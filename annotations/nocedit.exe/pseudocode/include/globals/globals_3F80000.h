#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CTextureCache.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWater.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/unions/UVector3.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F80000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CTommyGunClassInfo;
extern CDemonActorType g_CTrapClassInfo;
extern CDemonActorType g_CTrashClassInfo;
extern CDemonActorType g_CTriggerClassInfo;
extern CDemonActorType g_CTurretClassInfo;
extern CDemonActorType g_CTVBatClassInfo;
extern CDemonActorType g_CVampireBossClassInfo;
extern CDemonActorType g_CVehicleClassInfo;
extern CDemonActorType g_CCryptVesselClassInfo;

// CTerrain
extern CTerrain g_CTerrainInstance;

// CTextureCache*
extern CTextureCache* g_TextureCacheInstance;

// CVector3f[100]
extern CVector3f CVector3f_ARRAY_03f8f638[100];

// CWater
extern CWater g_CWaterInstance;

// SCollisionInfo[100]
extern SCollisionInfo SCollisionInfo_ARRAY_03f8fae8[100];

// SMRGLTextureBasic
extern SMRGLTextureBasic g_CurrentTexture;

// UVector3
extern UVector3 g_ZeroVector;

// float
extern float FLOAT_03f875f0;
extern float FLOAT_03f875f4;
extern float FLOAT_03f875f8;
extern float g_WaterAnimationPhase;

// int
extern int g_TexturePreviewFullscreen;
extern int g_TexturePreviewX;
extern int g_TexturePreviewY;
extern int g_TexturePreviewWidth;
extern int g_TexturePreviewHeight;
extern int g_CurrentTextureIndex;
extern int g_WaterAnimationTimer;
extern int g_WaterCurrentFrame;
extern int g_VisibleWaterTileCount;
extern int INT_03f8f62c;

// int[4096]
extern int g_VisibleWaterTilesX[4096];
extern int g_VisibleWaterTilesY[4096];

// uchar[36]
extern uchar g_WaterTileSamples[36];

// uchar[4]
extern uchar g_BroadcastIP[4];
extern uchar g_AnyAddressIP[4];

