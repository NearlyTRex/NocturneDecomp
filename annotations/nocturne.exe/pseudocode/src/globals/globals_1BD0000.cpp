#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BD0000
// =============================================================================

// _BIT_INTEGER32
_BIT_INTEGER32 g_MouseButtonFlags = {};

// int
int g_GlobalDeltaTimeInt = {};
int g_AnimationTimerValue = {};
int g_MouseX = {};
int g_MouseY = {};

// uchar[18][256]
uchar g_FogTable[18][256] = {};

// uchar[256][256]
uchar g_BlendTableAvg[256][256] = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArray[GAME_SCREEN_MAX_HEIGHT] = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

