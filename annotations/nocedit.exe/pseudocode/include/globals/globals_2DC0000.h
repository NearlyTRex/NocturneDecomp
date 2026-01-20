#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CKeys.h"
#include "types/classes/CLevelLoader.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DC0000
// =============================================================================

// CAlphaBitmap
extern CAlphaBitmap g_BatteryIconBitmap;
extern CAlphaBitmap g_HealthBar1Bitmap;
extern CAlphaBitmap g_HealthBar2Bitmap;
extern CAlphaBitmap g_TommyClipIconBitmap;
extern CAlphaBitmap g_BulletIconBitmap;
extern CAlphaBitmap g_LithiumIconBitmap;
extern CAlphaBitmap g_MercuryBulletIconBitmap;
extern CAlphaBitmap g_ShotShellIconBitmap;
extern CAlphaBitmap g_SilverBulletIconBitmap;
extern CAlphaBitmap g_HolyBulletIconBitmap;

// CDemonActorType
extern CDemonActorType g_CKeyActorClassInfo;
extern CDemonActorType g_CLadderClassInfo;
extern CDemonActorType g_CLarvaClassInfo;

// CKeyFramedModel
extern CKeyFramedModel g_LoadingMoonModel;

// CKeys
extern CKeys g_CKeysInstance;

// CLevelLoader
extern CLevelLoader g_CLevelLoaderInstance;

// int
extern int g_InventoryScreenHeight;
extern int INT_02dcd794;

