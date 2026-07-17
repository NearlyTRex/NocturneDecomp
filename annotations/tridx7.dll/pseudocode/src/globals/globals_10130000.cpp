#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10130000
// =============================================================================

// DWORD[256]
DWORD g_RenderStateValueCache[256] = {};

// HWND
HWND g_WindowHandle = nullptr;

// IDirect3DTexture2*[4][8]
IDirect3DTexture2* g_StagingTextureInterfaces[4][8] = {};

// IDirectDrawSurface*[4][8]
IDirectDrawSurface* g_StagingTextures[4][8] = {};

// SRenderVertex*[32]
SRenderVertex* g_PolygonVertexPtrs[32] = {};

// SScreenVertex[16000]
SScreenVertex g_VertexBuffer[16000] = {};

// char[16][512]
char g_AdapterDriverName[16][512] = {};

// char[2048]
char g_ErrorMessageBuffer[2048] = "";

// int
int g_HWRedShift = 0;
int g_BlueShift = 0;

// uchar*
uchar* g_TexturePalette = nullptr;

// uint
uint g_UseHoldBuffer = 0;
uint g_HWAlphaMask = 0;

// uint[16]
uint g_AdapterDeviceId[16] = {};
uint g_AdapterVendorId[16] = {};

// uint[256]
uint g_RenderStateKeyCache[256] = {};

// void**
void** g_ScanlinePtrBase = nullptr;

