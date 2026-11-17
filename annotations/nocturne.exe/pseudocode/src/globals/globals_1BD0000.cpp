#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1BD0000
// =============================================================================

// _BIT_INTEGER32
_BIT_INTEGER32 g_BIT_INTEGER32_01bd1d94 = {};

// int
int g_INT_01bd1d80 = {};
int g_INT_01bd1d84 = {};
int g_INT_01bd1d8c = {};
int g_INT_01bd1d90 = {};

// uchar[18][256]
uchar g_FogTable[18][256] = {};

// uchar[256][256]
uchar g_BlendTableAvg[256][256] = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArray[GAME_SCREEN_MAX_HEIGHT] = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

