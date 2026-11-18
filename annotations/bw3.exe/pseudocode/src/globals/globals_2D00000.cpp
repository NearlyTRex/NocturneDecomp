#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D00000
// =============================================================================

// CDemonActorType
CDemonActorType g_CWaterActorClassInfo = {};
CDemonActorType g_CDemonActorType_02d09d24 = {};
CDemonActorType g_CWayPointClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};

// CDemonGlobe
CDemonGlobe g_WeaponCoronaGlobe = {};

// CVector3f
CVector3f g_CVector3f_02d0c208 = {};

// CVector3i
CVector3i g_CVector3i_02d06e08 = {};

// CWeather
CWeather g_CWeather_02d0c1a0 = {};

// IDirectDraw*
IDirectDraw* g_DirectDrawObject = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_DirectDrawSurface = {};
IDirectDrawSurface* g_SoftwareRenderSurface = {};

// IUnknown*
IUnknown* g_DirectDrawUnknown = {};

// PALETTEENTRY[256]
PALETTEENTRY g_DDPaletteBuffer[256] = {};

// char[4]
char g_CHAR_ARRAY_02d09d60[4] = {};

// float
float g_WaterAnimationPhase = {};

// int
int g_WaterAnimationBlend = {};
int g_INT_02d059ac = {};
int g_INT_02d059b0 = {};
int g_FlipPending = {};
int g_GraphicsResetFlag = {};
int g_INT_02d0bcfc = {};
int g_INT_02d0bd00 = {};
int g_INT_02d0bd04 = {};
int g_INT_02d0bd08 = {};
int g_INT_02d0bd0c = {};
int g_INT_02d0bd10 = {};
int g_INT_02d0bd14 = {};

// int[4096]
int g_VisibleWaterTilesY[4096] = {};

// void*
void* g_PTR_02d0bcf0 = {};

