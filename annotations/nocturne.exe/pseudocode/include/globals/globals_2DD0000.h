#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/unknwn.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWater.h"
#include "types/classes/CWeather.h"
#include "types/structs/SCollisionInfo.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DD0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CTommyGunActorType_02dd0fd0;
extern CDemonActorType g_CTrapActorType_02dd100c;
extern CDemonActorType g_CTrashActorType_02dd1048;
extern CDemonActorType g_CTriggerActorType_02dd1084;
extern CDemonActorType g_CTurretActorType_02dd10d0;
extern CDemonActorType g_CTVBatActorType_02dd110c;
extern CDemonActorType g_CVampireBossActorType_02dd1148;
extern CDemonActorType g_CVehicleActorType_02dd1190;
extern CDemonActorType g_CCryptVesselActorType_02dd11cc;
extern CDemonActorType g_CWaterActorActorType_02ddd598;
extern CDemonActorType g_CWayPointActorType_02ddf514;
extern CDemonActorType g_CWeaponActorType_02ddf970;

// CVector3f[100]
extern CVector3f g_CVector3f_ARRAY_02dd9268[100];

// CVector3f[200]
extern CVector3f g_CVector3f_ARRAY_02ddfa28[200];

// CWater
extern CWater g_CWater_02dd1210;

// CWeather
extern CWeather g_CWeather_02ddf9f0;

// IDirectDraw*
extern IDirectDraw* g_DirectDrawObject;

// IDirectDrawSurface*
extern IDirectDrawSurface* g_DirectDrawSurface;
extern IDirectDrawSurface* g_SoftwareRenderSurface;

// IUnknown*
extern IUnknown* g_DirectDrawUnknown;

// SCollisionInfo[100]
extern SCollisionInfo g_SCollisionInfo_ARRAY_02dd9718[100];

// void*
extern void* g_SoftwareFrameBuffer;

