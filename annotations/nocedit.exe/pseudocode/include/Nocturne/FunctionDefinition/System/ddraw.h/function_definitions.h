#pragma once

// Function Definition: DirectDrawCreate
typedef HRESULT (*DirectDrawCreate)(GUID* lpGUID, LPDIRECTDRAW* lplpDD, IUnknown* pUnkOuter);

// Function Definition: IDirectDrawSurface_AddAttachedSurface
typedef HRESULT (*IDirectDrawSurface_AddAttachedSurface)(IDirectDrawSurface* this_ptr, IDirectDrawSurface* attached_surface);

// Function Definition: IDirectDrawSurface_AddOverlayDirtyRect
typedef HRESULT (*IDirectDrawSurface_AddOverlayDirtyRect)(IDirectDrawSurface* this_ptr, RECT* dirty_rect);

// Function Definition: IDirectDrawSurface_Blt
typedef HRESULT (*IDirectDrawSurface_Blt)(IDirectDrawSurface* this_ptr, RECT* dest_rect, IDirectDrawSurface* src_surface, RECT* src_rect, DWORD flags, void* blt_fx);

// Function Definition: IDirectDrawSurface_BltBatch
typedef HRESULT (*IDirectDrawSurface_BltBatch)(IDirectDrawSurface* this_ptr, void* blt_batch, DWORD count, DWORD flags);

// Function Definition: IDirectDrawSurface_BltFast
typedef HRESULT (*IDirectDrawSurface_BltFast)(IDirectDrawSurface* this_ptr, DWORD dest_x, DWORD dest_y, IDirectDrawSurface* src_surface, RECT* src_rect, DWORD trans);

// Function Definition: IDirectDrawSurface_DeleteAttachedSurface
typedef HRESULT (*IDirectDrawSurface_DeleteAttachedSurface)(IDirectDrawSurface* this_ptr, DWORD flags, IDirectDrawSurface* attached_surface);

// Function Definition: IDirectDrawSurface_EnumAttachedSurfaces
typedef HRESULT (*IDirectDrawSurface_EnumAttachedSurfaces)(IDirectDrawSurface* this_ptr, void* context, void* enum_callback);

// Function Definition: IDirectDrawSurface_EnumOverlayZOrders
typedef HRESULT (*IDirectDrawSurface_EnumOverlayZOrders)(IDirectDrawSurface* this_ptr, DWORD flags, void* context, void* enum_callback);

// Function Definition: IDirectDrawSurface_Flip
typedef HRESULT (*IDirectDrawSurface_Flip)(IDirectDrawSurface* this_ptr, IDirectDrawSurface* override_surface, DWORD flags);

// Function Definition: IDirectDrawSurface_GetAttachedSurface
typedef HRESULT (*IDirectDrawSurface_GetAttachedSurface)(IDirectDrawSurface* this_ptr, DDSCAPS* caps, IDirectDrawSurface** attached_surface);

// Function Definition: IDirectDrawSurface_GetBltStatus
typedef HRESULT (*IDirectDrawSurface_GetBltStatus)(IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_GetCaps
typedef HRESULT (*IDirectDrawSurface_GetCaps)(IDirectDrawSurface* this_ptr, DDSCAPS* caps);

// Function Definition: IDirectDrawSurface_GetColorKey
typedef HRESULT (*IDirectDrawSurface_GetColorKey)(IDirectDrawSurface* this_ptr, DWORD flags, void* color_key);

// Function Definition: IDirectDrawSurface_GetDC
typedef HRESULT (*IDirectDrawSurface_GetDC)(IDirectDrawSurface* this_ptr, void* device_context);

// Function Definition: IDirectDrawSurface_GetFlipStatus
typedef HRESULT (*IDirectDrawSurface_GetFlipStatus)(IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_GetOverlayPosition
typedef HRESULT (*IDirectDrawSurface_GetOverlayPosition)(IDirectDrawSurface* this_ptr, DWORD* x_pos, DWORD* y_pos);

// Function Definition: IDirectDrawSurface_GetPixelFormat
typedef HRESULT (*IDirectDrawSurface_GetPixelFormat)(IDirectDrawSurface* this_ptr, void* pixel_format);

// Function Definition: IDirectDrawSurface_GetSurfaceDesc
typedef HRESULT (*IDirectDrawSurface_GetSurfaceDesc)(IDirectDrawSurface* this_ptr, DDSURFACEDESC* surface_desc);

// Function Definition: IDirectDrawSurface_Initialize
typedef HRESULT (*IDirectDrawSurface_Initialize)(IDirectDrawSurface* this_ptr, void* dd_interface, DDSURFACEDESC* surface_desc);

// Function Definition: IDirectDrawSurface_IsLost
typedef HRESULT (*IDirectDrawSurface_IsLost)(IDirectDrawSurface* this_ptr);

// Function Definition: IDirectDrawSurface_Lock
typedef HRESULT (*IDirectDrawSurface_Lock)(IDirectDrawSurface* this_ptr, RECT* dest_rect, DDSURFACEDESC* surface_desc, DWORD flags, void* unused);

// Function Definition: IDirectDrawSurface_ReleaseDC
typedef HRESULT (*IDirectDrawSurface_ReleaseDC)(IDirectDrawSurface* this_ptr, void* device_context);

// Function Definition: IDirectDrawSurface_Restore
typedef HRESULT (*IDirectDrawSurface_Restore)(IDirectDrawSurface* this_ptr);

// Function Definition: IDirectDrawSurface_SetColorKey
typedef HRESULT (*IDirectDrawSurface_SetColorKey)(IDirectDrawSurface* this_ptr, DWORD flags, void* color_key);

// Function Definition: IDirectDrawSurface_SetOverlayPosition
typedef HRESULT (*IDirectDrawSurface_SetOverlayPosition)(IDirectDrawSurface* this_ptr, DWORD x_pos, DWORD y_pos);

// Function Definition: IDirectDrawSurface_Unlock
typedef HRESULT (*IDirectDrawSurface_Unlock)(IDirectDrawSurface* this_ptr, void* surface_ptr);

// Function Definition: IDirectDrawSurface_UpdateOverlay
typedef HRESULT (*IDirectDrawSurface_UpdateOverlay)(IDirectDrawSurface* this_ptr, RECT* src_rect, IDirectDrawSurface* dest_surface, RECT* dest_rect, DWORD flags, void* overlay_fx);

// Function Definition: IDirectDrawSurface_UpdateOverlayDisplay
typedef HRESULT (*IDirectDrawSurface_UpdateOverlayDisplay)(IDirectDrawSurface* this_ptr, DWORD flags);

// Function Definition: IDirectDrawSurface_UpdateOverlayZOrder
typedef HRESULT (*IDirectDrawSurface_UpdateOverlayZOrder)(IDirectDrawSurface* this_ptr, DWORD flags, IDirectDrawSurface* reference_surface);

// Function Definition: IDirectDraw_Compact
typedef HRESULT (*IDirectDraw_Compact)(IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_CreateClipper
typedef HRESULT (*IDirectDraw_CreateClipper)(IDirectDraw* this_ptr, DWORD flags, IDirectDrawClipper** clipper, IUnknown* outer);

// Function Definition: IDirectDraw_CreatePalette
typedef HRESULT (*IDirectDraw_CreatePalette)(IDirectDraw* this_ptr, DWORD flags, PALETTEENTRY* entries, IDirectDrawPalette** palette, IUnknown* outer);

// Function Definition: IDirectDraw_CreateSurface
typedef HRESULT (*IDirectDraw_CreateSurface)(IDirectDraw* this_ptr, DDSURFACEDESC* desc, IDirectDrawSurface** surface, IUnknown* outer);

// Function Definition: IDirectDraw_DuplicateSurface
typedef HRESULT (*IDirectDraw_DuplicateSurface)(IDirectDraw* this_ptr, IDirectDrawSurface* src, IDirectDrawSurface** dest);

// Function Definition: IDirectDraw_FlipToGDISurface
typedef HRESULT (*IDirectDraw_FlipToGDISurface)(IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_GetDisplayMode
typedef HRESULT (*IDirectDraw_GetDisplayMode)(IDirectDraw* this_ptr, DDSURFACEDESC* desc);

// Function Definition: IDirectDraw_GetFourCCCodes
typedef HRESULT (*IDirectDraw_GetFourCCCodes)(IDirectDraw* this_ptr, DWORD* num_codes, DWORD* codes);

// Function Definition: IDirectDraw_GetGDISurface
typedef HRESULT (*IDirectDraw_GetGDISurface)(IDirectDraw* this_ptr, IDirectDrawSurface** surface);

// Function Definition: IDirectDraw_GetMonitorFrequency
typedef HRESULT (*IDirectDraw_GetMonitorFrequency)(IDirectDraw* this_ptr, DWORD* frequency);

// Function Definition: IDirectDraw_GetScanLine
typedef HRESULT (*IDirectDraw_GetScanLine)(IDirectDraw* this_ptr, DWORD* scan_line);

// Function Definition: IDirectDraw_GetVerticalBlankStatus
typedef HRESULT (*IDirectDraw_GetVerticalBlankStatus)(IDirectDraw* this_ptr, BOOL* is_in_vb);

// Function Definition: IDirectDraw_Initialize
typedef HRESULT (*IDirectDraw_Initialize)(IDirectDraw* this_ptr, GUID* guid);

// Function Definition: IDirectDraw_RestoreDisplayMode
typedef HRESULT (*IDirectDraw_RestoreDisplayMode)(IDirectDraw* this_ptr);

// Function Definition: IDirectDraw_SetCooperativeLevel
typedef HRESULT (*IDirectDraw_SetCooperativeLevel)(IDirectDraw* this_ptr, HWND window, DWORD flags);

// Function Definition: IDirectDraw_SetDisplayMode
typedef HRESULT (*IDirectDraw_SetDisplayMode)(IDirectDraw* this_ptr, DWORD width, DWORD height, DWORD bpp);

// Function Definition: IDirectDraw_WaitForVerticalBlank
typedef HRESULT (*IDirectDraw_WaitForVerticalBlank)(IDirectDraw* this_ptr, DWORD flags, HANDLE event);

