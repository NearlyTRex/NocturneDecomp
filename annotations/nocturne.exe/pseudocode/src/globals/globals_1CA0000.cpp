#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CA0000
// =============================================================================

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

// char[10][256]
char g_InventoryWrappedTextLines[10][256] = {};
char g_InventoryWrappedTextLines2[10][256] = {};
char g_InventoryWrappedTextLines3[10][256] = {};

// char[256]
char g_CHAR_ARRAY_01cae380[256] = {};
char g_CHAR_ARRAY_01cae480[256] = {};

// int
int g_HeroCount = {};
int g_LocalHeroIndex = {};
int g_HostageGunUpMotionIndex = {};
int g_FirstTimeFlag = {};

// int[12]
int g_HotDemonIndices[12] = {};
int g_ImpIndices[12] = {};

// int[17]
int g_HaystackIndices[17] = {};

// int[18]
int g_IcePickIndices[18] = {};

