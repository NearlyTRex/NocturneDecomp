#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C40000
// =============================================================================

// SRGBColorPalette*
SRGBColorPalette* g_CurrentPalette = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_MouseButtonFlags = {};
_BIT_INTEGER32 g_RedBitPosition = {};
_BIT_INTEGER32 g_RedDitherShift = {};
_BIT_INTEGER32 g_GreenBitPosition = {};
_BIT_INTEGER32 g_GreenDitherShift = {};
_BIT_INTEGER32 g_BlueBitPosition = {};
_BIT_INTEGER32 g_BlueDitherShift = {};

// float[2000]
float g_EnemyVictimCandidateDistances[2000] = {};

// int
int g_GlobalDeltaTimeInt = {};
int g_AnimationTimerValue = {};
int g_MouseX = {};
int g_MouseY = {};
int g_RedScaleFactor = {};
int g_GreenScaleFactor = {};
int g_BlueScaleFactor = {};
int g_INT_01c4eff8 = {};
int g_INT_01c4effc = {};
int g_INT_01c4f000 = {};
int g_INT_01c4f004 = {};
int g_INT_01c4f008 = {};
int g_INT_01c4f00c = {};
int g_ClipRight = {};
int g_INT_01c4f014 = {};
int g_ViewportWidth = {};
int g_ViewportHeight = {};
int g_INT_01c4f020 = {};
int g_CurrentLightingValue = {};
int g_AdvancedClippingEnabled = {};

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uchar[768]
uchar g_UCHAR_ARRAY_01c4e9f8[768] = {};
uchar g_DefaultPalette[768] = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArray[GAME_SCREEN_MAX_HEIGHT] = {};

// uint[256]
uint g_Hardware32BitPalette[256] = {};

// uint[448]
uint g_ColorTable32[448] = {};

// uint[GAME_RECIPROCAL_TABLE_SIZE]
uint g_ReciprocalLookupTable[GAME_RECIPROCAL_TABLE_SIZE] = {};

// ushort[256]
ushort g_ColorTable16[256] = {};
ushort g_Hardware16BitPalette[256] = {};

// void*
void* g_ScanlineRenderFunc = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

