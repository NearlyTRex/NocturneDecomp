// =============================================================================
// AUTOMAP, AUTHENTIC — the shipped game has no map
// =============================================================================
//
// Every entry point is there, so the game's calls into it still link, and none
// of them does anything: the map never opens, takes nothing and saves nothing.

#include "game/automap.h"
#include "nocturne_test.h"

#include <string>

NOCTURNE_TEST(there_is_no_map) {
    nocturne_automap_reset();
    nocturne_automap_update();
    nocturne_automap_render();
    nocturne_automap_save(nullptr);
    nocturne_automap_load(nullptr);
    nocturne_automap_clear_frame_effects();
    nocturne_automap_apply_default_binding();
    CHECK_EQ(nocturne_automap_active(), 0);
    CHECK_EQ(nocturne_automap_explored_percent(), 0);
    CHECK_EQ(nocturne_automap_owns_controls(), 0);
    CHECK_EQ(nocturne_automap_freezes_world(), 0);
    CHECK_EQ(nocturne_automap_handle_cancel(), 0);
    CHECK_EQ(*nocturne_automap_key_binding(), 0);
    CHECK_EQ(*nocturne_automap_zoom_setting(), 100);
    CHECK_EQ(std::string(nocturne_automap_key_label()), std::string(""));
}

NOCTURNE_TEST_MAIN()
