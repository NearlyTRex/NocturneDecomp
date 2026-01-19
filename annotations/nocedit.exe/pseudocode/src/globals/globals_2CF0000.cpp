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

// char[1024]
char g_YesNoDialogBuffer[1024] = {};
char g_DialogMessageBuffer_02cf0930[1024] = {};
char g_TempStringBuffer[1024] = {};

// char[200]
char g_TextWrapBuffer[200] = {};

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uint*[1024]
uint* g_ZBufferScanlineArray[1024] = {};

// void*[1024]
void* g_ScreenBufferArray[1024] = {};

