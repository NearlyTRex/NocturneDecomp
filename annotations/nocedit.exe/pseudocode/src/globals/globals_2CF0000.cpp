#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CF0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CElephantGunClassInfo = {};
CDemonActorType g_CEmitterClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};

// CEditorTools
CEditorTools g_CEditorToolsInstance = {};

// HWND
HWND g_DialogParentWindow = {};

// SWindow[5]
SWindow g_WindowStack[5] = {};

// uint*[1024]
uint* g_ZBufferScanlineArray[1024] = {};

// void*[1024]
void* g_ScreenBufferArray[1024] = {};

