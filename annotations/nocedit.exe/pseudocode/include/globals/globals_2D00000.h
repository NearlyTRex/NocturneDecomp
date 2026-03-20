#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "types/classes/CEventList.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/funcdefs/RenderScanlineFunc.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D00000
// =============================================================================

// CEventList
extern CEventList g_CEventListInstance;

// CMatrix3x3i
extern CMatrix3x3i g_TransformMatrix;

// DWORD
extern DWORD g_JoyXPos;
extern DWORD g_JoyYPos;
extern DWORD g_JoyRPos;
extern DWORD g_JoyZPos;
extern DWORD g_JoyButtons;

// RenderScanlineFunc*
extern RenderScanlineFunc* g_ScanlineRenderFunc;

// _BIT_INTEGER32
extern _BIT_INTEGER32 g_RedBitPosition;
extern _BIT_INTEGER32 g_RedBitCount;
extern _BIT_INTEGER32 g_GreenBitPosition;
extern _BIT_INTEGER32 g_GreenBitCount;
extern _BIT_INTEGER32 g_BlueBitPosition;
extern _BIT_INTEGER32 g_BlueBitCount;
extern _BIT_INTEGER32 g_RenderStateFlags;

// _MMX_INTEGER
extern _MMX_INTEGER g_SavedMMX0;
extern _MMX_INTEGER g_SavedMMX1;
extern _MMX_INTEGER g_SavedMMX2;
extern _MMX_INTEGER g_SavedMMX3;
extern _MMX_INTEGER g_SavedMMX4;
extern _MMX_INTEGER g_SavedMMX5;
extern _MMX_INTEGER g_SavedMMX6;
extern _MMX_INTEGER g_SavedMMX7;

// byte
extern byte g_LeftMousePressed;
extern byte g_RightMousePressed;
extern byte g_MiddleMousePressed;

// byte*
extern byte* g_CurrentPalette;

// char[1024]
extern char g_FileTransferErrorMessage[1024];

// char[256]
extern char g_EventErrorMessageBuffer[256];

// char[32768]
extern char g_FileTransferBuffer[32768];

// char[512]
extern char g_KeyboardState[512];

// char[768]
extern char g_SourcePaletteData[768];

// float
extern float g_PerspectiveReciprocal;

// int
extern int g_RedScaleFactor;
extern int g_GreenScaleFactor;
extern int g_BlueScaleFactor;
extern int g_ViewportCenterXFixed;
extern int g_ViewportCenterYFixed;
extern int g_ViewportRightFixed;
extern int g_ViewportBottomFixed;
extern int g_ClipLeft;
extern int g_ClipTop;
extern int g_ClipRight;
extern int g_ClipBottom;
extern int g_ViewportWidth;
extern int g_ViewportHeight;
extern int g_ActiveRenderColor;
extern int g_CurrentLightingValue;
extern int g_AdvancedClippingEnabled;
extern int g_CurrentTextureOffsetU;
extern int g_CurrentTextureOffsetV;
extern int g_TextureBits;
extern int g_UseExternalRenderer;
extern int g_SoftwareRenderingForced;
extern int g_JoystickPresent;
extern int g_JoyWantUAxis;
extern int g_JoyWantRAxis;
extern int g_JoystickHasPOV;
extern int g_JoyPOVDirection;
extern int g_MMXSupported;
extern int g_CPUModel;
extern int g_CalibratedCPUSpeed;
extern int g_BlendMode;
extern int g_ProcessorType;
extern int g_RenderStateFlag2;
extern int g_SolidRedComponent;
extern int g_SolidGreenComponent;
extern int g_SolidBlueComponent;
extern int g_RelativeX;
extern int g_RelativeY;
extern int g_RelativeZ;
extern int g_CameraOriginX;
extern int g_CameraOriginY;
extern int g_CameraOriginZ;
extern int g_CameraRotationPitch;
extern int g_CameraRotationYaw;
extern int g_CameraRotationRoll;
extern int g_LightDirectionX;
extern int g_LightDirectionY;
extern int g_LightDirectionZ;
extern int g_EventDryRun;

// uchar[768]
extern uchar g_DefaultPalette[768];

// uint[1600]
extern uint g_ReciprocalLookupTable[1600];

// uint[256]
extern uint g_Hardware32BitPalette[256];

// uint[448]
extern uint g_ColorTable32[448];

// ulong
extern ulong g_SolidColorMode;

// ushort[256]
extern ushort g_ColorTable16[256];
extern ushort g_Hardware16BitPalette[256];

// void*
extern void* g_CurrentTextureData;
extern void* g_CurrentTextureOpacityData;

