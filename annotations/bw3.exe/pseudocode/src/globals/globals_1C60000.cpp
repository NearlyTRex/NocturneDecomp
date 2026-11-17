#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C60000
// =============================================================================

// CDemonActorType
CDemonActorType g_CExorcismClassInfo = {};

// CEventList
CEventList g_CEventList_01c6e360 = {};

// DWORD
DWORD g_JoyRPos = {};
DWORD g_JoyButtons = {};

// SRGBColorPalette*
SRGBColorPalette* g_CurrentPalette = {};

// _BIT_INTEGER32
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af74 = {};
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af7c = {};
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af80 = {};
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af88 = {};
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af8c = {};
_BIT_INTEGER32 g_BIT_INTEGER32_01c6af94 = {};
_BIT_INTEGER32 g_RenderStateFlags = {};

// char[4952]
char g_KeyboardState[4952] = {};

// int
int g_INT_01c6af78 = {};
int g_INT_01c6af84 = {};
int g_INT_01c6af90 = {};
int g_INT_01c6b598 = {};
int g_INT_01c6b59c = {};
int g_INT_01c6b5a0 = {};
int g_INT_01c6b5a4 = {};
int g_INT_01c6b5a8 = {};
int g_INT_01c6b5ac = {};
int g_INT_01c6b5b0 = {};
int g_INT_01c6b5b4 = {};
int g_ViewportWidth = {};
int g_ViewportHeight = {};
int g_INT_01c6b5c0 = {};
int g_INT_01c6b5c4 = {};
int g_AdvancedClippingEnabled = {};
int g_INT_01c6cee0 = {};
int g_INT_01c6cee4 = {};
int g_INT_01c6cee8 = {};
int g_INT_01c6ceec = {};
int g_PerspectiveReciprocal = {};
int g_JoyXPos = {};
int g_JoyYPos = {};
int g_JoyZPos = {};
int g_JoystickPresent = {};
int g_JoyWantUAxis = {};
int g_JoyWantRAxis = {};
int g_JoystickHasPOV = {};
int g_JoyPOVDirection = {};
int g_MMXSupported = {};
int g_CPUModel = {};
int g_CalibratedCPUSpeed = {};
int g_INT_01c6e2ac = {};
int g_INT_01c6e2b0 = {};
int g_VertexPreprocessMode = {};
int g_SolidRedComponent = {};
int g_SolidGreenComponent = {};
int g_SolidBlueComponent = {};
int g_RelativeX = {};
int g_RelativeY = {};
int g_RelativeZ = {};
int g_CameraOriginX = {};
int g_CameraOriginY = {};
int g_CameraOriginZ = {};
int g_CameraRotationPitch = {};
int g_CameraRotationYaw = {};
int g_CameraRotationRoll = {};
int g_LightDirectionX = {};
int g_LightDirectionY = {};
int g_LightDirectionZ = {};
int g_INT_01c6e2fc = {};
int g_INT_01c6e300 = {};
int g_INT_01c6e304 = {};
int g_INT_01c6e308 = {};
int g_INT_01c6e30c = {};
int g_INT_01c6e310 = {};
int g_INT_01c6e314 = {};
int g_INT_01c6e318 = {};
int g_INT_01c6e31c = {};

// uchar*
uchar* g_CurrentTextureData = {};
uchar* g_CurrentTextureOpacityData = {};

// uchar[32768]
uchar g_ColorCubeLookup[32768] = {};

// uchar[768]
uchar g_UCHAR_ARRAY_01c6af98[768] = {};
uchar g_DefaultPalette[768] = {};

// uint
uint g_UINT_01c6e35c = {};

// uint*[GAME_SCREEN_MAX_HEIGHT]
uint* g_ZBufferScanlineArray[GAME_SCREEN_MAX_HEIGHT] = {};

// uint[256]
uint g_Hardware32BitPalette[256] = {};

// uint[448]
uint g_ColorTable32[448] = {};

// uint[GAME_RECIPROCAL_TABLE_SIZE]
uint g_ReciprocalLookupTable[GAME_RECIPROCAL_TABLE_SIZE] = {};

// ulong
ulong g_SolidColorMode = {};

// ushort[256]
ushort g_ColorTable16[256] = {};
ushort g_Hardware16BitPalette[256] = {};

// void*
void* g_ScanlineRenderFunc = {};

