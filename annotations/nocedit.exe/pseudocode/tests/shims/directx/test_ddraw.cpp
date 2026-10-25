// =============================================================================
// DIRECTDRAW — the game's screen: a display mode, a flip chain, Lock and Flip
// =============================================================================
//
// wddvmem.cpp sets a display mode on the window winMain made, asks for a
// primary surface with back buffers, takes the back buffer, draws into it
// between Lock and Unlock, and Flips. What matters is that the window takes the
// player's size, the frame drawn is the frame shown, through GL when it owns
// the window and through an SDL renderer when it does not, and that releasing
// it all leaves nothing behind. Each case calls through the game's own
// vtables, on SDL's dummy video driver.

#include "config/shim_config_video.h"
#include "directx/ddraw.h"
#include "directx_support.h"
#include "gl/window_mode.h"
#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/ddraw.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdint>
#include <cstring>
#include <string>

namespace {

using directx_support::stand;

const HRESULT kOk = 0;
const HRESULT kGeneric = (HRESULT)0x80004005;
const HRESULT kInvalidParams = (HRESULT)0x80070057;
const HRESULT kOutOfMemory = (HRESULT)0x8007000E;

// The flags and caps setScreenResolution asks with.
const DWORD kCapsAndBackBufferCount = 0x21;
const DWORD kFlipChainInVideoMemory = 0x6218;
const DWORD kFlipChainInSystemMemory = 0xa18;
const DWORD kBackBufferCaps = 4;
const DWORD kFullscreenExclusive = 0x11;

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value);
#else
    setenv(name, value, 1);
#endif
}

ULONG release(void *object) {
    IUnknown *unknown = (IUnknown *)object;
    return (*unknown->vtable->Release)(unknown);
}

// SDL's dummy video, the game's window and a DirectDraw object on it, as
// winMain and initializeGraphicsSystem leave them; all of it gone afterwards.
struct Screen {
    IDirectDraw *ddraw = nullptr;

    Screen() {
        stand.reset();
        g_sdlWindowReadyToShow = false;
        set_env("SDL_VIDEODRIVER", "dummy");
        SDL_InitSubSystem(SDL_INIT_VIDEO);
        g_sdlWindow = SDL_CreateWindow("Nocturne", 0, 0, 320, 200, SDL_WINDOW_HIDDEN);
        shims_init_ddraw();
        CHECK_EQ((*g_DirectDrawCreateFunc)(nullptr, &ddraw, nullptr), kOk);
    }
    ~Screen() {
        if (ddraw != nullptr)
            release(ddraw);
        SDL_DestroyWindow(g_sdlWindow);
        g_sdlWindow = nullptr;
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }

    HRESULT set_mode(DWORD width, DWORD height, DWORD bpp) {
        return (*ddraw->vtable->SetDisplayMode)(ddraw, width, height, bpp);
    }

    HRESULT create(DDSURFACEDESC *desc, IDirectDrawSurface **surface) {
        return (*ddraw->vtable->CreateSurface)(ddraw, desc, surface, nullptr);
    }

    // The primary and its back buffer, as setScreenResolution asks for them.
    HRESULT flip_chain(IDirectDrawSurface **primary, DWORD caps = kFlipChainInVideoMemory) {
        DDSURFACEDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(desc);
        desc.dwFlags = kCapsAndBackBufferCount;
        desc.ddsCaps.dwCaps = caps;
        desc.dwBackBufferCount = 2;
        return create(&desc, primary);
    }

    // A plain surface of its own size, presented by nothing.
    HRESULT offscreen(int width, int height, IDirectDrawSurface **surface) {
        DDSURFACEDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(desc);
        desc.dwFlags = 0x7; // DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH
        desc.dwWidth = (DWORD)width;
        desc.dwHeight = (DWORD)height;
        desc.ddsCaps.dwCaps = 0x40; // DDSCAPS_OFFSCREENPLAIN
        return create(&desc, surface);
    }
};

IDirectDrawSurface *back_buffer_of(IDirectDrawSurface *primary) {
    DDSCAPS caps = {kBackBufferCaps};
    IDirectDrawSurface *back = nullptr;
    CHECK_EQ((*primary->vtable->GetAttachedSurface)(primary, &caps, &back), kOk);
    return back;
}

// Locks `surface`, fills its first pixel with `pixel`, unlocks it; the desc.
DDSURFACEDESC draw(IDirectDrawSurface *surface, uint32_t pixel) {
    DDSURFACEDESC desc;
    memset(&desc, 0, sizeof(desc));
    desc.dwSize = sizeof(desc);
    CHECK_EQ((*surface->vtable->Lock)(surface, nullptr, &desc, 1, nullptr), kOk);
    CHECK(desc.lpSurface != nullptr);
    memcpy(desc.lpSurface, &pixel, sizeof(pixel));
    CHECK_EQ((*surface->vtable->Unlock)(surface, nullptr), kOk);
    return desc;
}

} // namespace

// -----------------------------------------------------------------------------
// Coming up
// -----------------------------------------------------------------------------

// With GL owning the window: the window takes the mode's size and is shown,
// the presenter is told the size the game draws at, and the frame drawn into
// the back buffer is the one a Flip shows.
NOCTURNE_TEST(the_screen_comes_up_through_gl_and_a_flip_shows_the_back_buffer) {
    Screen screen;
    stand.gl_init = 1;
    CHECK_EQ(
        (*screen.ddraw->vtable->SetCooperativeLevel)(screen.ddraw, (HWND)1, kFullscreenExclusive),
        kOk);
    CHECK_EQ(screen.set_mode(320, 240, 32), kOk);
    int w = 0, h = 0;
    SDL_GetWindowSize(g_sdlWindow, &w, &h);
    CHECK_EQ(w, 320 * NOCTURNE_WINDOW_SCALE);
    CHECK_EQ(h, 240 * NOCTURNE_WINDOW_SCALE);
    CHECK_EQ(stand.logical_width, 320);
    CHECK_EQ(stand.logical_height, 240);
    CHECK_EQ(stand.mode_applies, 1);
    CHECK(g_sdlWindowReadyToShow);
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_SHOWN) != 0);
    // GL makes no renderer to read the picture back from.
    CHECK(nocturne_ddraw_present_renderer() == nullptr);

    IDirectDrawSurface *primary = nullptr;
    CHECK_EQ(screen.flip_chain(&primary), kOk);
    IDirectDrawSurface *back = back_buffer_of(primary);
    const DDSURFACEDESC desc = draw(back, 0x00123456u);
    CHECK_EQ(desc.dwWidth, 320u);
    CHECK_EQ(desc.dwHeight, 240u);
    CHECK_EQ(desc.dwPitchOrLinearSize.lPitch, 320 * 4);
    CHECK_EQ(desc.ddpfPixelFormat.dwBitCount.dwRGBBitCount, 32u);
    CHECK_EQ(stand.presents, 0); // a back buffer is not the screen

    CHECK_EQ((*primary->vtable->Flip)(primary, nullptr, 1), kOk);
    CHECK_EQ(stand.presents, 1);
    CHECK_EQ(stand.present_width, 320);
    CHECK_EQ(stand.present_bpp, 32);
    CHECK_EQ(stand.present_first_pixel, 0x00123456u);

    // The primary is the screen: unlocking it shows it, and an Unlock with no
    // Lock shows nothing.
    draw(primary, 0x00abcdefu);
    CHECK_EQ(stand.presents, 2);
    CHECK_EQ(stand.present_first_pixel, 0x00abcdefu);
    CHECK_EQ((*primary->vtable->Unlock)(primary, nullptr), kOk);
    CHECK_EQ(stand.presents, 2);

    // Frame after frame, as the game runs: every one is shown.
    for (int frame = 0; frame < 500; ++frame) {
        draw(back, (uint32_t)frame);
        CHECK_EQ((*primary->vtable->Flip)(primary, nullptr, 1), kOk);
    }
    CHECK_EQ(stand.presents, 502);
    CHECK_EQ(stand.present_first_pixel, 499u);

    // The back buffer is released by the game and by the chain.
    CHECK_EQ(release(back), 1u);
    CHECK_EQ(release(primary), 0u);
}

// Without GL the window gets an SDL renderer at the size the game draws at,
// one others can read the picture back from, and a Flip draws through it.
NOCTURNE_TEST(without_gl_the_screen_is_drawn_through_an_sdl_renderer) {
    Screen screen;
    CHECK_EQ(screen.set_mode(64, 48, 16), kOk);
    SDL_Renderer *renderer = nocturne_ddraw_present_renderer();
    CHECK(renderer != nullptr);
    int lw = 0, lh = 0;
    SDL_RenderGetLogicalSize(renderer, &lw, &lh);
    CHECK_EQ(lw, 64);
    CHECK_EQ(lh, 48);

    IDirectDrawSurface *primary = nullptr;
    CHECK_EQ(screen.flip_chain(&primary, kFlipChainInSystemMemory), kOk);
    IDirectDrawSurface *back = back_buffer_of(primary);
    const DDSURFACEDESC desc = draw(back, 0xf800u);
    CHECK_EQ(desc.ddpfPixelFormat.dwRedYMask.dwRBitMask, 0xf800u);
    CHECK_EQ((*primary->vtable->Flip)(primary, nullptr, 1), kOk);
    draw(primary, 0x07e0u);
    CHECK_EQ(stand.presents, 0);
    // Drawn: the top-left pixel of what was presented is green, as near full
    // as 565's six bits of it widen to.
    Uint32 shown = 0;
    SDL_Rect corner = {0, 0, 1, 1};
    CHECK_EQ(SDL_RenderReadPixels(renderer, &corner, SDL_PIXELFORMAT_RGB888, &shown, 4), 0);
    CHECK_EQ(shown & 0x00ff00ffu, 0u);
    CHECK(((shown >> 8) & 0xffu) >= 0xf0u);

    release(back);
    release(primary);
    release(screen.ddraw);
    screen.ddraw = nullptr;
    CHECK(nocturne_ddraw_present_renderer() == nullptr);
}

// A window that already has a renderer cannot be given another, and without
// GL there is then nothing to draw with.
NOCTURNE_TEST(a_window_that_cannot_take_a_renderer_fails_the_mode) {
    Screen screen;
    SDL_Renderer *taken = SDL_CreateRenderer(g_sdlWindow, -1, SDL_RENDERER_SOFTWARE);
    CHECK(taken != nullptr);
    CHECK_EQ(screen.set_mode(64, 48, 32), kGeneric);
    SDL_DestroyRenderer(taken);
}

// A later mode keeps the window the player sized, resizing only when the size
// is to change, and tells whichever presenter draws the new size.
NOCTURNE_TEST(a_later_mode_resizes_only_when_the_size_changes) {
    for (int gl : {1, 0}) {
        Screen screen;
        stand.gl_init = gl;
        stand.preferred_width = 800;
        stand.preferred_height = 600;
        CHECK_EQ(screen.set_mode(640, 480, 32), kOk);
        int w = 0, h = 0;
        SDL_GetWindowSize(g_sdlWindow, &w, &h);
        CHECK_EQ(w, 800);
        CHECK_EQ(h, 600);

        CHECK_EQ(screen.set_mode(320, 240, 32), kOk); // the same window size
        SDL_GetWindowSize(g_sdlWindow, &w, &h);
        CHECK_EQ(w, 800);
        stand.preferred_height = 700; // the height alone
        CHECK_EQ(screen.set_mode(320, 240, 32), kOk);
        SDL_GetWindowSize(g_sdlWindow, &w, &h);
        CHECK_EQ(h, 700);
        stand.preferred_width = 1024;
        stand.preferred_height = 768;
        CHECK_EQ(screen.set_mode(512, 384, 32), kOk);
        SDL_GetWindowSize(g_sdlWindow, &w, &h);
        CHECK_EQ(w, 1024);
        CHECK_EQ(h, 768);
        if (gl) {
            CHECK_EQ(stand.logical_width, 512);
        } else {
            int lw = 0, lh = 0;
            SDL_RenderGetLogicalSize(nocturne_ddraw_present_renderer(), &lw, &lh);
            CHECK_EQ(lw, 512);
            CHECK_EQ(lh, 384);
        }
        CHECK_EQ(stand.mode_applies, 4);
    }
}

// Where the window is the screen, a mode never sizes it: neither the first nor
// a later one.
NOCTURNE_TEST(a_fixed_display_is_never_resized) {
    Screen screen;
    stand.preferred_width = 800;
    stand.preferred_height = 600;
    g_nocturne_fixed_display = 1;
    CHECK_EQ(screen.set_mode(640, 480, 32), kOk);
    stand.preferred_width = 1024;
    CHECK_EQ(screen.set_mode(320, 240, 32), kOk);
    g_nocturne_fixed_display = 0;
    int w = 0, h = 0;
    SDL_GetWindowSize(g_sdlWindow, &w, &h);
    CHECK_EQ(w, 320);
    CHECK_EQ(h, 200);
}

// The accelerated renderer with vsync is asked for first, and taken when the
// host gives it; SDL's dummy video only has the software one, which naming it
// as the driver to use hands out whatever was asked.
NOCTURNE_TEST(the_accelerated_renderer_is_asked_for_first) {
    SDL_SetHint(SDL_HINT_RENDER_DRIVER, "software");
    {
        Screen screen;
        CHECK_EQ(screen.set_mode(64, 48, 32), kOk);
        SDL_RendererInfo info;
        CHECK_EQ(SDL_GetRendererInfo(nocturne_ddraw_present_renderer(), &info), 0);
        CHECK_EQ(std::string(info.name), std::string("software"));
        CHECK((info.flags & SDL_RENDERER_PRESENTVSYNC) != 0);
    }
    SDL_SetHint(SDL_HINT_RENDER_DRIVER, "");
}

// The newest DirectDraw object is the one presenting; releasing an older one,
// as a restart of the graphics can, leaves it so.
NOCTURNE_TEST(releasing_an_older_directdraw_keeps_the_newest_presenting) {
    Screen screen;
    CHECK_EQ(screen.set_mode(64, 48, 32), kOk);
    SDL_Window *second_window = SDL_CreateWindow("second", 0, 0, 64, 48, SDL_WINDOW_HIDDEN);
    SDL_Window *first_window = g_sdlWindow;
    g_sdlWindow = second_window;
    IDirectDraw *newer = nullptr;
    CHECK_EQ((*g_DirectDrawCreateFunc)(nullptr, &newer, nullptr), kOk);
    CHECK_EQ((*newer->vtable->SetDisplayMode)(newer, 64, 48, 32), kOk);
    SDL_Renderer *presenting = nocturne_ddraw_present_renderer();
    release(screen.ddraw);
    screen.ddraw = newer;
    CHECK(nocturne_ddraw_present_renderer() == presenting);
    CHECK(presenting != nullptr);
    release(newer);
    screen.ddraw = nullptr;
    SDL_DestroyWindow(second_window);
    g_sdlWindow = first_window;
}

// RestoreDisplayMode puts back the player's window mode, once there is a
// window to put it on.
NOCTURNE_TEST(restoring_the_display_mode_keeps_the_players_window_mode) {
    Screen screen;
    CHECK_EQ((*screen.ddraw->vtable->RestoreDisplayMode)(screen.ddraw), kOk);
    CHECK_EQ(stand.mode_applies, 0);
    stand.gl_init = 1;
    screen.set_mode(320, 240, 32);
    CHECK_EQ((*screen.ddraw->vtable->RestoreDisplayMode)(screen.ddraw), kOk);
    CHECK_EQ(stand.mode_applies, 2);
}

// -----------------------------------------------------------------------------
// Surfaces
// -----------------------------------------------------------------------------

// A surface is in the mode's pixel format, presented in a texture of the same,
// or one the desc sizes itself.
NOCTURNE_TEST(a_surface_is_in_the_modes_pixel_format) {
    Screen screen;
    struct Format {
        DWORD bpp;
        DWORD red;
        LONG pitch;
    };
    for (const Format &f :
         {Format{16, 0xf800, 64}, Format{24, 0xff0000, 96}, Format{32, 0xff0000, 128}}) {
        CHECK_EQ(screen.set_mode(32, 16, f.bpp), kOk);
        IDirectDrawSurface *primary = nullptr;
        CHECK_EQ(screen.flip_chain(&primary), kOk);
        const DDSURFACEDESC desc = draw(primary, 0);
        CHECK_EQ(desc.ddpfPixelFormat.dwRedYMask.dwRBitMask, f.red);
        CHECK_EQ(desc.dwPitchOrLinearSize.lPitch, f.pitch);
        release(primary);
    }
    IDirectDrawSurface *own = nullptr;
    CHECK_EQ(screen.offscreen(8, 4, &own), kOk);
    DDSURFACEDESC desc = draw(own, 0);
    CHECK_EQ(desc.dwWidth, 8u);
    CHECK_EQ(desc.dwHeight, 4u);
    release(own);

    // A desc that says nothing is a plain surface at the mode's size.
    memset(&desc, 0, sizeof(desc));
    desc.dwSize = sizeof(desc);
    CHECK_EQ(screen.create(&desc, &own), kOk);
    desc = draw(own, 0);
    CHECK_EQ(desc.dwWidth, 32u);
    CHECK_EQ(desc.ddsCaps.dwCaps, 0u);
    release(own);
}

// Only a primary that is complex and flips is a chain with a back buffer.
NOCTURNE_TEST(only_a_complex_flipping_primary_has_a_back_buffer) {
    Screen screen;
    stand.gl_init = 1;
    screen.set_mode(32, 16, 32);
    for (DWORD caps : {0x200u, 0x208u, 0x210u}) { // primary; + complex; + flip
        IDirectDrawSurface *primary = nullptr;
        CHECK_EQ(screen.flip_chain(&primary, caps), kOk);
        DDSCAPS back_caps = {kBackBufferCaps};
        IDirectDrawSurface *back = nullptr;
        CHECK_EQ((*primary->vtable->GetAttachedSurface)(primary, &back_caps, &back), kGeneric);
        release(primary);
    }
}

// What is not a flip chain has no back buffer to hand out, and Flips itself; a
// Flip can also be told what to show, through the screen's own texture.
NOCTURNE_TEST(a_flip_shows_the_surface_it_is_told_to) {
    Screen screen;
    CHECK_EQ(screen.set_mode(16, 16, 32), kOk);
    IDirectDrawSurface *own = nullptr;
    CHECK_EQ(screen.offscreen(16, 16, &own), kOk);
    DDSCAPS caps = {kBackBufferCaps};
    IDirectDrawSurface *none = nullptr;
    CHECK_EQ((*own->vtable->GetAttachedSurface)(own, &caps, &none), kGeneric);
    // Not the screen, and with no texture of its own: nothing is drawn.
    CHECK_EQ((*own->vtable->Flip)(own, nullptr, 1), kOk);

    IDirectDrawSurface *primary = nullptr;
    CHECK_EQ(screen.flip_chain(&primary), kOk);
    draw(own, 0x000000ffu);
    CHECK_EQ((*primary->vtable->Flip)(primary, own, 1), kOk);
    Uint32 shown = 0;
    SDL_Rect corner = {0, 0, 1, 1};
    SDL_RenderReadPixels(nocturne_ddraw_present_renderer(), &corner, SDL_PIXELFORMAT_RGB888, &shown,
                         4);
    CHECK_EQ(shown & 0x00ffffffu, 0x000000ffu);

    // Drawn through GL, a surface made before it is shown the same way.
    stand.gl_active = 1;
    CHECK_EQ((*own->vtable->Flip)(own, nullptr, 1), kOk);
    CHECK_EQ(stand.present_first_pixel, 0x000000ffu);
    release(primary);
    release(own);
}

// A surface SDL cannot make is out of memory, as DirectDraw has it.
NOCTURNE_TEST(a_surface_too_big_to_make_is_out_of_memory) {
    Screen screen;
    stand.gl_init = 1;
    screen.set_mode(320, 240, 32);
    IDirectDrawSurface *surface = nullptr;
    CHECK_EQ(screen.offscreen(-1, 4, &surface), kOutOfMemory);
    CHECK(surface == nullptr);
}

// The game's palette is made, attached and released, and does nothing in the
// modes it sets; a lost surface is restored by asking.
NOCTURNE_TEST(palettes_and_restores_succeed) {
    Screen screen;
    stand.gl_init = 1;
    screen.set_mode(32, 16, 32);
    IDirectDrawPalette *palette = nullptr;
    CHECK_EQ((*screen.ddraw->vtable->CreatePalette)(screen.ddraw, 0x44, nullptr, &palette, nullptr),
             kOk);
    CHECK(palette != nullptr);
    IDirectDrawSurface *primary = nullptr;
    CHECK_EQ(screen.flip_chain(&primary), kOk);
    CHECK_EQ((*primary->vtable->SetPalette)(primary, (IUnknown *)palette), kOk);
    CHECK_EQ((*primary->vtable->Restore)(primary), kOk);
    CHECK_EQ(release(palette), 0u);
    release(primary);
}

// -----------------------------------------------------------------------------
// DirectDrawCreate
// -----------------------------------------------------------------------------

// It brings SDL's video up when nothing has, fails when it cannot, and needs
// somewhere to put the object.
NOCTURNE_TEST(directdraw_create_brings_video_up_or_fails) {
    shims_init_ddraw();
    IDirectDraw *ddraw = nullptr;
    CHECK_EQ((*g_DirectDrawCreateFunc)(nullptr, nullptr, nullptr), kInvalidParams);

    SDL_QuitSubSystem(SDL_INIT_VIDEO);
    set_env("SDL_VIDEODRIVER", "no_such_driver");
    CHECK_EQ((*g_DirectDrawCreateFunc)(nullptr, &ddraw, nullptr), kGeneric);

    set_env("SDL_VIDEODRIVER", "dummy");
    CHECK_EQ((*g_DirectDrawCreateFunc)(nullptr, &ddraw, nullptr), kOk);
    CHECK(SDL_WasInit(SDL_INIT_VIDEO) != 0);
    CHECK_EQ(release(ddraw), 0u);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
