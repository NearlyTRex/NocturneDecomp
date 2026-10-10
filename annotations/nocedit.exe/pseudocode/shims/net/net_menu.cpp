// =============================================================================
// NETPLAY — MULTIPLAYER MENU — implementation
// =============================================================================
//
// See net_menu.h for why the two entries are a submenu rather than two more
// lines on the main menu.

#include "net/net_menu.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

#define NET_MENU_ITEMS 2

int nocturne_net_menu_multiplayer(void)
{
    char  host_line[256];
    char  join_line[256];
    char *menu_ptrs[NET_MENU_ITEMS];
    int   selected = 0;
    int   choice;

    menu_ptrs[0] = host_line;
    menu_ptrs[1] = join_line;

    // The caller reached here on a RETURN that renderMenuAndGetChoice has
    // already consumed, but the key can still be down; without this the
    // submenu would see it and pick its first item on the same press.
    engine_2d_c_clearInputAndWait_FUN_00403260();

    for (;;) {
        nocturne_menu_backdrop_frame();

        // Rebuilt every frame, as the main menu rebuilds its own: the strings
        // are localized and the language can change under the options screen.
        strcpy(host_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("H O S T   G A M E"));
        strcpy(join_line,
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("J O I N   G A M E"));

        // From the main menu's own start-y, so the submenu's lines land where
        // the ones it replaced on screen were.
        choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
                     menu_ptrs, NET_MENU_ITEMS, &selected,
                     nocturne_menu_start_y(NOCTURNE_MENU_ROWS_UNTITLED(NET_MENU_ITEMS)),
                     (char *)0x0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice >= 0) {
            return choice;
        }
        if (nocturne_menu_cancelled() != 0) {
            return NOCTURNE_NET_MENU_CANCEL;
        }
    }
}

void nocturne_net_menu_hotkeys(void)
{
    if (((*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_LCONTROL) != 0) &&
        ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_H) != 0)) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_hostNetworkGame_FUN_004e2f10();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    if (((*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_LCONTROL) != 0) &&
        ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_J) != 0)) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_joinNetworkGame_FUN_004e2fc0();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
}

#else

int nocturne_net_menu_multiplayer(void)
{
    return NOCTURNE_NET_MENU_CANCEL;
}

void nocturne_net_menu_hotkeys(void)
{
}

#endif
