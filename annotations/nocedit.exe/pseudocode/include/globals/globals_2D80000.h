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

// CBloodParticle[256]
extern CBloodParticle DAT_02d833d4[256];

// CBloodSplat[2000]
extern CBloodSplat DAT_02d873dc[2000];

// CDemonActorType
extern CDemonActorType g_CGargoyleClassInfo;
extern CDemonActorType g_CGasMaskClassInfo;
extern CDemonActorType g_CGhoulClassInfo;
extern CDemonActorType g_CGlassClassInfo;

// CGame
extern CGame g_CGameInstance;

// CGore
extern CGore g_CGoreInstance;

// CPickList
extern CPickList g_CPickList;

// SMRGLHeaderPrimitive
extern SMRGLHeaderPrimitive DAT_02d83368;

// char
extern char g_CurrentSaveFile;

// char*
extern char* g_CurrentDisplayText;

// char[20]
extern char g_InputHistory[20];

// char[600]
extern char g_PrevKeyboardState[600];

// float
extern float g_OverlayDisplayTimer;

// int
extern int g_InputResetFlag;
extern int g_StoredCameraValue;
extern int g_CheatSystemEnabled;
extern int g_CheatFlags;
extern int g_DebugRecording;
extern int g_ProfileStartTime;
extern int INT_02d832a8;
extern int INT_02d832ac;
extern int INT_02d832b0;
extern int INT_02d832b4;
extern int INT_02d832b8;
extern int INT_02d832bc;

// undefined1
extern undefined1 DAT_02d82c81;
extern undefined1 DAT_02d82c82;
extern undefined1 DAT_02d82c83;
extern undefined1 DAT_02d830a8;
extern undefined1 DAT_02d830a9;
extern undefined1 DAT_02d830aa;
extern undefined1 DAT_02d830ab;
extern undefined1 DAT_02d831d6;
extern undefined1 DAT_02d831eb;

// undefined4
extern undefined4 DAT_02d82568;
extern undefined4 DAT_02d82d80;
extern undefined4 DAT_02d82d84;
extern undefined4 DAT_02d82d88;
extern undefined4 DAT_02d82d8c;
extern undefined4 DAT_02d831c4;
extern undefined4 DAT_02d831c8;
extern undefined4 DAT_02d831cc;
extern undefined4 DAT_02d831ec;
extern undefined4 DAT_02d831f0;
extern undefined4 DAT_02d831f4;
extern undefined4 DAT_02d831f8;
extern undefined4 DAT_02d83200;
extern undefined4 DAT_02d83208;
extern undefined4 DAT_02d83214;
extern undefined4 DAT_02d83218;
extern undefined4 DAT_02d83224;
extern undefined4 DAT_02d8322c;
extern undefined4 DAT_02d832fc;
extern undefined4 DAT_02d83300;
extern undefined4 DAT_02d83304;
extern undefined4 DAT_02d83308;
extern undefined4 DAT_02d8330c;
extern undefined4 DAT_02d83310;
extern undefined4 DAT_02d83314;
extern undefined4 DAT_02d83320;
extern undefined4 DAT_02d83324;
extern undefined4 DAT_02d833d0;
extern undefined4 DAT_02d873d4;
extern undefined4 DAT_02d873d8;

