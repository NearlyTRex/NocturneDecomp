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
// Only the methods the game calls are implemented (wddvmem.cpp: the display
// mode, a primary flip chain and its back buffer, Lock/Unlock/Flip, a palette
// it never reads back); the rest of each vtable is null.
//

#include "system/ddraw.h"

#include "core/debug_log.h"
#include "directx/ddraw.h"
#include "gl/gl_present.h"
#include "gl/window_mode.h"
#include "shim_config.h"

#include <SDL.h>
#include <cstring>

extern SDL_Window *g_sdlWindow;
extern bool g_sdlWindowReadyToShow;

// =============================================================================
// DirectDraw constants (from the original Windows SDK)
// =============================================================================

#define DD_OK 0
#define DDERR_GENERIC 0x80004005
#define DDERR_INVALIDPARAMS 0x80070057
#define DDERR_OUTOFMEMORY 0x8007000E

// DDSD flags
#define DDSD_CAPS 0x00000001
#define DDSD_HEIGHT 0x00000002
#define DDSD_WIDTH 0x00000004
#define DDSD_PITCH 0x00000008
#define DDSD_PIXELFORMAT 0x00001000

// DDSCAPS flags
#define DDSCAPS_PRIMARYSURFACE 0x00000200
#define DDSCAPS_BACKBUFFER 0x00000004
#define DDSCAPS_FLIP 0x00000010
#define DDSCAPS_COMPLEX 0x00000008

// DDSCL flags
#define DDSCL_FULLSCREEN 0x00000001
#define DDSCL_EXCLUSIVE 0x00000010

// DDPF flags
#define DDPF_RGB 0x00000040

// =============================================================================
// Internal shim data structures
// =============================================================================

struct DDraw_ShimData;
struct DDSurface_ShimData;

// Forward declare vtable population
static void populate_ddraw_vtable(IDirectDraw_vtable *vt);
static void populate_surface_vtable(IDirectDrawSurface_vtable *vt);

// No reference count: the game never adds a reference, so its one Release
// frees it.
struct DDraw_ShimData {
    IDirectDraw_vtable *vtable;
    IDirectDraw_vtable vtable_data;
    SDL_Window *window;
    SDL_Renderer *renderer;
    HWND cooperative_hwnd;
    DWORD cooperative_level;
    int display_width;
    int display_height;
    int display_bpp;
};

struct DDSurface_ShimData {
    IDirectDrawSurface_vtable *vtable;
    IDirectDrawSurface_vtable vtable_data;
    ULONG ref_count;
    DDraw_ShimData *ddraw;
    SDL_Surface *sdl_surface;
    SDL_Texture *sdl_texture;
    DDSURFACEDESC desc;
    int is_primary;
    int is_locked;
    DDSurface_ShimData *back_buffer;
};

// Global reference to the ddraw shim (for surface -> renderer access)
static DDraw_ShimData *g_ddraw_shim = nullptr;

// =============================================================================
// IUnknown methods (shared)
// =============================================================================

static ULONG ddraw_Release(IDirectDraw *this_ptr) {
    DDraw_ShimData *shim = reinterpret_cast<DDraw_ShimData *>(this_ptr);
    if (shim->renderer)
        SDL_DestroyRenderer(shim->renderer);
    if (g_ddraw_shim == shim)
        g_ddraw_shim = nullptr;
    delete shim;
    return 0;
}

// The back buffer GetAttachedSurface hands out holds a reference of its own,
// which the game releases as well as the chain's.
static ULONG surface_Release(IDirectDrawSurface *this_ptr) {
    DDSurface_ShimData *shim = reinterpret_cast<DDSurface_ShimData *>(this_ptr);
    if (--shim->ref_count == 0) {
        if (shim->sdl_texture)
            SDL_DestroyTexture(shim->sdl_texture);
        SDL_FreeSurface(shim->sdl_surface);
        if (shim->back_buffer) {
            surface_Release(reinterpret_cast<IDirectDrawSurface *>(shim->back_buffer));
        }
        delete shim;
        return 0;
    }
    return shim->ref_count;
}

// =============================================================================
// IDirectDraw methods
// =============================================================================

// Minimal palette stub — needs a vtable with at least Release so cleanup
// code that does g_DirectDrawUnknown->vtable->Release() doesn't null-deref.
struct PaletteShimData {
    IUnknown_vtable *vtable;
    IUnknown_vtable vtable_data;
};

static ULONG palette_Release(IUnknown *this_ptr) {
    delete reinterpret_cast<PaletteShimData *>(this_ptr);
    return 0;
}

static HRESULT ddraw_CreatePalette(IDirectDraw *this_ptr, DWORD flags, PALETTEENTRY *entries,
                                   IDirectDrawPalette **palette, IUnknown *outer) {
    (void)this_ptr;
    (void)entries;
    (void)outer;
    PaletteShimData *pal = new PaletteShimData();
    pal->vtable_data.Release = palette_Release;
    pal->vtable = &pal->vtable_data;
    *palette = reinterpret_cast<IDirectDrawPalette *>(pal);
    DLOG("render", "CreatePalette: %p flags=0x%x", (void *)pal, (unsigned)flags);
    return DD_OK;
}

static SDL_Texture *create_present_texture(DDraw_ShimData *ddraw, int width, int height, int bpp);

// Null if SDL cannot make a surface of that size. One that is `presented` (the
// primary and its back buffer) gets a texture to be shown through.
static DDSurface_ShimData *create_surface_shim(DDraw_ShimData *ddraw, int width, int height,
                                               int bpp, DWORD caps, bool presented) {
    // Create SDL surface with appropriate pixel format
    Uint32 rmask, gmask, bmask, amask;
    if (bpp == 16) {
        rmask = 0xF800;
        gmask = 0x07E0;
        bmask = 0x001F;
        amask = 0;
    } else if (bpp == 24) {
        rmask = 0xFF0000;
        gmask = 0x00FF00;
        bmask = 0x0000FF;
        amask = 0;
    } else { // 32-bit
        rmask = 0x00FF0000;
        gmask = 0x0000FF00;
        bmask = 0x000000FF;
        amask = 0xFF000000;
    }

    SDL_Surface *sdl_surface =
        SDL_CreateRGBSurface(0, width, height, bpp, rmask, gmask, bmask, amask);
    if (!sdl_surface)
        return nullptr;

    DDSurface_ShimData *surf = new DDSurface_ShimData();
    populate_surface_vtable(&surf->vtable_data);
    surf->vtable = &surf->vtable_data;
    surf->ref_count = 1;
    surf->ddraw = ddraw;
    surf->sdl_surface = sdl_surface;

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
    surf->desc.ddsCaps.dwCaps = caps;

    if (presented)
        surf->sdl_texture = create_present_texture(ddraw, width, height, bpp);
    return surf;
}

// The streaming texture a surface is presented through on the SDL renderer;
// none while GL owns the window, which makes no renderer. Alpha is ignored:
// the game writes alpha=0 in every pixel (MMX scanline / moon / font paths
// don't populate the alpha byte), and with BLENDMODE_BLEND, the default on
// some drivers, that pre-multiplies RGB by alpha and everything comes out
// zeroed on the red/green channels.
static SDL_Texture *create_present_texture(DDraw_ShimData *ddraw, int width, int height, int bpp) {
    if (!ddraw->renderer)
        return nullptr;
    Uint32 format = (bpp == 16)   ? SDL_PIXELFORMAT_RGB565
                    : (bpp == 24) ? SDL_PIXELFORMAT_RGB24
                                  : SDL_PIXELFORMAT_ARGB8888;
    SDL_Texture *texture =
        SDL_CreateTexture(ddraw->renderer, format, SDL_TEXTUREACCESS_STREAMING, width, height);
    SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_NONE);
    return texture;
}

static HRESULT ddraw_CreateSurface(IDirectDraw *this_ptr, DDSURFACEDESC *desc,
                                   IDirectDrawSurface **surface, IUnknown *outer) {
    (void)outer;
    DDraw_ShimData *ddraw = reinterpret_cast<DDraw_ShimData *>(this_ptr);

    int width = ddraw->display_width;
    int height = ddraw->display_height;
    int bpp = ddraw->display_bpp;

    if (desc->dwFlags & DDSD_WIDTH)
        width = (int)desc->dwWidth;
    if (desc->dwFlags & DDSD_HEIGHT)
        height = (int)desc->dwHeight;

    DWORD caps = 0;
    if (desc->dwFlags & DDSD_CAPS)
        caps = desc->ddsCaps.dwCaps;

    const bool primary = (caps & DDSCAPS_PRIMARYSURFACE) != 0;
    DDSurface_ShimData *surf = create_surface_shim(ddraw, width, height, bpp, caps, primary);
    if (!surf) {
        DLOG("render", "CreateSurface: OUT_OF_MEMORY (%dx%d bpp=%d caps=0x%x)", width, height, bpp,
             (unsigned)caps);
        return DDERR_OUTOFMEMORY;
    }
    surf->is_primary = primary;
    DLOG("render", "CreateSurface: %p %dx%d bpp=%d caps=0x%x flags=0x%x", (void *)surf, width,
         height, bpp, (unsigned)caps, (unsigned)desc->dwFlags);

    // A flip chain is the primary and one back buffer, however many were asked
    // for. One SDL could not make is missing, as GetAttachedSurface then says.
    if (primary && (caps & DDSCAPS_COMPLEX) && (caps & DDSCAPS_FLIP)) {
        surf->back_buffer =
            create_surface_shim(ddraw, width, height, bpp, DDSCAPS_BACKBUFFER, true);
    }

    *surface = reinterpret_cast<IDirectDrawSurface *>(surf);
    return DD_OK;
}

static HRESULT ddraw_RestoreDisplayMode(IDirectDraw *this_ptr) {
    DDraw_ShimData *ddraw = reinterpret_cast<DDraw_ShimData *>(this_ptr);
    if (ddraw->window) {
        // DirectDraw's RestoreDisplayMode undoes SetDisplayMode's *display mode*
        // change; it is not a request to become a window. Forcing windowed here
        // silently overrode the user's setting, and the engine calls this from
        // every graphics reinit/reset path — resetGraphicsSystem (which
        // CGame::setGameRes goes through), reinitializeDirectDraw, videoRestore
        // — so a borderless or fullscreen window dropped back to windowed on
        // entering a mission, and only looked right again once the menu
        // re-applied it. Re-assert the user's choice instead.
        nocturne_window_mode_apply(ddraw->window);
    }
    return DD_OK;
}

static HRESULT ddraw_SetCooperativeLevel(IDirectDraw *this_ptr, HWND window, DWORD flags) {
    DDraw_ShimData *ddraw = reinterpret_cast<DDraw_ShimData *>(this_ptr);
    ddraw->cooperative_hwnd = window;
    DLOG("render", "SetCooperativeLevel: hwnd=%p flags=0x%x (FULLSCREEN=%d EXCLUSIVE=%d)",
         (void *)window, (unsigned)flags, (int)((flags & DDSCL_FULLSCREEN) != 0),
         (int)((flags & DDSCL_EXCLUSIVE) != 0));
    // The game always asks for DDSCL_FULLSCREEN — DirectDraw exclusive mode is
    // the only thing it knows. Strip it and let the user's window-mode setting
    // decide instead (see shims/window_mode.h); honouring the game's request
    // would mean no way to run windowed at all.
    flags &= ~DDSCL_FULLSCREEN;
    ddraw->cooperative_level = flags;
    return DD_OK;
}

static HRESULT ddraw_SetDisplayMode(IDirectDraw *this_ptr, DWORD requested_width,
                                    DWORD requested_height, DWORD requested_bpp) {
    DDraw_ShimData *ddraw = reinterpret_cast<DDraw_ShimData *>(this_ptr);
    // A display mode is a few thousand pixels and a few dozen bits; the rest of
    // this works in the ints the shim data and SDL take.
    const int width = (int)requested_width;
    const int height = (int)requested_height;
    const int bpp = (int)requested_bpp;
    DLOG("render", "SetDisplayMode: %ux%u bpp=%u (prev=%dx%d bpp=%d)", (unsigned)width,
         (unsigned)height, (unsigned)bpp, ddraw->display_width, ddraw->display_height,
         ddraw->display_bpp);
    ddraw->display_width = width;
    ddraw->display_height = height;
    ddraw->display_bpp = bpp;

    // The renderer keeps a logical size at the render resolution so everything
    // still targets the framebuffer the game drew, and the presenter scales
    // that to the window.
    //
    // The window itself is sized to the resolution the player chose, which is
    // not the resolution being rendered. The front end, the opening movie and
    // the Options screen all run at 640x480 whatever the game is set to, so
    // sizing from the render resolution makes the window shrink on the way into
    // each of them and grow again on the way out. Only when nothing has stated
    // a preference does the render resolution decide, which is the case for the
    // very first mode set of a fresh profile.
    int win_w = width * NOCTURNE_WINDOW_SCALE;
    int win_h = height * NOCTURNE_WINDOW_SCALE;
    {
        int pref_w = 0, pref_h = 0;
        if (nocturne_window_preferred_size(&pref_w, &pref_h)) {
            win_w = pref_w;
            win_h = pref_h;
        }
    }

    if (!ddraw->window) {
        // The game's window: winMain makes it before anything reaches
        // DirectDraw, and quits if it cannot.
        ddraw->window = g_sdlWindow;
        if (g_nocturne_fixed_display == 0)
            SDL_SetWindowSize(ddraw->window, win_w, win_h);

        // GL owns the window's pixels when it comes up; SDL_Renderer is only
        // created as the fallback, since the two cannot share a window.
        if (nocturne_gl_init(ddraw->window)) {
            nocturne_gl_set_logical_size(width, height);
        } else {
            ddraw->renderer = SDL_CreateRenderer(
                ddraw->window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
            if (!ddraw->renderer) {
                ddraw->renderer = SDL_CreateRenderer(ddraw->window, -1, 0);
            }
            if (!ddraw->renderer)
                return DDERR_GENERIC;

            SDL_RenderSetLogicalSize(ddraw->renderer, width, height);
            SDL_RenderSetIntegerScale(ddraw->renderer, SDL_TRUE);
        }
    } else {
        // Every mode change lands here, and most of them do not move the
        // window at all now that its size is the player's choice rather than
        // the render resolution. Resizing to the size it already has still
        // costs a resize event and a visible flicker on some window managers.
        int cur_w = 0, cur_h = 0;
        SDL_GetWindowSize(ddraw->window, &cur_w, &cur_h);
        if ((cur_w != win_w || cur_h != win_h) && g_nocturne_fixed_display == 0) {
            SDL_SetWindowSize(ddraw->window, win_w, win_h);
        }
        if (nocturne_gl_is_active()) {
            nocturne_gl_set_logical_size(width, height);
        } else {
            SDL_RenderSetLogicalSize(ddraw->renderer, width, height);
            SDL_RenderSetIntegerScale(ddraw->renderer, SDL_TRUE);
        }
    }

    // Push the user's window mode after sizing, so windowed mode gets the new
    // size and fullscreen/borderless override it.
    nocturne_window_mode_apply(ddraw->window);

    // Window was created hidden by user32 to suppress a flash at the default
    // size; reveal it now that we're at the real game resolution.
    g_sdlWindowReadyToShow = true;
    SDL_ShowWindow(ddraw->window);

    return DD_OK;
}

// =============================================================================
// IDirectDrawSurface methods
// =============================================================================

// Puts `surface` on screen: through GL when it owns the window, otherwise by
// streaming it into `texture` on the SDL renderer. A texture is only made for
// a renderer, which lasts as long as the DirectDraw object.
static void present_surface(SDL_Surface *surface, SDL_Texture *texture, DDraw_ShimData *ddraw) {
    if (nocturne_gl_is_active()) {
        nocturne_gl_present_framebuffer(surface->pixels, surface->w, surface->h, surface->pitch,
                                        surface->format->BitsPerPixel);
    } else if (texture) {
        SDL_UpdateTexture(texture, nullptr, surface->pixels, surface->pitch);
        SDL_RenderClear(ddraw->renderer);
        SDL_RenderCopy(ddraw->renderer, texture, nullptr, nullptr);
        SDL_RenderPresent(ddraw->renderer);
    }
}

static HRESULT surface_Flip(IDirectDrawSurface *this_ptr, IDirectDrawSurface *override_surface,
                            DWORD flags) {
    (void)flags;
    DDSurface_ShimData *shim = reinterpret_cast<DDSurface_ShimData *>(this_ptr);
    DDSurface_ShimData *source = shim;

    if (override_surface) {
        source = reinterpret_cast<DDSurface_ShimData *>(override_surface);
    } else if (shim->back_buffer) {
        source = shim->back_buffer;
    }
    SDL_Texture *texture = source->sdl_texture ? source->sdl_texture : shim->sdl_texture;
    DLOG_RL("render", 4, 300, "Flip surface=%p override=%p source=%p tex=%p flags=0x%x",
            (void *)shim, (void *)override_surface, (void *)source, (void *)texture,
            (unsigned)flags);

    present_surface(source->sdl_surface, texture, shim->ddraw);
    return DD_OK;
}

static HRESULT surface_GetAttachedSurface(IDirectDrawSurface *this_ptr, DDSCAPS *caps,
                                          IDirectDrawSurface **attached_surface) {
    (void)caps;
    DDSurface_ShimData *shim = reinterpret_cast<DDSurface_ShimData *>(this_ptr);
    if (shim->back_buffer) {
        *attached_surface = reinterpret_cast<IDirectDrawSurface *>(shim->back_buffer);
        shim->back_buffer->ref_count++;
        return DD_OK;
    }
    return DDERR_GENERIC;
}

// The pixels are the SDL surface's own: an RGB surface without RLE never
// needs SDL_LockSurface, and these never have a color key to be RLE'd for.
// The game always locks the whole surface.
static HRESULT surface_Lock(IDirectDrawSurface *this_ptr, RECT *dest_rect,
                            DDSURFACEDESC *surface_desc, DWORD flags, void *unused) {
    (void)dest_rect;
    (void)unused;
    DDSurface_ShimData *shim = reinterpret_cast<DDSurface_ShimData *>(this_ptr);
    DLOG_RL("render", 8, 500, "Lock surface=%p flags=0x%x", (void *)shim, (unsigned)flags);

    shim->is_locked = 1;

    // Fill in the surface description with pixel access info
    memcpy(surface_desc, &shim->desc, sizeof(DDSURFACEDESC));
    surface_desc->lpSurface = shim->sdl_surface->pixels;
    surface_desc->dwPitchOrLinearSize.lPitch = shim->sdl_surface->pitch;

    return DD_OK;
}

static HRESULT surface_Restore(IDirectDrawSurface *this_ptr) {
    (void)this_ptr;
    return DD_OK; // No restore needed under SDL
}

// The palette is for 8-bit modes, which the game never sets.
static HRESULT surface_SetPalette(IDirectDrawSurface *this_ptr, IUnknown *palette) {
    (void)this_ptr;
    (void)palette;
    return DD_OK;
}

static HRESULT surface_Unlock(IDirectDrawSurface *this_ptr, void *surface_ptr) {
    (void)surface_ptr;
    DDSurface_ShimData *shim = reinterpret_cast<DDSurface_ShimData *>(this_ptr);

    if (shim->is_locked) {
        shim->is_locked = 0;

        // A primary surface is the screen, so unlocking it presents.
        if (shim->is_primary) {
            present_surface(shim->sdl_surface, shim->sdl_texture, shim->ddraw);
        }
    }

    return DD_OK;
}

// =============================================================================
// Vtable population
// =============================================================================

// The slots the game does not call are left null.
static void populate_ddraw_vtable(IDirectDraw_vtable *vt) {
    vt->Release = (IUnknown_Release *)ddraw_Release;
    vt->CreatePalette = ddraw_CreatePalette;
    vt->CreateSurface = ddraw_CreateSurface;
    vt->RestoreDisplayMode = ddraw_RestoreDisplayMode;
    vt->SetCooperativeLevel = ddraw_SetCooperativeLevel;
    vt->SetDisplayMode = ddraw_SetDisplayMode;
}

static void populate_surface_vtable(IDirectDrawSurface_vtable *vt) {
    vt->Release = (IUnknown_Release *)surface_Release;
    vt->Flip = surface_Flip;
    vt->GetAttachedSurface = surface_GetAttachedSurface;
    vt->Lock = surface_Lock;
    vt->Restore = surface_Restore;
    vt->SetPalette = surface_SetPalette;
    vt->Unlock = surface_Unlock;
}

// =============================================================================
// Public API - DirectDrawCreate
// =============================================================================

// The display mode is unset until SetDisplayMode, which the game makes before
// any surface.
HRESULT DirectDrawCreate(GUID *lpGUID, LPDIRECTDRAW *lplpDD, IUnknown *pUnkOuter) {
    (void)lpGUID;
    (void)pUnkOuter;

    if (!lplpDD)
        return DDERR_INVALIDPARAMS;

    // Initialize SDL video if needed
    if (!(SDL_WasInit(SDL_INIT_VIDEO))) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            return DDERR_GENERIC;
        }
    }

    DDraw_ShimData *shim = new DDraw_ShimData();
    populate_ddraw_vtable(&shim->vtable_data);
    shim->vtable = &shim->vtable_data;

    g_ddraw_shim = shim;
    *lplpDD = reinterpret_cast<IDirectDraw *>(shim);
    return DD_OK;
}

// =============================================================================
// Presenting renderer — accessor
// =============================================================================
//
// g_ddraw_shim is file-static because nothing outside this file drives the
// surface chain. The renderer itself is needed by callers that read the
// presented image back, so hand that out alone.

extern "C" SDL_Renderer *nocturne_ddraw_present_renderer(void) {
    if (g_ddraw_shim == nullptr) {
        return nullptr;
    }
    return g_ddraw_shim->renderer;
}

// =============================================================================
// Shim Init - Wire up global function pointer
// =============================================================================

#include "globals/globals_610000.h"

void shims_init_ddraw() {
    g_DirectDrawCreateFunc = (DIRECT_DRAW_CREATE_FUNC *)DirectDrawCreate;
}
