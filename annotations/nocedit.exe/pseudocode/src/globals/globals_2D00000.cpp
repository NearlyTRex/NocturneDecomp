#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D00000
// =============================================================================

// BOOL
BOOL g_MMXSupported = {};

// CEventList
CEventList g_CEventListInstance = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrix = {};

// DWORD
DWORD g_JoyXPos = {};
DWORD g_JoyYPos = {};
DWORD g_JoyRPos = {};
DWORD g_JoyZPos = {};
DWORD g_JoyButtons = {};

// RenderScanlineFunc*
RenderScanlineFunc* g_ScanlineRenderFunc = {};

// byte
byte g_LeftMousePressed = {};
byte g_RightMousePressed = {};
byte g_MiddleMousePressed = {};

// byte*
byte* g_CurrentPalette = {};

// char[1024]
char g_FileTransferErrorMessage[1024] = {};

// char[256]
char g_KeyboardState[256] = {};
char g_EventErrorMessageBuffer[256] = {};

// char[32768]
char g_FileTransferBuffer[32768] = {};

// char[768]
char g_SourcePaletteData[768] = {};

// float
float g_PerspectiveReciprocal = {};

// int
int g_RedBitPosition = {};
int g_RedScaleFactor = {};
int g_RedBitCount = {};
int g_GreenBitPosition = {};
int g_GreenScaleFactor = {};
int g_GreenBitCount = {};
int g_BlueBitPosition = {};
int g_BlueScaleFactor = {};
int g_BlueBitCount = {};
int g_ViewportCenterXFixed = {};
int g_ViewportCenterYFixed = {};
int g_ViewportRightFixed = {};
int g_ViewportBottomFixed = {};
int g_ClipLeft = {};
int g_ClipTop = {};
int g_ClipRight = {};
int g_ClipBottom = {};
int g_ViewportWidth = {};
int g_ViewportHeight = {};
int g_ActiveRenderColor = {};
int g_CurrentLightingValue = {};
int g_AdvancedClippingEnabled = {};
int g_CurrentTextureOffsetU = {};
int g_CurrentTextureOffsetV = {};
int g_TextureBits = {};
int g_UseExternalRenderer = {};
int g_SoftwareRenderingForced = {};
int g_JoystickPresent = {};
int g_JoyWantUAxis = {};
int g_JoyWantRAxis = {};
int g_JoystickHasPOV = {};
int g_JoyPOVDirection = {};
int g_CPUModel = {};
int g_CalibratedCPUSpeed = {};
int g_BlendMode = {};
int g_ProcessorType = {};
int g_RenderStateFlags = {};
int g_RenderStateFlag2 = {};
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
int g_EventDryRun = {};

// uchar[768]
uchar g_DefaultPalette[768] = {};

// uint[1600]
uint g_ReciprocalLookupTable[1600] = {};

// uint[256]
uint g_ColorTable32[256] = {};
uint g_Hardware32BitPalette[256] = {};

// ulong
ulong g_SolidColorMode = {};

// ulonglong
ulonglong g_SavedMMX0 = {};
ulonglong g_SavedMMX1 = {};
ulonglong g_SavedMMX2 = {};
ulonglong g_SavedMMX3 = {};
ulonglong g_SavedMMX4 = {};
ulonglong g_SavedMMX5 = {};
ulonglong g_SavedMMX6 = {};
ulonglong g_SavedMMX7 = {};

// ushort[256]
ushort g_ColorTable16[256] = {};
ushort g_Hardware16BitPalette[256] = {};

// void*
void* g_CurrentTextureData = {};
void* g_CurrentTextureOpacityData = {};

