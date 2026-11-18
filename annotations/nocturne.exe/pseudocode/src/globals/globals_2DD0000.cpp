#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DD0000
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
CDemonActorType g_CWaterActorClassInfo = {};
CDemonActorType g_CWayPointClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};

// CDemonGlobe
CDemonGlobe g_CDemonGlobe_02ddf9ac = {};

// CTerrain
CTerrain g_CTerrainInstance = {};

// CTextureCache*
CTextureCache* g_TextureCacheInstance = {};

// CVector3f[100]
CVector3f g_WaterActorCollisionPositions[100] = {};

// CVector3f[200]
CVector3f g_WeatherParticlePositions[200] = {};

// CVector3i
CVector3i g_CVector3i_02dda6b8 = {};

// CWater
CWater g_CWaterInstance = {};

// CWeather
CWeather g_CWeatherInstance = {};

// IDirectDraw*
IDirectDraw* g_DirectDrawObject = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_DirectDrawSurface = {};
IDirectDrawSurface* g_SoftwareRenderSurface = {};

// IUnknown*
IUnknown* g_DirectDrawUnknown = {};

// PALETTEENTRY[256]
PALETTEENTRY g_DDPaletteBuffer[256] = {};

// SCollisionInfo[100]
SCollisionInfo g_WaterActorCollisionInfos[100] = {};

// SMRGLTextureModel
SMRGLTextureModel g_CurrentTexture = {};

// UVector3
UVector3 g_ZeroVector = {};

// char[4]
char g_CHAR_ARRAY_02ddd5d4[4] = {};

// float
float g_FLOAT_02dd1220 = {};
float g_FLOAT_02dd1224 = {};
float g_FLOAT_02dd1228 = {};
float g_WaterAnimationPhase = {};

// int
int g_CurrentTextureIndex = {};
int g_WaterAnimationTimer = {};
int g_WaterCurrentFrame = {};
int g_VisibleWaterTileCount = {};
int g_WaterAnimationBlend = {};
int g_FlipPending = {};
int g_GraphicsResetFlag = {};
int g_Display24BitFallback = {};

// int[4096]
int g_VisibleWaterTilesX[4096] = {};
int g_VisibleWaterTilesY[4096] = {};

// uchar[4]
uchar g_BroadcastIP[4] = {};
uchar g_AnyAddressIP[4] = {};

// void*
void* g_SoftwareFrameBuffer = {};

