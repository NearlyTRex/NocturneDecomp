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
char CHAR_ARRAY_02db8c70[256] = {};
char DAT_02db9670[256] = {};
char CHAR_ARRAY_02dba070[256] = {};

// int
int INT_02db8700 = {};
int INT_02db8704 = {};
int INT_02db8708 = {};
int INT_02db870c = {};
int INT_02db8710 = {};
int INT_02db8714 = {};
int INT_02db8718 = {};
int INT_02db871c = {};
int INT_02db8720 = {};
int INT_02db8724 = {};
int INT_02db8728 = {};
int INT_02db872c = {};
int INT_02db8730 = {};
int INT_02db8734 = {};
int INT_02db8738 = {};
int INT_02db873c = {};
int INT_02db8740 = {};
int g_HeroCount = {};
int g_LocalHeroIndex = {};
int INT_02db88c8 = {};
int INT_02db88cc = {};
int INT_02db88d0 = {};
int INT_02db88d4 = {};
int INT_02db88d8 = {};
int INT_02db88dc = {};
int INT_02db88e0 = {};
int INT_02db88e4 = {};
int INT_02db88e8 = {};
int INT_02db88ec = {};
int INT_02db88f0 = {};
int INT_02db88f4 = {};
int INT_02db8970 = {};
int INT_02db8974 = {};
int INT_02db8978 = {};
int INT_02db897c = {};
int INT_02db8980 = {};
int INT_02db8984 = {};
int INT_02db8988 = {};
int INT_02db898c = {};
int INT_02db8990 = {};
int INT_02db8994 = {};
int INT_02db8998 = {};
int INT_02db899c = {};
int INT_02db89a0 = {};
int INT_02db89a4 = {};
int INT_02db89a8 = {};
int INT_02db89ac = {};
int INT_02db89b0 = {};
int INT_02db89b4 = {};
int INT_02db89f4 = {};
int INT_02db89f8 = {};
int INT_02db89fc = {};
int INT_02db8a00 = {};
int INT_02db8a04 = {};
int INT_02db8a08 = {};
int INT_02db8a0c = {};
int INT_02db8a10 = {};
int INT_02db8a14 = {};
int INT_02db8a18 = {};
int INT_02db8a1c = {};
int INT_02db8a20 = {};
int g_SkipIntroVideo = {};
int g_ItemDefinitionCount = {};

// undefined4
undefined4 DAT_02db8888 = {};

