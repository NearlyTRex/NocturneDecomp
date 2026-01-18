#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGame.h"
#include "types/classes/CGore.h"
#include "types/classes/CPickList.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D80000
// =============================================================================

extern CGame g_CGameInstance;
extern CPickList g_CPickList;
extern CDemonActorType g_CGargoyleClassInfo;
extern CDemonActorType g_CGasMaskClassInfo;
extern CDemonActorType g_CGhoulClassInfo;
extern CDemonActorType g_CGlassClassInfo;
extern CGore g_CGoreInstance;
extern SMRGLHeaderPrimitive DAT_02d83368;
extern CBloodParticle DAT_02d833d4[256];
extern CBloodSplat DAT_02d873dc[2000];

