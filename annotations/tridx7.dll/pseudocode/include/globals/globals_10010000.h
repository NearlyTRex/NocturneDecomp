#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/d3d.h"
#include "system/ddraw.h"
#include "system/pe.h"
#include "system/winbase.h"
#include "system/winnt.h"
#include "types/classes/CDLLTextureCache.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10010000
// =============================================================================

// CDLLTextureCache
extern CDLLTextureCache CDLLTextureCache_10018660;

// CDLLTextureCache*
extern CDLLTextureCache* g_TextureCache32;
extern CDLLTextureCache* g_TextureCache64;
extern CDLLTextureCache* g_TextureCache128;
extern CDLLTextureCache* g_TextureCache256;

// GUID
extern GUID g_IID_IDirectDraw4;
extern GUID g_Direct3DDeviceGUID;
extern GUID g_IID_IDirect3DTexture2;

// IDirect3D3*
extern IDirect3D3* g_Direct3D3;

// IDirect3DDevice3*
extern IDirect3DDevice3* g_Device;

// IDirect3DTexture2*
extern IDirect3DTexture2* g_CurrentBoundTexture;

// IDirect3DViewport3*
extern IDirect3DViewport3* g_Viewport;

// IDirectDraw*
extern IDirectDraw* g_DirectDraw;

// IDirectDraw4*
extern IDirectDraw4* g_DirectDraw4;

// IDirectDrawSurface*
extern IDirectDrawSurface* g_BackBufferSurface;
extern IDirectDrawSurface* g_PrimarySurface;
extern IDirectDrawSurface* g_ZBufferSurface;
extern IDirectDrawSurface* g_HoldBufferSurface;

// IDirectDrawSurface*[8]
extern IDirectDrawSurface* g_MasterZBufferSurfaces[8];

// IMAGE_DEBUG_DIRECTORY
extern IMAGE_DEBUG_DIRECTORY DAT_1001201C;
extern IMAGE_DEBUG_DIRECTORY DAT_10012038;

// LPCRITICAL_SECTION
extern LPCRITICAL_SECTION LPCRITICAL_SECTION_10016c7c;
extern LPCRITICAL_SECTION LPCRITICAL_SECTION_10016c9c;
extern LPCRITICAL_SECTION LPCRITICAL_SECTION_10016cac;
extern LPCRITICAL_SECTION LPCRITICAL_SECTION_10016cbc;

// int
extern int g_CurrentTextureIndex;
extern int g_PremultiplyColorAndAlpha;
extern int g_AllowAutoMipMapping;
extern int g_FlyIniPresent;
extern int g_ZBufferBitDepth;
extern int g_ScreenWidth;
extern int g_ScreenHeight;
extern int g_ScreenBitDepth;
extern int g_StagingSetIndex;
extern int g_DirectTextureFlag;
extern int g_BackBufferLocked;
extern int g_FrameLocked;
extern int g_TextureFormatSelected;
extern int g_InScene;
extern int g_SelectedCardIndex;
extern int g_TextureCount;
extern int g_PrevSystemInitialized;
extern int g_PrevBlendMode;
extern int g_PrevRenderingQuality;
extern int g_PendingVertexCount;
extern int g_PendingIndexCount;

// string
extern string DAT_10012397;
extern string DAT_10012410;
extern string DAT_10012424;
extern string DAT_10012434;
extern string DAT_10012444;
extern string DAT_10012454;
extern string DAT_1001248C;
extern string DAT_100124C4;
extern string DAT_100124EC;
extern string DAT_10012524;
extern string DAT_10012550;
extern string DAT_10012574;
extern string DAT_100125A4;
extern string DAT_100125D0;
extern string DAT_100127F8;
extern string DAT_1001296C;

// uint
extern uint g_LocalVideoMem;
extern uint g_NonLocalVideoMem;
extern uint g_PrevRenderFlags;

// undefined1
extern undefined1 DAT_1001277a;
extern undefined1 DAT_10012792;
extern undefined1 DAT_10016db4;
extern undefined1 DAT_10016ddc;
extern undefined1 DAT_10017694;
extern undefined1 DAT_10017789;
extern undefined1 DAT_1001778a;
extern undefined1 DAT_1001778b;
extern undefined1 DAT_100177e8;
extern undefined1 DAT_100177e9;
extern undefined1 DAT_10017871;
extern undefined1 DAT_10018533;
extern undefined1 DAT_1001856f;
extern undefined1 DAT_10018570;
extern undefined1 DAT_10018573;
extern undefined1 DAT_100185af;

// undefined2
extern undefined2 DAT_100177dc;
extern undefined2 DAT_1001794c;
extern undefined2 DAT_10017954;
extern undefined2 DAT_1001795a;
extern undefined2 DAT_1001795e;
extern undefined2 DAT_10017960;

// undefined4
extern undefined4 DAT_100141bc;
extern undefined4 DAT_100141c0;
extern undefined4 DAT_10014230;
extern undefined4 DAT_10014234;
extern undefined4 DAT_10016c60;
extern undefined4 DAT_10016c64;
extern undefined4 DAT_10016c70;
extern undefined4 DAT_10016c74;
extern undefined4 DAT_10016c78;
extern undefined4 DAT_10016d38;
extern undefined4 DAT_10016d60;
extern undefined4 DAT_10016d64;
extern undefined4 DAT_10016d80;
extern undefined4 DAT_10016d84;
extern undefined4 DAT_10016d88;
extern undefined4 DAT_10016d9c;
extern undefined4 DAT_10016da0;
extern undefined4 DAT_10016da4;
extern undefined4 DAT_10016dd8;
extern undefined4 DAT_10016edc;
extern undefined4 DAT_10016ee0;
extern undefined4 DAT_10016ee8;
extern undefined4 DAT_10016eec;
extern undefined4 DAT_10016ef0;
extern undefined4 DAT_10016ef4;
extern undefined4 DAT_10016ff0;
extern undefined4 DAT_10016ff4;
extern undefined4 DAT_10017080;
extern undefined4 DAT_10017098;
extern undefined4 DAT_100170b8;
extern undefined4 DAT_1001768c;
extern undefined4 DAT_10017690;
extern undefined4 DAT_10017760;
extern undefined4 DAT_10017764;
extern undefined4 DAT_10017768;
extern undefined4 DAT_1001776c;
extern undefined4 DAT_10017770;
extern undefined4 DAT_10017774;
extern undefined4 DAT_10017778;
extern undefined4 DAT_1001777c;
extern undefined4 DAT_10017780;
extern undefined4 DAT_10017794;
extern undefined4 DAT_100177d8;
extern undefined4 DAT_100177e0;
extern undefined4 DAT_100178f4;
extern undefined4 DAT_100178f8;
extern undefined4 DAT_100178fc;
extern undefined4 DAT_10017900;
extern undefined4 DAT_10017904;
extern undefined4 DAT_10017908;
extern undefined4 DAT_1001790c;
extern undefined4 DAT_10017910;
extern undefined4 DAT_10017914;
extern undefined4 DAT_10017918;
extern undefined4 DAT_1001791c;
extern undefined4 DAT_10017920;
extern undefined4 DAT_10017924;
extern undefined4 DAT_10017928;
extern undefined4 DAT_1001792c;
extern undefined4 DAT_10017930;
extern undefined4 DAT_10017934;
extern undefined4 DAT_10018210;
extern undefined4 DAT_10018214;
extern undefined4 DAT_10018254;
extern undefined4 DAT_10018258;
extern undefined4 DAT_10018520;
extern undefined4 DAT_10018524;
extern undefined4 DAT_100185b8;
extern undefined4 DAT_100185c0;
extern undefined4 DAT_100185c4;
extern undefined4 DAT_100185c8;
extern undefined4 DAT_100185d0;
extern undefined4 DAT_100185d4;
extern undefined4 DAT_100185d8;
extern undefined4 DAT_100185dc;
extern undefined4 DAT_1001864c;
extern undefined4 DAT_10018650;

// unicode
extern unicode u_null_1001230a;

// word
extern word WORD_10013000;

