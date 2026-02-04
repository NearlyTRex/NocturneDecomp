#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/unknwn.h"
#include "system/wingdi.h"
#include "system/winnt.h"
#include "system/winuser.h"

// =============================================================================
// DDRAW - System Header
// =============================================================================

// Forward declarations
struct IUnknown;
struct PALETTEENTRY;

// Structure: DDCOLORKEY
typedef struct DDCOLORKEY {
    DWORD dwColorSpaceLowValue;
    DWORD dwColorSpaceHighValue;
} DDCOLORKEY;

// Union: DDPIXELFORMAT_union1
typedef union DDPIXELFORMAT_union1 {
    DWORD dwRGBBitCount;
    DWORD dwYUVBitCount;
    DWORD dwZBufferBitDepth;
    DWORD dwAlphaBitDepth;
} DDPIXELFORMAT_union1;

// Union: DDPIXELFORMAT_union2
typedef union DDPIXELFORMAT_union2 {
    DWORD dwRBitMask;
    DWORD dwYBitMask;
} DDPIXELFORMAT_union2;

// Union: DDPIXELFORMAT_union3
typedef union DDPIXELFORMAT_union3 {
    DWORD dwGBitMask;
    DWORD dwUBitMask;
} DDPIXELFORMAT_union3;

// Union: DDPIXELFORMAT_union4
typedef union DDPIXELFORMAT_union4 {
    DWORD dwBBitMask;
    DWORD dwVBitMask;
} DDPIXELFORMAT_union4;

// Union: DDPIXELFORMAT_union5
typedef union DDPIXELFORMAT_union5 {
    DWORD dwRGBAlphaBitMask;
    DWORD dwYUVAlphaBitMask;
    DWORD dwRGBZBitMask;
    DWORD dwYUVZBitMask;
} DDPIXELFORMAT_union5;

// Structure: DDPIXELFORMAT
typedef struct DDPIXELFORMAT {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFourCC;
    DDPIXELFORMAT_union1 field_12;
    DDPIXELFORMAT_union2 field_16;
    DDPIXELFORMAT_union3 field_20;
    DDPIXELFORMAT_union4 field_24;
    DDPIXELFORMAT_union5 field_28;
} DDPIXELFORMAT;

// Structure: DDSCAPS
typedef struct DDSCAPS {
    DWORD dwCaps;
} DDSCAPS;

// Union: DDSURFACEDESC_union1
typedef union DDSURFACEDESC_union1 {
    LONG lPitch;
    DWORD dwLinearSize;
} DDSURFACEDESC_union1;

// Union: DDSURFACEDESC_union2
typedef union DDSURFACEDESC_union2 {
    DWORD dwMipMapCount;
    DWORD dwZBufferBitDepth;
    DWORD dwRefreshRate;
} DDSURFACEDESC_union2;

// Structure: DDSURFACEDESC
typedef struct DDSURFACEDESC {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHeight;
    DWORD dwWidth;
    DDSURFACEDESC_union1 field_16;
    DWORD dwBackBufferCount;
    DDSURFACEDESC_union2 field_24;
    DWORD dwAlphaBitDepth;
    DWORD dwReserved;
    LPVOID lpSurface;
    DDCOLORKEY ddckCKDestOverlay;
    DDCOLORKEY ddckCKDestBlt;
    DDCOLORKEY ddckCKSrcOverlay;
    DDCOLORKEY ddckCKSrcBlt;
    DDPIXELFORMAT ddpfPixelFormat;
    DDSCAPS ddsCaps;
} DDSURFACEDESC;

// Structure: IDirectDraw
typedef struct IDirectDraw {
    struct IDirectDraw_vtable* vtable;
} IDirectDraw;

// Structure: IDirectDrawClipper
typedef struct IDirectDrawClipper {
    void** vtable;
} IDirectDrawClipper;

// Structure: IDirectDrawPalette
typedef struct IDirectDrawPalette {
    int field_0;
} IDirectDrawPalette;

// Structure: IDirectDrawSurface
typedef struct IDirectDrawSurface {
    struct IDirectDrawSurface_vtable* vtable;
} IDirectDrawSurface;

// Function Definition: IDirectDrawSurface_AddAttachedSurface
typedef HRESULT (*IDirectDrawSurface_AddAttachedSurface)(struct IDirectDrawSurface* this_ptr, struct IDirectDrawSurface* attached_surface);

// Function Definition: IDirectDrawSurface_AddOverlayDirtyRect
typedef HRESULT (*IDirectDrawSurface_AddOverlayDirtyRect)(struct IDirectDrawSurface* this_ptr, RECT* dirty_rect);

// Function Definition: IDirectDrawSurface_Blt
typedef HRESULT (*IDirectDrawSurface_Blt)(struct IDirectDrawSurface* this_ptr, RECT* dest_rect, struct IDirectDrawSurface* src_surface, RECT* src_rect, DWORD flags, void* blt_fx);

// Function Definition: IDirectDrawSurface_BltBatch
typedef HRESULT (*IDirectDrawSurface_BltBatch)(struct IDirectDrawSurface* this_ptr, void* blt_batch, DWORD count, DWORD flags);

// Function Definition: IDirectDrawSurface_BltFast
typedef HRESULT (*IDirectDrawSurface_BltFast)(struct IDirectDrawSurface* this_ptr, DWORD dest_x, DWORD dest_y, struct IDirectDrawSurface* src_surface, RECT* src_rect, DWORD trans);

// Function Definition: IDirectDrawSurface_DeleteAttachedSurface
typedef HRESULT (*IDirectDrawSurface_DeleteAttachedSurface)(struct IDirectDrawSurface* this_ptr, DWORD flags, struct IDirectDrawSurface* attached_surface);

// Function Definition: IDirectDrawSurface_EnumAttachedSurfaces
typedef HRESULT (*IDirectDrawSurface_EnumAttachedSurfaces)(struct IDirectDrawSurface* this_ptr, void* context, void* enum_callback);

// Function Definition: IDirectDrawSurface_EnumOverlayZOrders
typedef HRESULT (*IDirectDrawSurface_EnumOverlayZOrders)(struct IDirectDrawSurface* this_ptr, DWORD flags, void* context, void* enum_callback);

// Function Definition: IDirectDrawSurface_Flip
typedef HRESULT (*IDirectDrawSurface_Flip)(struct IDirectDrawSurface* this_ptr, struct IDirectDrawSurface* override_surface, DWORD flags);

// Function Definition: IDirectDrawSurface_GetAttachedSurface
typedef HRESULT (*IDirectDrawSurface_GetAttachedSurface)(struct IDirectDrawSurface* this_ptr, struct DDSCAPS* caps, struct IDirectDrawSurface** attached_surface);

// Function Definition: IDirectDrawSurface_GetBltStatus
typedef HRESULT (*IDirectDrawSurface_GetBltStatus)(struct IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_GetCaps
typedef HRESULT (*IDirectDrawSurface_GetCaps)(struct IDirectDrawSurface* this_ptr, struct DDSCAPS* caps);

// Function Definition: IDirectDrawSurface_GetColorKey
typedef HRESULT (*IDirectDrawSurface_GetColorKey)(struct IDirectDrawSurface* this_ptr, DWORD flags, void* color_key);

// Function Definition: IDirectDrawSurface_GetDC
typedef HRESULT (*IDirectDrawSurface_GetDC)(struct IDirectDrawSurface* this_ptr, void* device_context);

// Function Definition: IDirectDrawSurface_GetFlipStatus
typedef HRESULT (*IDirectDrawSurface_GetFlipStatus)(struct IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_GetOverlayPosition
typedef HRESULT (*IDirectDrawSurface_GetOverlayPosition)(struct IDirectDrawSurface* this_ptr, DWORD* x_pos, DWORD* y_pos);

// Function Definition: IDirectDrawSurface_GetPixelFormat
typedef HRESULT (*IDirectDrawSurface_GetPixelFormat)(struct IDirectDrawSurface* this_ptr, void* pixel_format);

// Function Definition: IDirectDrawSurface_GetSurfaceDesc
typedef HRESULT (*IDirectDrawSurface_GetSurfaceDesc)(struct IDirectDrawSurface* this_ptr, struct DDSURFACEDESC* surface_desc);

// Function Definition: IDirectDrawSurface_Initialize
typedef HRESULT (*IDirectDrawSurface_Initialize)(struct IDirectDrawSurface* this_ptr, void* dd_interface, struct DDSURFACEDESC* surface_desc);

// Function Definition: IDirectDrawSurface_IsLost
typedef HRESULT (*IDirectDrawSurface_IsLost)(struct IDirectDrawSurface* this_ptr);

// Function Definition: IDirectDrawSurface_Lock
typedef HRESULT (*IDirectDrawSurface_Lock)(struct IDirectDrawSurface* this_ptr, RECT* dest_rect, struct DDSURFACEDESC* surface_desc, DWORD flags, void* unused);

// Function Definition: IDirectDrawSurface_ReleaseDC
typedef HRESULT (*IDirectDrawSurface_ReleaseDC)(struct IDirectDrawSurface* this_ptr, void* device_context);

// Function Definition: IDirectDrawSurface_Restore
typedef HRESULT (*IDirectDrawSurface_Restore)(struct IDirectDrawSurface* this_ptr);

// Function Definition: IDirectDrawSurface_SetColorKey
typedef HRESULT (*IDirectDrawSurface_SetColorKey)(struct IDirectDrawSurface* this_ptr, DWORD flags, void* color_key);

// Function Definition: IDirectDrawSurface_SetOverlayPosition
typedef HRESULT (*IDirectDrawSurface_SetOverlayPosition)(struct IDirectDrawSurface* this_ptr, DWORD x_pos, DWORD y_pos);

// Function Definition: IDirectDrawSurface_Unlock
typedef HRESULT (*IDirectDrawSurface_Unlock)(struct IDirectDrawSurface* this_ptr, void* surface_ptr);

// Function Definition: IDirectDrawSurface_UpdateOverlay
typedef HRESULT (*IDirectDrawSurface_UpdateOverlay)(struct IDirectDrawSurface* this_ptr, RECT* src_rect, struct IDirectDrawSurface* dest_surface, RECT* dest_rect, DWORD flags, void* overlay_fx);

// Function Definition: IDirectDrawSurface_UpdateOverlayDisplay
typedef HRESULT (*IDirectDrawSurface_UpdateOverlayDisplay)(struct IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_UpdateOverlayZOrder
typedef HRESULT (*IDirectDrawSurface_UpdateOverlayZOrder)(struct IDirectDrawSurface* this_ptr, DWORD flags, struct IDirectDrawSurface* reference_surface);

// Structure: IDirectDrawSurface_vtable
typedef struct IDirectDrawSurface_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectDrawSurface_AddAttachedSurface* AddAttachedSurface;
    IDirectDrawSurface_AddOverlayDirtyRect* AddOverlayDirtyRect;
    IDirectDrawSurface_Blt* Blt;
    IDirectDrawSurface_BltBatch* BltBatch;
    IDirectDrawSurface_BltFast* BltFast;
    IDirectDrawSurface_DeleteAttachedSurface* DeleteAttachedSurface;
    IDirectDrawSurface_EnumAttachedSurfaces* EnumAttachedSurfaces;
    IDirectDrawSurface_EnumOverlayZOrders* EnumOverlayZOrders;
    IDirectDrawSurface_Flip* Flip;
    IDirectDrawSurface_GetAttachedSurface* GetAttachedSurface;
    IDirectDrawSurface_GetBltStatus* GetBltStatus;
    IDirectDrawSurface_GetCaps* GetCaps;
    void* GetClipper;
    IDirectDrawSurface_GetColorKey* GetColorKey;
    IDirectDrawSurface_GetDC* GetDC;
    IDirectDrawSurface_GetFlipStatus* GetFlipStatus;
    IDirectDrawSurface_GetOverlayPosition* GetOverlayPosition;
    void* GetPalette;
    IDirectDrawSurface_GetPixelFormat* GetPixelFormat;
    IDirectDrawSurface_GetSurfaceDesc* GetSurfaceDesc;
    IDirectDrawSurface_Initialize* Initialize;
    IDirectDrawSurface_IsLost* IsLost;
    IDirectDrawSurface_Lock* Lock;
    IDirectDrawSurface_ReleaseDC* ReleaseDC;
    IDirectDrawSurface_Restore* Restore;
    void* SetClipper;
    IDirectDrawSurface_SetColorKey* SetColorKey;
    IDirectDrawSurface_SetOverlayPosition* SetOverlayPosition;
    void* SetPalette;
    IDirectDrawSurface_Unlock* Unlock;
    IDirectDrawSurface_UpdateOverlay* UpdateOverlay;
    IDirectDrawSurface_UpdateOverlayDisplay* UpdateOverlayDisplay;
    IDirectDrawSurface_UpdateOverlayZOrder* UpdateOverlayZOrder;
} IDirectDrawSurface_vtable;

// Function Definition: IDirectDraw_Compact
typedef HRESULT (*IDirectDraw_Compact)(struct IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_CreateClipper
typedef HRESULT (*IDirectDraw_CreateClipper)(struct IDirectDraw* this_ptr, DWORD flags, struct IDirectDrawClipper** clipper, struct IUnknown* outer);

// Function Definition: IDirectDraw_CreatePalette
typedef HRESULT (*IDirectDraw_CreatePalette)(struct IDirectDraw* this_ptr, DWORD flags, struct PALETTEENTRY* entries, struct IDirectDrawPalette** palette, struct IUnknown* outer);

// Function Definition: IDirectDraw_CreateSurface
typedef HRESULT (*IDirectDraw_CreateSurface)(struct IDirectDraw* this_ptr, struct DDSURFACEDESC* desc, struct IDirectDrawSurface** surface, struct IUnknown* outer);

// Function Definition: IDirectDraw_DuplicateSurface
typedef HRESULT (*IDirectDraw_DuplicateSurface)(struct IDirectDraw* this_ptr, struct IDirectDrawSurface* src, struct IDirectDrawSurface** dest);

// Function Definition: IDirectDraw_FlipToGDISurface
typedef HRESULT (*IDirectDraw_FlipToGDISurface)(struct IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_GetDisplayMode
typedef HRESULT (*IDirectDraw_GetDisplayMode)(struct IDirectDraw* this_ptr, struct DDSURFACEDESC* desc);

// Function Definition: IDirectDraw_GetFourCCCodes
typedef HRESULT (*IDirectDraw_GetFourCCCodes)(struct IDirectDraw* this_ptr, DWORD* num_codes, DWORD* codes);

// Function Definition: IDirectDraw_GetGDISurface
typedef HRESULT (*IDirectDraw_GetGDISurface)(struct IDirectDraw* this_ptr, struct IDirectDrawSurface** surface);

// Function Definition: IDirectDraw_GetMonitorFrequency
typedef HRESULT (*IDirectDraw_GetMonitorFrequency)(struct IDirectDraw* this_ptr, DWORD* frequency);

// Function Definition: IDirectDraw_GetScanLine
typedef HRESULT (*IDirectDraw_GetScanLine)(struct IDirectDraw* this_ptr, DWORD* scan_line);

// Function Definition: IDirectDraw_GetVerticalBlankStatus
typedef HRESULT (*IDirectDraw_GetVerticalBlankStatus)(struct IDirectDraw* this_ptr, BOOL* is_in_vb);

// Function Definition: IDirectDraw_Initialize
typedef HRESULT (*IDirectDraw_Initialize)(struct IDirectDraw* this_ptr, GUID* guid);

// Function Definition: IDirectDraw_RestoreDisplayMode
typedef HRESULT (*IDirectDraw_RestoreDisplayMode)(struct IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_SetCooperativeLevel
typedef HRESULT (*IDirectDraw_SetCooperativeLevel)(struct IDirectDraw* this_ptr, HWND window, DWORD flags);

// Function Definition: IDirectDraw_SetDisplayMode
typedef HRESULT (*IDirectDraw_SetDisplayMode)(struct IDirectDraw* this_ptr, DWORD width, DWORD height, DWORD bpp);

// Function Definition: IDirectDraw_WaitForVerticalBlank
typedef HRESULT (*IDirectDraw_WaitForVerticalBlank)(struct IDirectDraw* this_ptr, DWORD flags, HANDLE event);

// Structure: IDirectDraw_vtable
typedef struct IDirectDraw_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirectDraw_Compact* Compact;
    IDirectDraw_CreateClipper* CreateClipper;
    IDirectDraw_CreatePalette* CreatePalette;
    IDirectDraw_CreateSurface* CreateSurface;
    IDirectDraw_DuplicateSurface* DuplicateSurface;
    void* EnumDisplayModes;
    void* EnumSurfaces;
    IDirectDraw_FlipToGDISurface* FlipToGDISurface;
    void* GetCaps;
    IDirectDraw_GetDisplayMode* GetDisplayMode;
    IDirectDraw_GetFourCCCodes* GetFourCCCodes;
    IDirectDraw_GetGDISurface* GetGDISurface;
    IDirectDraw_GetMonitorFrequency* GetMonitorFrequency;
    IDirectDraw_GetScanLine* GetScanLine;
    IDirectDraw_GetVerticalBlankStatus* GetVerticalBlankStatus;
    IDirectDraw_Initialize* Initialize;
    IDirectDraw_RestoreDisplayMode* RestoreDisplayMode;
    IDirectDraw_SetCooperativeLevel* SetCooperativeLevel;
    IDirectDraw_SetDisplayMode* SetDisplayMode;
    IDirectDraw_WaitForVerticalBlank* WaitForVerticalBlank;
} IDirectDraw_vtable;

// Typedef: LPDIRECTDRAW
// pointer to IDirectDraw
typedef struct IDirectDraw* LPDIRECTDRAW;

// Function Definition: DIRECT_DRAW_CREATE_FUNC
typedef HRESULT (*DIRECT_DRAW_CREATE_FUNC)(GUID* lpGUID, LPDIRECTDRAW* lplpDD, struct IUnknown* pUnkOuter);

// Structure: PALETTEENTRY
typedef struct PALETTEENTRY {
    BYTE red;
    BYTE green;
    BYTE blue;
    BYTE flags;
} PALETTEENTRY;

// Structure: RGB_ENTRY
typedef struct RGB_ENTRY {
    BYTE red;
    BYTE green;
    BYTE blue;
} RGB_ENTRY;

