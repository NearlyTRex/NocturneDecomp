// =============================================================================
// NET MENU — the multiplayer submenu, and Ctrl+H / Ctrl+J
// =============================================================================

#include "net/net_menu.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

namespace {

using net_support::stand;

} // namespace

// The submenu is drawn over the menu backdrop each frame until a line is
// picked or it is backed out of; the press that opened it is waited out first.
NOCTURNE_TEST(the_submenu_answers_the_line_picked) {
    stand.reset();
    stand.menu_choices = {-1, NOCTURNE_NET_MENU_JOIN};
    CHECK_EQ(nocturne_net_menu_multiplayer(), NOCTURNE_NET_MENU_JOIN);
    CHECK_EQ(stand.input_waits, 1);
    CHECK_EQ(stand.backdrops, 2);
    CHECK_EQ(stand.swaps, 2);
}

NOCTURNE_TEST(backing_out_of_the_submenu_cancels) {
    stand.reset();
    stand.menu_cancels = {0, 1};
    CHECK_EQ(nocturne_net_menu_multiplayer(), NOCTURNE_NET_MENU_CANCEL);
    CHECK_EQ(stand.backdrops, 2);
}

// Ctrl+H hosts and Ctrl+J joins, the sound reset around each; either letter
// alone, or Ctrl alone, does nothing.
NOCTURNE_TEST(the_hotkeys_host_and_join) {
    stand.reset();
    stand.pressed = {DIK_H, DIK_J};
    nocturne_net_menu_hotkeys();
    CHECK_EQ(stand.hosted + stand.joined, 0);

    stand.held = {DIK_LCONTROL};
    nocturne_net_menu_hotkeys();
    CHECK_EQ(stand.hosted, 1);
    CHECK_EQ(stand.joined, 1);
    CHECK_EQ(stand.sound_resets, 2);
    CHECK_EQ(stand.sound_configures, 2);

    nocturne_net_menu_hotkeys();
    CHECK_EQ(stand.hosted, 1);
}

NOCTURNE_TEST_MAIN()
