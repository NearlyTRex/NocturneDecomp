#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F80000
// =============================================================================

// CDemonActorType
CDemonActorType g_CTommyGunClassInfo = {};
CDemonActorType g_CTrapClassInfo = {};
CDemonActorType g_CTrashClassInfo = {};
CDemonActorType g_CTriggerClassInfo = {};
CDemonActorType g_CTurretClassInfo = {};
CDemonActorType g_CTVBatClassInfo = {};
CDemonActorType g_CVampireBossClassInfo = {};
CDemonActorType g_CVehicleClassInfo = {};
CDemonActorType g_CCryptVesselClassInfo = {};

// CTerrain
CTerrain g_CTerrainInstance = {};

// CVector3f
CVector3f g_ZeroVector = {};

// CVector3f[100]
CVector3f DAT_03f8f638[100] = {};

// CWater
CWater g_CWaterInstance = {};

// SCollisionInfo[100]
SCollisionInfo DAT_03f8fae8[100] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_CurrentTexture = {};

// int[4096]
int g_VisibleWaterTilesX[4096] = {};
int g_VisibleWaterTilesY[4096] = {};

// uchar[4]
uchar g_BroadcastIP[4] = {};
uchar g_AnyAddressIP[4] = {};

