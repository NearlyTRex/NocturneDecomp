#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWater.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SMRGLTextureBasic.h"

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

// CVector3f
extern CVector3f g_ZeroVector;

// CVector3f[100]
extern CVector3f DAT_03f8f638[100];

// CWater
extern CWater g_CWaterInstance;

// SCollisionInfo[100]
extern SCollisionInfo DAT_03f8fae8[100];

// SMRGLTextureBasic
extern SMRGLTextureBasic g_CurrentTexture;

// int[4096]
extern int g_VisibleWaterTilesX[4096];
extern int g_VisibleWaterTilesY[4096];

// uchar[4]
extern uchar g_BroadcastIP[4];
extern uchar g_AnyAddressIP[4];

