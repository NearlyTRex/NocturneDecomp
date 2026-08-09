#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CForceFeedback.h"
#include "types/classes/CGame.h"
#include "types/classes/CGore.h"
#include "types/classes/CPickList.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1C70000
// =============================================================================

// CBloodParticle[256]
extern CBloodParticle g_CBloodParticle_ARRAY_01c78cec[256];

// CBloodSplat[2000]
extern CBloodSplat g_CBloodSplat_ARRAY_01c7ccf4[2000];

// CDemonActorType
extern CDemonActorType g_CFlameActorType_01c70618;
extern CDemonActorType g_CFlameCanActorType_01c70654;
extern CDemonActorType g_CFlameThrowerActorType_01c70690;
extern CDemonActorType g_CFlashlightActorType_01c706cc;
extern CDemonActorType g_CFliesActorType_01c70718;
extern CDemonActorType g_CFrankenstienMachineActorType_01c71304;
extern CDemonActorType g_CGabriellaActorType_01c713e8;
extern CDemonActorType g_CGargoyleActorType_01c78b48;
extern CDemonActorType g_CGasMaskActorType_01c78b84;
extern CDemonActorType g_CGhoulActorType_01c78bd8;
extern CDemonActorType g_CGlassActorType_01c78c40;

// CDemonLight
extern CDemonLight g_CDemonLight_01c74640;

// CForceFeedback
extern CForceFeedback g_CForceFeedback_01c70f74;

// CGame
extern CGame g_CGame_01c775ec;

// CGore
extern CGore g_CGore_01c78c7c;

// CPickList
extern CPickList g_CPickList_01c78424;

// CVector3f
extern CVector3f CVector3f_01c71364;
extern CVector3f CVector3f_01c71370;
extern CVector3f CVector3f_01c7137c;
extern CVector3f CVector3f_01c71388;
extern CVector3f CVector3f_01c78bc0;
extern CVector3f CVector3f_01c78bcc;

// float
extern float g_FastSqrtMagicSeedOne;

// int
extern int g_FastSqrtMagic;
extern int g_FastInvSqrtMagic;

