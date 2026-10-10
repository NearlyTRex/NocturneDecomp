// =============================================================================
// FRONT-END MENU SCREENS — implementation
// =============================================================================

#include "core/menu_screen.h"
#include "nocturne.h"

extern "C" void nocturne_menu_backdrop_frame(void)
{
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance, g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
}

extern "C" int nocturne_menu_start_y(int rows)
{
    int menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);
    int menu_y  = NOCTURNE_MENU_START_Y;

    if (g_WindowHeight < menu_y + rows * menu_ch) {
        menu_y = g_WindowHeight - rows * menu_ch;
    }
    if (menu_y < 0) {
        menu_y = 0;
    }
    return menu_y;
}

extern "C" int nocturne_menu_cancelled(void)
{
    if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0) {
        return 1;
    }
    return g_InputDisabled != 0;
}
