// =============================================================================
// NETPLAY — MULTIPLAYER MENU — implementation
// =============================================================================
//
// See net_menu.h for why the two entries are a submenu rather than two more
// lines on the main menu.

#include "net_menu.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

#define NET_MENU_ITEMS 3

// The main menu's own start-y, so the submenu's lines land where the ones it
// replaced on screen were.
#define NET_MENU_START_Y 0xfa

int nocturne_net_menu_multiplayer(void)
{
    char  host_line[256];
    char  join_line[256];
    char  back_line[256];
    char *menu_ptrs[NET_MENU_ITEMS];
    int   selected = 0;
    int   choice;
    int   menu_ch;
    int   menu_y;

    menu_ptrs[0] = host_line;
    menu_ptrs[1] = join_line;
    menu_ptrs[2] = back_line;

    // The caller reached here on a RETURN that renderMenuAndGetChoice has
    // already consumed, but the key can still be down; without this the
    // submenu would see it and pick its first item on the same press.
    engine_2d_c_clearInputAndWait_FUN_00403260();

    for (;;) {
        core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
        core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,
                                                g_CGamePtr->delta_time_float);
        core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);

        // Rebuilt every frame, as the main menu rebuilds its own: the strings
        // are localized and the language can change under the options screen.
        strcpy(host_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("H O S T   G A M E"));
        strcpy(join_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("J O I N   G A M E"));
        strcpy(back_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("B A C K"));

        // An untitled menu double-spaces its lines (see renderMenuAndGetChoice),
        // so three entries occupy six character heights. Lift the start where a
        // short window would otherwise push the last line under the copyright.
        menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);
        menu_y  = NET_MENU_START_Y;
        if (g_WindowHeight < menu_y + (NET_MENU_ITEMS * 2 + 1) * menu_ch) {
            menu_y = g_WindowHeight - (NET_MENU_ITEMS * 2 + 1) * menu_ch;
        }
        if (menu_y < 0) {
            menu_y = 0;
        }

        choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
                     menu_ptrs, NET_MENU_ITEMS, &selected, menu_y, (char *)0x0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice == 2) {
            return NOCTURNE_NET_MENU_CANCEL;
        }
        if (choice >= 0) {
            return choice;
        }
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0) {
            return NOCTURNE_NET_MENU_CANCEL;
        }
        // Set when the window is closed. The main menu treats it as a quit, so
        // this must not sit here spinning through a shutdown.
        if (g_InputDisabled != 0) {
            return NOCTURNE_NET_MENU_CANCEL;
        }
    }
}

#else

int nocturne_net_menu_multiplayer(void)
{
    return NOCTURNE_NET_MENU_CANCEL;
}

#endif
