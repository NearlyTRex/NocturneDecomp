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

// CAlphaBitmap
extern CAlphaBitmap g_InvBackgroundBitmap;
extern CAlphaBitmap g_InvBackground2Bitmap;
extern CAlphaBitmap g_WeapBackgroundBitmap;
extern CAlphaBitmap g_WeapBackground2Bitmap;

// CDemonActorType
extern CDemonActorType g_CGraveClassInfo;
extern CDemonActorType g_CGunClassInfo;
extern CDemonActorType g_CHaystackClassInfo;
extern CDemonActorType g_CHealthItemClassInfo;
extern CDemonActorType g_CHeroClassInfo;
extern CDemonActorType g_CHeroPlaceholderClassInfo;
extern CDemonActorType g_CHiramClassInfo;
extern CDemonActorType g_CHostageClassInfo;
extern CDemonActorType g_CHotDemonClassInfo;
extern CDemonActorType g_CHighPriestOfGardathClassInfo;
extern CDemonActorType g_CIcePickClassInfo;
extern CDemonActorType g_CImpClassInfo;

// CGround
extern CGround g_CGroundInstance;

// CHero*[4]
extern CHero* g_HeroActors[4];

// CIni
extern CIni g_CIniInstance;

// SInventoryItemInfo[100]
extern SInventoryItemInfo g_ItemDefinitionArray[100];

// char[256]
extern char g_ErrorMessageBuffer_02db8a70[256];
extern char g_ErrorMessageBuffer_02db8b70[256];
extern char DAT_02db8c70[256];
extern char DAT_02db9670[256];
extern char DAT_02dba070[256];

// int
extern int g_HeroCount;
extern int g_LocalHeroIndex;
extern int g_SkipIntroVideo;
extern int g_ItemDefinitionCount;

// undefined4
extern undefined4 DAT_02db8700;
extern undefined4 DAT_02db8734;
extern undefined4 DAT_02db8738;
extern undefined4 DAT_02db8888;
extern undefined4 DAT_02db88c8;
extern undefined4 DAT_02db88d0;
extern undefined4 DAT_02db88ec;
extern undefined4 DAT_02db88f4;
extern undefined4 DAT_02db8970;
extern undefined4 DAT_02db89a4;
extern undefined4 DAT_02db89a8;
extern undefined4 DAT_02db89b0;
extern undefined4 DAT_02db89f4;
extern undefined4 DAT_02db89f8;
extern undefined4 DAT_02db89fc;
extern undefined4 DAT_02db8a08;
extern undefined4 DAT_02db8a0c;
extern undefined4 DAT_02db8a18;
extern undefined4 DAT_02db8a20;

