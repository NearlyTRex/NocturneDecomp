#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DB0000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_InvBackgroundBitmap = {};
CAlphaBitmap g_InvBackground2Bitmap = {};
CAlphaBitmap g_WeapBackgroundBitmap = {};
CAlphaBitmap g_WeapBackground2Bitmap = {};

// CDemonActorType
CDemonActorType g_CGraveClassInfo = {};
CDemonActorType g_CGunClassInfo = {};
CDemonActorType g_CHaystackClassInfo = {};
CDemonActorType g_CHealthItemClassInfo = {};
CDemonActorType g_CHeroClassInfo = {};
CDemonActorType g_CHeroPlaceholderClassInfo = {};
CDemonActorType g_CHiramClassInfo = {};
CDemonActorType g_CHostageClassInfo = {};
CDemonActorType g_CHotDemonClassInfo = {};
CDemonActorType g_CHighPriestOfGardathClassInfo = {};
CDemonActorType g_CIcePickClassInfo = {};
CDemonActorType g_CImpClassInfo = {};

// CGround
CGround g_CGroundInstance = {};

// CHero*[4]
CHero* g_HeroActors[4] = {};

// CIni
CIni g_CIniInstance = {};

// SInventoryItemInfo[100]
SInventoryItemInfo g_ItemDefinitionArray[100] = {};

// char[256]
char g_ErrorMessageBuffer_02db8a70[256] = {};
char g_ErrorMessageBuffer_02db8b70[256] = {};
char DAT_02db8c70[256] = {};
char DAT_02db9670[256] = {};
char DAT_02dba070[256] = {};

// int
int g_HeroCount = {};
int g_LocalHeroIndex = {};
int g_SkipIntroVideo = {};
int g_ItemDefinitionCount = {};

// undefined4
undefined4 DAT_02db8700 = {};
undefined4 DAT_02db8734 = {};
undefined4 DAT_02db8738 = {};
undefined4 DAT_02db8888 = {};
undefined4 DAT_02db88c8 = {};
undefined4 DAT_02db88d0 = {};
undefined4 DAT_02db88ec = {};
undefined4 DAT_02db88f4 = {};
undefined4 DAT_02db8970 = {};
undefined4 DAT_02db89a4 = {};
undefined4 DAT_02db89a8 = {};
undefined4 DAT_02db89b0 = {};
undefined4 DAT_02db89f4 = {};
undefined4 DAT_02db89f8 = {};
undefined4 DAT_02db89fc = {};
undefined4 DAT_02db8a08 = {};
undefined4 DAT_02db8a0c = {};
undefined4 DAT_02db8a18 = {};
undefined4 DAT_02db8a20 = {};

