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

// char[10][256]
extern char g_InventoryWrappedTextLines[10][256];
extern char g_InventoryWrappedTextLines2[10][256];
extern char g_InventoryWrappedTextLines3[10][256];

// char[256]
extern char g_ErrorMessageBuffer_02db8a70[256];
extern char g_ErrorMessageBuffer_02db8b70[256];

// int
extern int INT_02db8700;
extern int INT_02db8704;
extern int INT_02db8708;
extern int INT_02db870c;
extern int INT_02db8710;
extern int INT_02db8714;
extern int INT_02db8718;
extern int INT_02db871c;
extern int INT_02db8720;
extern int INT_02db8724;
extern int INT_02db8728;
extern int INT_02db872c;
extern int INT_02db8730;
extern int INT_02db8734;
extern int INT_02db8738;
extern int INT_02db873c;
extern int INT_02db8740;
extern int g_HeroCount;
extern int g_LocalHeroIndex;
extern int INT_02db8888;
extern int INT_02db88c8;
extern int INT_02db88cc;
extern int INT_02db88d0;
extern int INT_02db88d4;
extern int INT_02db88d8;
extern int INT_02db88dc;
extern int INT_02db88e0;
extern int INT_02db88e4;
extern int INT_02db88e8;
extern int INT_02db88ec;
extern int INT_02db88f0;
extern int INT_02db88f4;
extern int INT_02db8970;
extern int INT_02db8974;
extern int INT_02db8978;
extern int INT_02db897c;
extern int INT_02db8980;
extern int INT_02db8984;
extern int INT_02db8988;
extern int INT_02db898c;
extern int INT_02db8990;
extern int INT_02db8994;
extern int INT_02db8998;
extern int INT_02db899c;
extern int INT_02db89a0;
extern int INT_02db89a4;
extern int INT_02db89a8;
extern int INT_02db89ac;
extern int INT_02db89b0;
extern int INT_02db89b4;
extern int INT_02db89f4;
extern int INT_02db89f8;
extern int INT_02db89fc;
extern int INT_02db8a00;
extern int INT_02db8a04;
extern int INT_02db8a08;
extern int INT_02db8a0c;
extern int INT_02db8a10;
extern int INT_02db8a14;
extern int INT_02db8a18;
extern int INT_02db8a1c;
extern int INT_02db8a20;
extern int g_SkipIntroVideo;
extern int g_ItemDefinitionCount;

