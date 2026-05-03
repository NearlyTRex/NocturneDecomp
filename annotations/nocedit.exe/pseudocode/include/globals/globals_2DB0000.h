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
extern int g_HeroCount;
extern int g_LocalHeroIndex;
extern int INT_02db8888;
extern int g_FirstTimeFlag;
extern int g_ItemDefinitionCount;

// int[12]
extern int g_HotDemonIndices[12];
extern int g_ImpIndices[12];

// int[17]
extern int g_HaystackIndices[17];

// int[18]
extern int g_IcePickIndices[18];

