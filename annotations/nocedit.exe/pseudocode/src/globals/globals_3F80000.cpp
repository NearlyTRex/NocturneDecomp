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

// CTextureCache*
CTextureCache* g_TextureCacheInstance = {};

// CVector3f[100]
CVector3f DAT_03f8f638[100] = {};

// CWater
CWater g_CWaterInstance = {};

// SCollisionInfo[100]
SCollisionInfo DAT_03f8fae8[100] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_CurrentTexture = {};

// UVector3
UVector3 g_ZeroVector = {};

// float
float FLOAT_03f875f0 = {};
float FLOAT_03f875f4 = {};
float FLOAT_03f875f8 = {};
float g_WaterAnimationPhase = {};

// int
int g_TexturePreviewFullscreen = {};
int g_TexturePreviewX = {};
int g_TexturePreviewY = {};
int g_TexturePreviewWidth = {};
int g_TexturePreviewHeight = {};
int g_CurrentTextureIndex = {};
int g_WaterAnimationTimer = {};
int g_WaterCurrentFrame = {};
int g_VisibleWaterTileCount = {};
int INT_03f8f62c = {};

// int[4096]
int g_VisibleWaterTilesX[4096] = {};
int g_VisibleWaterTilesY[4096] = {};

// uchar[4]
uchar g_BroadcastIP[4] = {};
uchar g_AnyAddressIP[4] = {};

// undefined1
undefined1 DAT_03f8f608 = {};
undefined1 DAT_03f8f609 = {};

