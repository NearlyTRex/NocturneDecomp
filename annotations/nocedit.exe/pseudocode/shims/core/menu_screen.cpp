// =============================================================================
// FRONT-END MENU SCREENS — implementation
// =============================================================================

#include "core/menu_screen.h"

#include "core/front_end_layout.h"
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
// window, and never above the top; all in the layout's rows.
int fit(int menu_y, int rows) {
    const NocturneLayout layout = nocturne_layout();
    const int menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);
    const int height = (int)((float)(g_WindowHeight - layout.top) / layout.scale);

    if (height < menu_y + rows * menu_ch) {
        menu_y = height - rows * menu_ch;
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
const int kLayoutWidth = NOCTURNE_LAYOUT_WIDTH;
const int kLayoutHeight = NOCTURNE_LAYOUT_HEIGHT;
// The depth the front end runs at.
const int kFrontEndBits = 0x20;
// The fangs: half transparent, the layout's size.
const int kFangsAlpha = 0x8000;

// Whether nocturne_menu_scene_begin opened a pass to close.
bool s_scene_widened = false;

} // namespace

#if !NOCTURNE_AUTHENTIC_MENU

extern "C" float nocturne_menu_scene_begin(float field_of_view) {
    s_scene_widened = false;
    // The software rasteriser draws at the screen's own size already and
    // knows nothing of the overlay: squeezed into 640x480 it would stop at its
    // edges. The front end hands the video mode back (restoreVideoMode) while
    // the device stays open from the game, so whether the device exists says
    // nothing about who is drawing.
    if ((g_WindowWidth == kLayoutWidth && g_WindowHeight == kLayoutHeight) || g_WindowHeight <= 0 ||
        g_UseExternalRenderer == 0)
        return field_of_view;
    const float scale_x = (float)g_WindowWidth / (float)kLayoutWidth;
    const float scale_y = (float)g_WindowHeight / (float)kLayoutHeight;
    const float widen = scale_x / scale_y;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890(g_CDemonRendererPtr2, 0, 0,
                                                                kLayoutWidth, kLayoutHeight);
    if (nocturne_trigl_device_begin_overlay(scale_x, scale_y, 0.0f, 0.0f) == 0) {
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

extern "C" void nocturne_front_end_fangs(struct CGame *game) {
    CAlphaBitmap fangs;
    int width = 0;
    int height = 0;

    engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80();
    nocturne_front_end_mode(&width, &height);
    if (g_WindowWidth != width || g_WindowHeight != height || game->game_bpp != kFrontEndBits)
        nocturne_front_end_set_mode();
    if (g_CDemonMissionPtr->is_in_editor == 0) {
#if NOCTURNE_AUTHENTIC_MENU_FONT
        g_EditorFont = g_ThemeFont;
#else
        g_EditorFont = nocturne_menu_font();
#endif
    }
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&fangs);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&fangs, (char *)"fangs", kLayoutWidth,
                                                       kLayoutHeight);
    nocturne_layout_display(&fangs, 0, 0, kFangsAlpha);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&fangs, 0);
}

#else

extern "C" float nocturne_menu_scene_begin(float field_of_view) {
    (void)s_scene_widened;
    (void)kLayoutWidth;
    (void)kLayoutHeight;
    (void)kFrontEndBits;
    (void)kFangsAlpha;
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
