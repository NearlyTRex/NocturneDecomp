#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGround.h"
#include "types/classes/CHero.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1CA0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CGraveActorType_01cadf44;
extern CDemonActorType g_CGunActorType_01cadfdc;
extern CDemonActorType g_CHaystackActorType_01cae05c;
extern CDemonActorType g_CHealthItemActorType_01cae098;
extern CDemonActorType g_CHeroActorType_01cae0ec;
extern CDemonActorType g_CHeroPlaceholderActorType_01cae128;
extern CDemonActorType g_CHiramActorType_01cae164;
extern CDemonActorType g_CHostageActorType_01cae1a4;
extern CDemonActorType g_CHotDemonActorType_01cae210;
extern CDemonActorType g_CHighPriestOfGardathActorType_01cae24c;
extern CDemonActorType g_CIcePickActorType_01cae2d0;
extern CDemonActorType g_CImpActorType_01cae33c;

// CGround
extern CGround g_CGround_01cadf80;

// CHero*[4]
extern CHero* g_HeroActors[4];

// int
extern int g_LocalHeroIndex;

