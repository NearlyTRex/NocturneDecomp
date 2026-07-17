#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/WinDef.h"
#include "system/d3d.h"
#include "system/ddraw.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SScreenVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10130000
// =============================================================================

// DWORD[256]
extern DWORD g_RenderStateValueCache[256];

// HWND
extern HWND g_WindowHandle;

// IDirect3DTexture2*[4][8]
extern IDirect3DTexture2* g_StagingTextureInterfaces[4][8];

// IDirectDrawSurface*[4][8]
extern IDirectDrawSurface* g_StagingTextures[4][8];

// SRenderVertex*[32]
extern SRenderVertex* g_PolygonVertexPtrs[32];

// SScreenVertex[16000]
extern SScreenVertex g_VertexBuffer[16000];

// char[16][512]
extern char g_AdapterDriverName[16][512];

// char[2048]
extern char g_ErrorMessageBuffer[2048];

// int
extern int g_HWRedShift;
extern int g_BlueShift;

// uchar*
extern uchar* g_TexturePalette;

// uint
extern uint g_UseHoldBuffer;
extern uint g_HWAlphaMask;

// uint[16]
extern uint g_AdapterDeviceId[16];
extern uint g_AdapterVendorId[16];

// uint[256]
extern uint g_RenderStateKeyCache[256];

// void**
extern void** g_ScanlinePtrBase;

