// =============================================================================
// DIRECTDRAW SHIM - SDL2-backed DirectDraw implementation
// =============================================================================
//
// Implements the DirectDraw COM interfaces using SDL2 for cross-platform
// rendering. The decompiled code calls through vtable pointers, so we
// populate vtable structs with our shim function pointers.
//
// The shim struct layout trick: the vtable is the first member, so
// obj->vtable points to our embedded vtable, and each method can cast
// this_ptr back to the full shim struct to access internal SDL state.
//

#include <SDL.h>
#include <cstdlib>
#include <cstring>

#include "system/ddraw.h"

// =============================================================================
// DirectDraw constants (from the original Windows SDK)
// =============================================================================

#define DD_OK                   0
#define DDERR_GENERIC           0x80004005
#define DDERR_INVALIDPARAMS     0x80070057
#define DDERR_OUTOFMEMORY       0x8007000E
#define DDERR_UNSUPPORTED       0x80004001
#define DDERR_SURFACELOST       0x887601C2

// DDSD flags
#define DDSD_CAPS               0x00000001
#define DDSD_HEIGHT             0x00000002
#define DDSD_WIDTH              0x00000004
#define DDSD_PITCH              0x00000008
#define DDSD_PIXELFORMAT        0x00001000
#define DDSD_BACKBUFFERCOUNT    0x00000020

// DDSCAPS flags
#define DDSCAPS_PRIMARYSURFACE  0x00000200
#define DDSCAPS_BACKBUFFER      0x00000004
#define DDSCAPS_FLIP            0x00000010
#define DDSCAPS_COMPLEX         0x00000008
#define DDSCAPS_OFFSCREENPLAIN  0x00000040
#define DDSCAPS_SYSTEMMEMORY    0x00000800
#define DDSCAPS_VIDEOMEMORY     0x00004000

// DDSCL flags
#define DDSCL_FULLSCREEN        0x00000001
#define DDSCL_EXCLUSIVE         0x00000010

// DDBLT flags
#define DDBLT_COLORFILL         0x00000400

// DDBLTFAST flags
#define DDBLTFAST_SRCCOLORKEY   0x00000002
#define DDBLTFAST_NOCOLORKEY    0x00000000

// DDFLIP flags
#define DDFLIP_WAIT             0x00000001

// DDPF flags
#define DDPF_RGB                0x00000040

// DDLOCK flags
#define DDLOCK_WAIT             0x00000001
#define DDLOCK_SURFACEMEMORYPTR  0x00000000

// =============================================================================
// Internal shim data structures
// =============================================================================

struct DDraw_ShimData;
struct DDSurface_ShimData;

// Forward declare vtable population
static void populate_ddraw_vtable(IDirectDraw_vtable* vt);
static void populate_surface_vtable(IDirectDrawSurface_vtable* vt);

struct DDraw_ShimData {
    IDirectDraw_vtable vtable;
    ULONG ref_count;
    SDL_Window* window;
    SDL_Renderer* renderer;
    HWND cooperative_hwnd;
    DWORD cooperative_level;
    int display_width;
    int display_height;
    int display_bpp;
};

struct DDSurface_ShimData {
    IDirectDrawSurface_vtable vtable;
    ULONG ref_count;
    DDraw_ShimData* ddraw;
    SDL_Surface* sdl_surface;
    SDL_Texture* sdl_texture;
    DDSURFACEDESC desc;
    int is_primary;
    int is_locked;
    DDSurface_ShimData* back_buffer;
    DDCOLORKEY src_color_key;
    int has_color_key;
};

// Global reference to the ddraw shim (for surface -> renderer access)
static DDraw_ShimData* g_ddraw_shim = nullptr;

// =============================================================================
// IUnknown methods (shared)
// =============================================================================

static HRESULT ddraw_QueryInterface(IDirectDraw* this_ptr, void* riid, void** ppvObject) {
    (void)this_ptr; (void)riid; (void)ppvObject;
    return DDERR_UNSUPPORTED;
}

static ULONG ddraw_AddRef(IDirectDraw* this_ptr) {
    DDraw_ShimData* shim = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    return ++shim->ref_count;
}

static ULONG ddraw_Release(IDirectDraw* this_ptr) {
    DDraw_ShimData* shim = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    if (--shim->ref_count == 0) {
        if (shim->renderer) SDL_DestroyRenderer(shim->renderer);
        if (shim->window) SDL_DestroyWindow(shim->window);
        if (g_ddraw_shim == shim) g_ddraw_shim = nullptr;
        free(shim);
        return 0;
    }
    return shim->ref_count;
}

static HRESULT surface_QueryInterface(IDirectDrawSurface* this_ptr, void* riid, void** ppvObject) {
    (void)this_ptr; (void)riid; (void)ppvObject;
    return DDERR_UNSUPPORTED;
}

static ULONG surface_AddRef(IDirectDrawSurface* this_ptr) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    return ++shim->ref_count;
}

static ULONG surface_Release(IDirectDrawSurface* this_ptr) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (--shim->ref_count == 0) {
        if (shim->sdl_texture) SDL_DestroyTexture(shim->sdl_texture);
        if (shim->sdl_surface) SDL_FreeSurface(shim->sdl_surface);
        if (shim->back_buffer) {
            surface_Release(reinterpret_cast<IDirectDrawSurface*>(shim->back_buffer));
        }
        free(shim);
        return 0;
    }
    return shim->ref_count;
}

// =============================================================================
// IDirectDraw methods
// =============================================================================

static HRESULT ddraw_Compact(IDirectDraw* this_ptr) {
    (void)this_ptr;
    return DD_OK;
}

static HRESULT ddraw_CreateClipper(IDirectDraw* this_ptr, DWORD flags,
                                    IDirectDrawClipper** clipper, IUnknown* outer) {
    (void)this_ptr; (void)flags; (void)outer;
    // Allocate a minimal clipper (not actively used in most paths)
    IDirectDrawClipper* clip = (IDirectDrawClipper*)calloc(1, sizeof(IDirectDrawClipper));
    if (!clip) return DDERR_OUTOFMEMORY;
    *clipper = clip;
    return DD_OK;
}

static HRESULT ddraw_CreatePalette(IDirectDraw* this_ptr, DWORD flags,
                                    PALETTEENTRY* entries, IDirectDrawPalette** palette,
                                    IUnknown* outer) {
    (void)this_ptr; (void)flags; (void)entries; (void)outer;
    // Stub: palettes are rarely used in 16/24/32-bit modes
    IDirectDrawPalette* pal = (IDirectDrawPalette*)calloc(1, sizeof(IDirectDrawPalette));
    if (!pal) return DDERR_OUTOFMEMORY;
    *palette = pal;
    return DD_OK;
}

static DDSurface_ShimData* create_surface_shim(DDraw_ShimData* ddraw,
                                                 int width, int height, int bpp) {
    DDSurface_ShimData* surf = (DDSurface_ShimData*)calloc(1, sizeof(DDSurface_ShimData));
    if (!surf) return nullptr;

    populate_surface_vtable(&surf->vtable);
    surf->ref_count = 1;
    surf->ddraw = ddraw;

    // Create SDL surface with appropriate pixel format
    Uint32 rmask, gmask, bmask, amask;
    if (bpp == 16) {
        rmask = 0xF800; gmask = 0x07E0; bmask = 0x001F; amask = 0;
    } else if (bpp == 24) {
        rmask = 0xFF0000; gmask = 0x00FF00; bmask = 0x0000FF; amask = 0;
    } else { // 32-bit
        rmask = 0x00FF0000; gmask = 0x0000FF00; bmask = 0x000000FF; amask = 0xFF000000;
    }

    surf->sdl_surface = SDL_CreateRGBSurface(0, width, height, bpp,
                                              rmask, gmask, bmask, amask);
    if (!surf->sdl_surface) {
        free(surf);
        return nullptr;
    }

    // Fill in the surface description
    surf->desc.dwSize = sizeof(DDSURFACEDESC);
    surf->desc.dwFlags = DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH | DDSD_PITCH | DDSD_PIXELFORMAT;
    surf->desc.dwHeight = height;
    surf->desc.dwWidth = width;
    surf->desc.dwPitchOrLinearSize.lPitch = surf->sdl_surface->pitch;
    surf->desc.ddpfPixelFormat.dwSize = sizeof(DDPIXELFORMAT);
    surf->desc.ddpfPixelFormat.dwFlags = DDPF_RGB;
    surf->desc.ddpfPixelFormat.dwBitCount.dwRGBBitCount = bpp;
    surf->desc.ddpfPixelFormat.dwRedYMask.dwRBitMask = rmask;
    surf->desc.ddpfPixelFormat.dwGreenUMask.dwGBitMask = gmask;
    surf->desc.ddpfPixelFormat.dwBlueVMask.dwBBitMask = bmask;

    return surf;
}

static HRESULT ddraw_CreateSurface(IDirectDraw* this_ptr, DDSURFACEDESC* desc,
                                    IDirectDrawSurface** surface, IUnknown* outer) {
    (void)outer;
    DDraw_ShimData* ddraw = reinterpret_cast<DDraw_ShimData*>(this_ptr);

    int width = ddraw->display_width;
    int height = ddraw->display_height;
    int bpp = ddraw->display_bpp;

    if (desc->dwFlags & DDSD_WIDTH) width = desc->dwWidth;
    if (desc->dwFlags & DDSD_HEIGHT) height = desc->dwHeight;

    DWORD caps = 0;
    if (desc->dwFlags & DDSD_CAPS) caps = desc->ddsCaps.dwCaps;

    DDSurface_ShimData* surf = create_surface_shim(ddraw, width, height, bpp);
    if (!surf) return DDERR_OUTOFMEMORY;

    surf->desc.ddsCaps.dwCaps = caps;

    if (caps & DDSCAPS_PRIMARYSURFACE) {
        surf->is_primary = 1;

        // Create an SDL texture for presenting to screen
        Uint32 format = (bpp == 16) ? SDL_PIXELFORMAT_RGB565 :
                        (bpp == 24) ? SDL_PIXELFORMAT_RGB24 :
                                      SDL_PIXELFORMAT_ARGB8888;
        surf->sdl_texture = SDL_CreateTexture(ddraw->renderer, format,
                                               SDL_TEXTUREACCESS_STREAMING,
                                               width, height);

        // If complex (has back buffer), create the back buffer
        if ((caps & DDSCAPS_COMPLEX) && (caps & DDSCAPS_FLIP)) {
            DDSurface_ShimData* back = create_surface_shim(ddraw, width, height, bpp);
            if (back) {
                back->desc.ddsCaps.dwCaps = DDSCAPS_BACKBUFFER;
                back->sdl_texture = SDL_CreateTexture(ddraw->renderer, format,
                                                       SDL_TEXTUREACCESS_STREAMING,
                                                       width, height);
                surf->back_buffer = back;
            }
        }
    }

    *surface = reinterpret_cast<IDirectDrawSurface*>(surf);
    return DD_OK;
}

static HRESULT ddraw_DuplicateSurface(IDirectDraw* this_ptr, IDirectDrawSurface* src,
                                       IDirectDrawSurface** dest) {
    (void)this_ptr; (void)src; (void)dest;
    return DDERR_UNSUPPORTED;
}

static HRESULT ddraw_FlipToGDISurface(IDirectDraw* this_ptr) {
    (void)this_ptr;
    return DD_OK;
}

static HRESULT ddraw_GetDisplayMode(IDirectDraw* this_ptr, DDSURFACEDESC* desc) {
    DDraw_ShimData* ddraw = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    memset(desc, 0, sizeof(DDSURFACEDESC));
    desc->dwSize = sizeof(DDSURFACEDESC);
    desc->dwFlags = DDSD_HEIGHT | DDSD_WIDTH | DDSD_PIXELFORMAT;
    desc->dwWidth = ddraw->display_width;
    desc->dwHeight = ddraw->display_height;
    desc->ddpfPixelFormat.dwSize = sizeof(DDPIXELFORMAT);
    desc->ddpfPixelFormat.dwFlags = DDPF_RGB;
    desc->ddpfPixelFormat.dwBitCount.dwRGBBitCount = ddraw->display_bpp;
    return DD_OK;
}

static HRESULT ddraw_GetFourCCCodes(IDirectDraw* this_ptr, DWORD* num_codes, DWORD* codes) {
    (void)this_ptr; (void)codes;
    if (num_codes) *num_codes = 0;
    return DD_OK;
}

static HRESULT ddraw_GetGDISurface(IDirectDraw* this_ptr, IDirectDrawSurface** surface) {
    (void)this_ptr; (void)surface;
    return DDERR_UNSUPPORTED;
}

static HRESULT ddraw_GetMonitorFrequency(IDirectDraw* this_ptr, DWORD* frequency) {
    (void)this_ptr;
    if (frequency) *frequency = 60;
    return DD_OK;
}

static HRESULT ddraw_GetScanLine(IDirectDraw* this_ptr, DWORD* scan_line) {
    (void)this_ptr;
    if (scan_line) *scan_line = 0;
    return DD_OK;
}

static HRESULT ddraw_GetVerticalBlankStatus(IDirectDraw* this_ptr, BOOL* is_in_vb) {
    (void)this_ptr;
    if (is_in_vb) *is_in_vb = 1;
    return DD_OK;
}

static HRESULT ddraw_Initialize(IDirectDraw* this_ptr, GUID* guid) {
    (void)this_ptr; (void)guid;
    return DD_OK;
}

static HRESULT ddraw_RestoreDisplayMode(IDirectDraw* this_ptr) {
    DDraw_ShimData* ddraw = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    if (ddraw->window) {
        SDL_SetWindowFullscreen(ddraw->window, 0);
    }
    return DD_OK;
}

static HRESULT ddraw_SetCooperativeLevel(IDirectDraw* this_ptr, HWND window, DWORD flags) {
    DDraw_ShimData* ddraw = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    ddraw->cooperative_hwnd = window;
    ddraw->cooperative_level = flags;
    return DD_OK;
}

static HRESULT ddraw_SetDisplayMode(IDirectDraw* this_ptr, DWORD width, DWORD height, DWORD bpp) {
    DDraw_ShimData* ddraw = reinterpret_cast<DDraw_ShimData*>(this_ptr);
    ddraw->display_width = width;
    ddraw->display_height = height;
    ddraw->display_bpp = bpp;

    if (!ddraw->window) {
        Uint32 flags = SDL_WINDOW_SHOWN;
        if (ddraw->cooperative_level & DDSCL_FULLSCREEN) {
            flags |= SDL_WINDOW_FULLSCREEN;
        }
        ddraw->window = SDL_CreateWindow("Nocturne",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          width, height, flags);
        if (!ddraw->window) return DDERR_GENERIC;

        ddraw->renderer = SDL_CreateRenderer(ddraw->window, -1,
                                              SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        if (!ddraw->renderer) {
            ddraw->renderer = SDL_CreateRenderer(ddraw->window, -1, 0);
        }
        if (!ddraw->renderer) return DDERR_GENERIC;
    } else {
        SDL_SetWindowSize(ddraw->window, width, height);
        if (ddraw->cooperative_level & DDSCL_FULLSCREEN) {
            SDL_SetWindowFullscreen(ddraw->window, SDL_WINDOW_FULLSCREEN);
        }
    }

    return DD_OK;
}

static HRESULT ddraw_WaitForVerticalBlank(IDirectDraw* this_ptr, DWORD flags, HANDLE event) {
    (void)this_ptr; (void)flags; (void)event;
    // SDL's vsync handles this when renderer has PRESENTVSYNC
    SDL_Delay(1);
    return DD_OK;
}

// =============================================================================
// IDirectDrawSurface methods
// =============================================================================

static HRESULT surface_AddAttachedSurface(IDirectDrawSurface* this_ptr,
                                            IDirectDrawSurface* attached_surface) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    DDSurface_ShimData* attached = reinterpret_cast<DDSurface_ShimData*>(attached_surface);
    shim->back_buffer = attached;
    attached->ref_count++;
    return DD_OK;
}

static HRESULT surface_AddOverlayDirtyRect(IDirectDrawSurface* this_ptr, RECT* dirty_rect) {
    (void)this_ptr; (void)dirty_rect;
    return DD_OK;
}

static HRESULT surface_Blt(IDirectDrawSurface* this_ptr, RECT* dest_rect,
                            IDirectDrawSurface* src_surface, RECT* src_rect,
                            DWORD flags, void* blt_fx) {
    DDSurface_ShimData* dst = reinterpret_cast<DDSurface_ShimData*>(this_ptr);

    // Color fill
    if (flags & DDBLT_COLORFILL) {
        if (blt_fx && dst->sdl_surface) {
            // DDBLTFX.dwFillColor is at offset 76 in the DDBLTFX struct
            DWORD fill_color = *((DWORD*)((char*)blt_fx + 76));
            SDL_Rect sdl_rect;
            if (dest_rect) {
                sdl_rect.x = dest_rect->left;
                sdl_rect.y = dest_rect->top;
                sdl_rect.w = dest_rect->right - dest_rect->left;
                sdl_rect.h = dest_rect->bottom - dest_rect->top;
                SDL_FillRect(dst->sdl_surface, &sdl_rect, fill_color);
            } else {
                SDL_FillRect(dst->sdl_surface, nullptr, fill_color);
            }
        }
        return DD_OK;
    }

    // Surface-to-surface blit
    if (src_surface && dst->sdl_surface) {
        DDSurface_ShimData* src = reinterpret_cast<DDSurface_ShimData*>(src_surface);
        SDL_Rect src_sdl, dst_sdl;
        SDL_Rect* src_ptr = nullptr;
        SDL_Rect* dst_ptr = nullptr;

        if (src_rect) {
            src_sdl.x = src_rect->left;
            src_sdl.y = src_rect->top;
            src_sdl.w = src_rect->right - src_rect->left;
            src_sdl.h = src_rect->bottom - src_rect->top;
            src_ptr = &src_sdl;
        }
        if (dest_rect) {
            dst_sdl.x = dest_rect->left;
            dst_sdl.y = dest_rect->top;
            dst_sdl.w = dest_rect->right - dest_rect->left;
            dst_sdl.h = dest_rect->bottom - dest_rect->top;
            dst_ptr = &dst_sdl;
        }

        SDL_BlitScaled(src->sdl_surface, src_ptr, dst->sdl_surface, dst_ptr);
    }

    return DD_OK;
}

static HRESULT surface_BltBatch(IDirectDrawSurface* this_ptr, void* blt_batch,
                                 DWORD count, DWORD flags) {
    (void)this_ptr; (void)blt_batch; (void)count; (void)flags;
    return DDERR_UNSUPPORTED;
}

static HRESULT surface_BltFast(IDirectDrawSurface* this_ptr, DWORD dest_x, DWORD dest_y,
                                IDirectDrawSurface* src_surface, RECT* src_rect, DWORD trans) {
    DDSurface_ShimData* dst = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (!src_surface || !dst->sdl_surface) return DDERR_INVALIDPARAMS;

    DDSurface_ShimData* src = reinterpret_cast<DDSurface_ShimData*>(src_surface);

    SDL_Rect src_sdl;
    SDL_Rect* src_ptr = nullptr;
    if (src_rect) {
        src_sdl.x = src_rect->left;
        src_sdl.y = src_rect->top;
        src_sdl.w = src_rect->right - src_rect->left;
        src_sdl.h = src_rect->bottom - src_rect->top;
        src_ptr = &src_sdl;
    }

    int w = src_ptr ? src_ptr->w : src->sdl_surface->w;
    int h = src_ptr ? src_ptr->h : src->sdl_surface->h;
    SDL_Rect dst_sdl = { (int)dest_x, (int)dest_y, w, h };

    if (trans & DDBLTFAST_SRCCOLORKEY) {
        if (src->has_color_key) {
            SDL_SetColorKey(src->sdl_surface, SDL_TRUE, src->src_color_key.dwColorSpaceLowValue);
        }
    }

    SDL_BlitSurface(src->sdl_surface, src_ptr, dst->sdl_surface, &dst_sdl);

    if (trans & DDBLTFAST_SRCCOLORKEY) {
        SDL_SetColorKey(src->sdl_surface, SDL_FALSE, 0);
    }

    return DD_OK;
}

static HRESULT surface_DeleteAttachedSurface(IDirectDrawSurface* this_ptr, DWORD flags,
                                              IDirectDrawSurface* attached_surface) {
    (void)flags;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (shim->back_buffer == reinterpret_cast<DDSurface_ShimData*>(attached_surface)) {
        shim->back_buffer = nullptr;
    }
    return DD_OK;
}

static HRESULT surface_EnumAttachedSurfaces(IDirectDrawSurface* this_ptr, void* context,
                                              void* enum_callback) {
    (void)this_ptr; (void)context; (void)enum_callback;
    return DD_OK;
}

static HRESULT surface_EnumOverlayZOrders(IDirectDrawSurface* this_ptr, DWORD flags,
                                            void* context, void* enum_callback) {
    (void)this_ptr; (void)flags; (void)context; (void)enum_callback;
    return DD_OK;
}

static HRESULT surface_Flip(IDirectDrawSurface* this_ptr,
                             IDirectDrawSurface* override_surface, DWORD flags) {
    (void)flags;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    DDSurface_ShimData* source = shim;

    if (override_surface) {
        source = reinterpret_cast<DDSurface_ShimData*>(override_surface);
    } else if (shim->back_buffer) {
        source = shim->back_buffer;
    }

    // Update the texture from the surface pixels and present
    if (source->sdl_surface && shim->ddraw && shim->ddraw->renderer) {
        SDL_Texture* tex = source->sdl_texture ? source->sdl_texture : shim->sdl_texture;
        if (tex) {
            SDL_UpdateTexture(tex, nullptr, source->sdl_surface->pixels,
                             source->sdl_surface->pitch);
            SDL_RenderClear(shim->ddraw->renderer);
            SDL_RenderCopy(shim->ddraw->renderer, tex, nullptr, nullptr);
            SDL_RenderPresent(shim->ddraw->renderer);
        }
    }

    return DD_OK;
}

static HRESULT surface_GetAttachedSurface(IDirectDrawSurface* this_ptr, DDSCAPS* caps,
                                            IDirectDrawSurface** attached_surface) {
    (void)caps;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (shim->back_buffer) {
        *attached_surface = reinterpret_cast<IDirectDrawSurface*>(shim->back_buffer);
        shim->back_buffer->ref_count++;
        return DD_OK;
    }
    return DDERR_GENERIC;
}

static HRESULT surface_GetBltStatus(IDirectDrawSurface* this_ptr, DWORD flags) {
    (void)this_ptr; (void)flags;
    return DD_OK;
}

static HRESULT surface_GetCaps(IDirectDrawSurface* this_ptr, DDSCAPS* caps) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    *caps = shim->desc.ddsCaps;
    return DD_OK;
}

static HRESULT surface_GetClipper(IDirectDrawSurface* this_ptr, IDirectDrawClipper** clipper) {
    (void)this_ptr; (void)clipper;
    return DDERR_UNSUPPORTED;
}

static HRESULT surface_GetColorKey(IDirectDrawSurface* this_ptr, DWORD flags, void* color_key) {
    (void)flags;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (shim->has_color_key && color_key) {
        memcpy(color_key, &shim->src_color_key, sizeof(DDCOLORKEY));
        return DD_OK;
    }
    return DDERR_GENERIC;
}

static HRESULT surface_GetDC(IDirectDrawSurface* this_ptr, void* device_context) {
    (void)this_ptr; (void)device_context;
    return DDERR_UNSUPPORTED;
}

static HRESULT surface_GetFlipStatus(IDirectDrawSurface* this_ptr, DWORD flags) {
    (void)this_ptr; (void)flags;
    return DD_OK;
}

static HRESULT surface_GetOverlayPosition(IDirectDrawSurface* this_ptr, DWORD* x_pos, DWORD* y_pos) {
    (void)this_ptr;
    if (x_pos) *x_pos = 0;
    if (y_pos) *y_pos = 0;
    return DD_OK;
}

static HRESULT surface_GetPalette(IDirectDrawSurface* this_ptr, IUnknown** palette) {
    (void)this_ptr; (void)palette;
    return DDERR_UNSUPPORTED;
}

static HRESULT surface_GetPixelFormat(IDirectDrawSurface* this_ptr, void* pixel_format) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    memcpy(pixel_format, &shim->desc.ddpfPixelFormat, sizeof(DDPIXELFORMAT));
    return DD_OK;
}

static HRESULT surface_GetSurfaceDesc(IDirectDrawSurface* this_ptr, DDSURFACEDESC* surface_desc) {
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    memcpy(surface_desc, &shim->desc, sizeof(DDSURFACEDESC));
    return DD_OK;
}

static HRESULT surface_Initialize(IDirectDrawSurface* this_ptr, void* dd_interface,
                                   DDSURFACEDESC* surface_desc) {
    (void)this_ptr; (void)dd_interface; (void)surface_desc;
    return DD_OK;
}

static HRESULT surface_IsLost(IDirectDrawSurface* this_ptr) {
    (void)this_ptr;
    return DD_OK; // Never lost under SDL
}

static HRESULT surface_Lock(IDirectDrawSurface* this_ptr, RECT* dest_rect,
                             DDSURFACEDESC* surface_desc, DWORD flags, void* unused) {
    (void)dest_rect; (void)flags; (void)unused;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);

    if (!shim->sdl_surface) return DDERR_GENERIC;

    if (SDL_MUSTLOCK(shim->sdl_surface)) {
        SDL_LockSurface(shim->sdl_surface);
    }
    shim->is_locked = 1;

    // Fill in the surface description with pixel access info
    memcpy(surface_desc, &shim->desc, sizeof(DDSURFACEDESC));
    surface_desc->lpSurface = shim->sdl_surface->pixels;
    surface_desc->dwPitchOrLinearSize.lPitch = shim->sdl_surface->pitch;

    return DD_OK;
}

static HRESULT surface_ReleaseDC(IDirectDrawSurface* this_ptr, void* device_context) {
    (void)this_ptr; (void)device_context;
    return DD_OK;
}

static HRESULT surface_Restore(IDirectDrawSurface* this_ptr) {
    (void)this_ptr;
    return DD_OK; // No restore needed under SDL
}

static HRESULT surface_SetClipper(IDirectDrawSurface* this_ptr, IDirectDrawClipper* clipper) {
    (void)this_ptr; (void)clipper;
    return DD_OK;
}

static HRESULT surface_SetColorKey(IDirectDrawSurface* this_ptr, DWORD flags, void* color_key) {
    (void)flags;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);
    if (color_key) {
        memcpy(&shim->src_color_key, color_key, sizeof(DDCOLORKEY));
        shim->has_color_key = 1;
        if (shim->sdl_surface) {
            SDL_SetColorKey(shim->sdl_surface, SDL_TRUE,
                           shim->src_color_key.dwColorSpaceLowValue);
        }
    } else {
        shim->has_color_key = 0;
        if (shim->sdl_surface) {
            SDL_SetColorKey(shim->sdl_surface, SDL_FALSE, 0);
        }
    }
    return DD_OK;
}

static HRESULT surface_SetOverlayPosition(IDirectDrawSurface* this_ptr, DWORD x_pos, DWORD y_pos) {
    (void)this_ptr; (void)x_pos; (void)y_pos;
    return DD_OK;
}

static HRESULT surface_SetPalette(IDirectDrawSurface* this_ptr, IUnknown* palette) {
    (void)this_ptr; (void)palette;
    return DD_OK;
}

static HRESULT surface_Unlock(IDirectDrawSurface* this_ptr, void* surface_ptr) {
    (void)surface_ptr;
    DDSurface_ShimData* shim = reinterpret_cast<DDSurface_ShimData*>(this_ptr);

    if (shim->is_locked && shim->sdl_surface) {
        if (SDL_MUSTLOCK(shim->sdl_surface)) {
            SDL_UnlockSurface(shim->sdl_surface);
        }
        shim->is_locked = 0;

        // For primary surface, update the texture after unlock
        if (shim->is_primary && shim->sdl_texture && shim->ddraw && shim->ddraw->renderer) {
            SDL_UpdateTexture(shim->sdl_texture, nullptr,
                             shim->sdl_surface->pixels, shim->sdl_surface->pitch);
            SDL_RenderClear(shim->ddraw->renderer);
            SDL_RenderCopy(shim->ddraw->renderer, shim->sdl_texture, nullptr, nullptr);
            SDL_RenderPresent(shim->ddraw->renderer);
        }
    }

    return DD_OK;
}

static HRESULT surface_UpdateOverlay(IDirectDrawSurface* this_ptr, RECT* src_rect,
                                      IDirectDrawSurface* dest_surface, RECT* dest_rect,
                                      DWORD flags, void* overlay_fx) {
    (void)this_ptr; (void)src_rect; (void)dest_surface; (void)dest_rect;
    (void)flags; (void)overlay_fx;
    return DD_OK;
}

static HRESULT surface_UpdateOverlayDisplay(IDirectDrawSurface* this_ptr, DWORD flags) {
    (void)this_ptr; (void)flags;
    return DD_OK;
}

static HRESULT surface_UpdateOverlayZOrder(IDirectDrawSurface* this_ptr, DWORD flags,
                                            IDirectDrawSurface* reference_surface) {
    (void)this_ptr; (void)flags; (void)reference_surface;
    return DD_OK;
}

// =============================================================================
// Vtable population
// =============================================================================

static void populate_ddraw_vtable(IDirectDraw_vtable* vt) {
    vt->QueryInterface   = (IUnknown_QueryInterface*)ddraw_QueryInterface;
    vt->AddRef           = (IUnknown_AddRef*)ddraw_AddRef;
    vt->Release          = (IUnknown_Release*)ddraw_Release;
    vt->Compact          = ddraw_Compact;
    vt->CreateClipper    = ddraw_CreateClipper;
    vt->CreatePalette    = ddraw_CreatePalette;
    vt->CreateSurface    = ddraw_CreateSurface;
    vt->DuplicateSurface = ddraw_DuplicateSurface;
    vt->EnumDisplayModes = nullptr; // Not used
    vt->EnumSurfaces     = nullptr; // Not used
    vt->FlipToGDISurface = ddraw_FlipToGDISurface;
    vt->GetCaps          = nullptr; // Not used
    vt->GetDisplayMode   = ddraw_GetDisplayMode;
    vt->GetFourCCCodes   = ddraw_GetFourCCCodes;
    vt->GetGDISurface    = ddraw_GetGDISurface;
    vt->GetMonitorFrequency   = ddraw_GetMonitorFrequency;
    vt->GetScanLine           = ddraw_GetScanLine;
    vt->GetVerticalBlankStatus = ddraw_GetVerticalBlankStatus;
    vt->Initialize            = ddraw_Initialize;
    vt->RestoreDisplayMode    = ddraw_RestoreDisplayMode;
    vt->SetCooperativeLevel   = ddraw_SetCooperativeLevel;
    vt->SetDisplayMode        = ddraw_SetDisplayMode;
    vt->WaitForVerticalBlank  = ddraw_WaitForVerticalBlank;
}

static void populate_surface_vtable(IDirectDrawSurface_vtable* vt) {
    vt->QueryInterface         = (IUnknown_QueryInterface*)surface_QueryInterface;
    vt->AddRef                 = (IUnknown_AddRef*)surface_AddRef;
    vt->Release                = (IUnknown_Release*)surface_Release;
    vt->AddAttachedSurface     = surface_AddAttachedSurface;
    vt->AddOverlayDirtyRect    = surface_AddOverlayDirtyRect;
    vt->Blt                    = surface_Blt;
    vt->BltBatch               = surface_BltBatch;
    vt->BltFast                = surface_BltFast;
    vt->DeleteAttachedSurface  = surface_DeleteAttachedSurface;
    vt->EnumAttachedSurfaces   = surface_EnumAttachedSurfaces;
    vt->EnumOverlayZOrders     = surface_EnumOverlayZOrders;
    vt->Flip                   = surface_Flip;
    vt->GetAttachedSurface     = surface_GetAttachedSurface;
    vt->GetBltStatus           = surface_GetBltStatus;
    vt->GetCaps                = surface_GetCaps;
    vt->GetClipper             = surface_GetClipper;
    vt->GetColorKey            = surface_GetColorKey;
    vt->GetDC                  = surface_GetDC;
    vt->GetFlipStatus          = surface_GetFlipStatus;
    vt->GetOverlayPosition     = surface_GetOverlayPosition;
    vt->GetPalette             = surface_GetPalette;
    vt->GetPixelFormat         = surface_GetPixelFormat;
    vt->GetSurfaceDesc         = surface_GetSurfaceDesc;
    vt->Initialize             = surface_Initialize;
    vt->IsLost                 = surface_IsLost;
    vt->Lock                   = surface_Lock;
    vt->ReleaseDC              = surface_ReleaseDC;
    vt->Restore                = surface_Restore;
    vt->SetClipper             = surface_SetClipper;
    vt->SetColorKey            = surface_SetColorKey;
    vt->SetOverlayPosition     = surface_SetOverlayPosition;
    vt->SetPalette             = surface_SetPalette;
    vt->Unlock                 = surface_Unlock;
    vt->UpdateOverlay          = surface_UpdateOverlay;
    vt->UpdateOverlayDisplay   = surface_UpdateOverlayDisplay;
    vt->UpdateOverlayZOrder    = surface_UpdateOverlayZOrder;
}

// =============================================================================
// Public API - DirectDrawCreate
// =============================================================================

HRESULT DirectDrawCreate(GUID* lpGUID, LPDIRECTDRAW* lplpDD, IUnknown* pUnkOuter) {
    (void)lpGUID; (void)pUnkOuter;

    if (!lplpDD) return DDERR_INVALIDPARAMS;

    // Initialize SDL video if needed
    if (!(SDL_WasInit(SDL_INIT_VIDEO))) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            return DDERR_GENERIC;
        }
    }

    DDraw_ShimData* shim = (DDraw_ShimData*)calloc(1, sizeof(DDraw_ShimData));
    if (!shim) return DDERR_OUTOFMEMORY;

    populate_ddraw_vtable(&shim->vtable);
    shim->ref_count = 1;

    // Default display mode
    SDL_DisplayMode mode;
    if (SDL_GetCurrentDisplayMode(0, &mode) == 0) {
        shim->display_width = mode.w;
        shim->display_height = mode.h;
        shim->display_bpp = SDL_BITSPERPIXEL(mode.format);
    } else {
        shim->display_width = 640;
        shim->display_height = 480;
        shim->display_bpp = 16;
    }

    g_ddraw_shim = shim;
    *lplpDD = reinterpret_cast<IDirectDraw*>(shim);
    return DD_OK;
}

// =============================================================================
// Shim Init - Wire up global function pointer
// =============================================================================

#include "globals/globals_610000.h"

void shims_init_ddraw() {
    g_DirectDrawCreateFunc = (DIRECT_DRAW_CREATE_FUNC*)DirectDrawCreate;
}
