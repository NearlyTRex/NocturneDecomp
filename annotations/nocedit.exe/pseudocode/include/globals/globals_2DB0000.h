#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGround.h"
#include "types/classes/CHero.h"
#include "types/classes/CIni.h"
#include "types/structs/SInventoryItemInfo.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2DB0000
// =============================================================================

extern CDemonActorType g_CGraveClassInfo;
extern CGround g_CGroundInstance;
extern CDemonActorType g_CGunClassInfo;
extern CDemonActorType g_CHaystackClassInfo;
extern CDemonActorType g_CHealthItemClassInfo;
extern CHero* g_HeroActors[4];
extern CDemonActorType g_CHeroClassInfo;
extern CDemonActorType g_CHeroPlaceholderClassInfo;
extern CDemonActorType g_CHiramClassInfo;
extern CDemonActorType g_CHostageClassInfo;
extern CDemonActorType g_CHotDemonClassInfo;
extern CDemonActorType g_CHighPriestOfGardathClassInfo;
extern CDemonActorType g_CIcePickClassInfo;
extern CDemonActorType g_CImpClassInfo;
extern CIni g_CIniInstance;
extern CAlphaBitmap g_InvBackgroundBitmap;
extern CAlphaBitmap g_InvBackground2Bitmap;
extern CAlphaBitmap g_WeapBackgroundBitmap;
extern CAlphaBitmap g_WeapBackground2Bitmap;
extern SInventoryItemInfo g_ItemDefinitionArray[100];

