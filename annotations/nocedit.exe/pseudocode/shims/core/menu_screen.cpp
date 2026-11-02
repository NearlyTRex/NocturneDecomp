// =============================================================================
// FRONT-END MENU SCREENS — implementation
// =============================================================================

#include "core/menu_screen.h"

#include "nocturne.h"
#include "renderer/trigl_device.h"

#ifndef NOCTURNE_PLATFORM_NO_QUIT
#define NOCTURNE_PLATFORM_NO_QUIT 0
#endif

int g_nocturne_no_quit = NOCTURNE_PLATFORM_NO_QUIT;

extern "C" void nocturne_menu_backdrop_frame(void) {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance, g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
}

namespace {

// `menu_y`, lifted where `rows` character heights below it would run off the
// window, and never above the top.
int fit(int menu_y, int rows) {
    int menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);

    if (g_WindowHeight < menu_y + rows * menu_ch) {
        menu_y = g_WindowHeight - rows * menu_ch;
    }
    if (menu_y < 0) {
        menu_y = 0;
    }
    return menu_y;
}

} // namespace

extern "C" int nocturne_menu_start_y(int rows) {
    return fit(NOCTURNE_MENU_START_Y, rows);
}

extern "C" int nocturne_menu_titled_y(int lines) {
#if NOCTURNE_AUTHENTIC_MENU
    return nocturne_menu_start_y(NOCTURNE_MENU_ROWS_TITLED(lines));
#else
    return fit(NOCTURNE_MENU_TITLE_Y, NOCTURNE_MENU_ROWS_TITLED(lines));
#endif
}

namespace {

// The layout every front-end screen is drawn for.
const int kLayoutWidth = 0x280;
const int kLayoutHeight = 0x1e0;
// The widest front end: 2.67:1.
const int kWidestMenu = 1280;
// What every width is a multiple of. clearScreen fills a row 32 bytes at a
// time, which is 16 pixels at 16 bits; every mode the game ships is a multiple
// of it, and a row that is not overruns into the next and, on the last, off
// the buffer.
const int kWidthStep = 16;

// Whether nocturne_menu_scene_begin opened a pass to close.
bool s_scene_widened = false;

} // namespace

#if !NOCTURNE_AUTHENTIC_MENU

extern "C" int nocturne_menu_width(void) {
    const CGame *game = g_CGamePtr;
    if (g_UseDirect3D == 0 || game->game_pixy <= 0)
        return kLayoutWidth;
    const int exact = kLayoutHeight * game->game_pixx / game->game_pixy;
    int width = (exact + kWidthStep / 2) / kWidthStep * kWidthStep;
    if (width < kLayoutWidth)
        width = kLayoutWidth;
    return width > kWidestMenu ? kWidestMenu : width;
}

extern "C" int nocturne_menu_left(void) {
    const int left = (g_WindowWidth - kLayoutWidth) / 2;
    return left > 0 ? left : 0;
}

extern "C" float nocturne_menu_scene_begin(float field_of_view) {
    s_scene_widened = false;
    // The software rasteriser draws at the screen's own width already and
    // knows nothing of the overlay: squeezed into 640 columns it would stop at
    // the 640th. The front end hands the video mode back (restoreVideoMode)
    // while the device stays open from the game, so whether the device exists
    // says nothing about who is drawing.
    if (g_WindowWidth <= kLayoutWidth || g_UseExternalRenderer == 0)
        return field_of_view;
    const float widen = (float)g_WindowWidth / (float)kLayoutWidth;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890(g_CDemonRendererPtr2, 0, 0,
                                                                kLayoutWidth, kLayoutHeight);
    if (nocturne_trigl_device_begin_overlay(widen, 1.0f, 0.0f, 0.0f) == 0) {
        // Without the renderer's pass the 640 columns could not be widened, so
        // the scene keeps the screen's own viewport, stretched.
        engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
        return field_of_view;
    }
    s_scene_widened = true;
    return field_of_view * widen;
}

extern "C" void nocturne_menu_scene_end(void) {
    if (!s_scene_widened)
        return;
    s_scene_widened = false;
    nocturne_trigl_device_end_overlay();
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
}

#else

extern "C" int nocturne_menu_width(void) {
    return kLayoutWidth;
}
extern "C" int nocturne_menu_left(void) {
    return 0;
}
extern "C" float nocturne_menu_scene_begin(float field_of_view) {
    (void)s_scene_widened;
    (void)kLayoutHeight;
    (void)kWidestMenu;
    (void)kWidthStep;
    return field_of_view;
}
extern "C" void nocturne_menu_scene_end(void) {}

#endif // !NOCTURNE_AUTHENTIC_MENU

extern "C" int nocturne_menu_cancelled(void) {
    if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0) {
        return 1;
    }
    return g_InputDisabled != 0;
}
