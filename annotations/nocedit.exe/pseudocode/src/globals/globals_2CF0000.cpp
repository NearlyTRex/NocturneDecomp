#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CF0000
// =============================================================================

CEditorTools g_CEditorToolsInstance;
SWindow g_WindowStack[5] = {};
HWND g_DialogParentWindow;
CDemonActorType g_CElephantGunClassInfo;
CDemonActorType g_CEmitterClassInfo;
CDemonActorType g_CEnemyClassInfo;
void* g_ScreenBufferArray[1024] = {};
uint* g_ZBufferScanlineArray[1024] = {};

