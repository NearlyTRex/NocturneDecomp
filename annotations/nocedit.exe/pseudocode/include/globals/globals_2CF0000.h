#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEditorTools.h"
#include "types/structs/SWindow.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2CF0000
// =============================================================================

extern CEditorTools g_CEditorToolsInstance;
extern SWindow g_WindowStack[5];
extern HWND g_DialogParentWindow;
extern CDemonActorType g_CElephantGunClassInfo;
extern CDemonActorType g_CEmitterClassInfo;
extern CDemonActorType g_CEnemyClassInfo;
extern void* g_ScreenBufferArray[1024];
extern uint* g_ZBufferScanlineArray[1024];

