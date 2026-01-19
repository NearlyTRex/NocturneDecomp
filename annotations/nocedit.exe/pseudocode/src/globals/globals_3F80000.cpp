#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F80000
// =============================================================================

SMRGLTextureBasic g_CurrentTexture;
CDemonActorType g_CTommyGunClassInfo;
CDemonActorType g_CTrapClassInfo;
CDemonActorType g_CTrashClassInfo;
CDemonActorType g_CTriggerClassInfo;
CTerrain g_CTerrainInstance;
CDemonActorType g_CTurretClassInfo;
CDemonActorType g_CTVBatClassInfo;
CDemonActorType g_CVampireBossClassInfo;
CVector3f g_ZeroVector;
CDemonActorType g_CVehicleClassInfo;
CDemonActorType g_CCryptVesselClassInfo;
CWater g_CWaterInstance;
int g_VisibleWaterTilesX[4096] = {};
int g_VisibleWaterTilesY[4096] = {};
CVector3f DAT_03f8f638[100] = {};
SCollisionInfo DAT_03f8fae8[100] = {};

