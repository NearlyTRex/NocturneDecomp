#pragma once

// Structure: DDCOLORKEY
typedef struct DDCOLORKEY {
    DWORD dwColorSpaceLowValue;
    DWORD dwColorSpaceHighValue;
} DDCOLORKEY;

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
    IDirectDraw_vtable* vtable;
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
    IDirectDrawSurface_vtable* vtable;
} IDirectDrawSurface;

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

// Structure: IUnknown
typedef struct IUnknown {
    IUnknown_vtable* vtable;
} IUnknown;

// Structure: IUnknown_vtable
typedef struct IUnknown_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
} IUnknown_vtable;

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

