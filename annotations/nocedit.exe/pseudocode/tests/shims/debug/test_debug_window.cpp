// =============================================================================
// DEBUG WINDOW — the script and light views in a window of their own
// =============================================================================
//
// The window is SDL's, on its dummy video driver; the views it draws and the
// frame-buffer mapping it draws them through are debug_window_support's.

#include "debug/debug_window.h"
#include "debug_window_support.h"
#include "nocturne_test.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <string>

namespace {

using debug_window_support::stand;

void start() {
    SDL_setenv("SDL_VIDEODRIVER", "dummy", 1);
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    nocturne_debug_window_close();
    stand.reset();
}

SDL_Window *window() {
    return SDL_GetWindowFromID(nocturne_debug_window_id());
}

} // namespace

// With neither view on, or no game, there is no window and nothing is drawn.
NOCTURNE_TEST(no_view_no_window) {
    start();
    nocturne_debug_window_frame();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
    CHECK(stand.mapped.empty());
    g_CGamePtr = nullptr;
    stand.game.screen_clear_enabled = 1;
    nocturne_debug_window_frame();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
    // The script view needs a script.
    g_CGamePtr = &stand.game;
    stand.game.screen_clear_enabled = 0;
    stand.game.subtitle_system_enabled = 1;
    g_CScriptPtr = nullptr;
    nocturne_debug_window_frame();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
}

// The script view alone takes the whole window, drawn through a mapping of
// its size and the game's depth, and reaches the window; turned off, the
// window goes.
NOCTURNE_TEST(the_script_view_fills_the_window) {
    start();
    stand.game.subtitle_system_enabled = 1;
    nocturne_debug_window_frame();
    CHECK(nocturne_debug_window_id() != 0u);
    // Its surface is a software one: an accelerated one would bring a GL
    // context of its own and take the game window's presenter off its.
    const char *accelerated = SDL_GetHint(SDL_HINT_FRAMEBUFFER_ACCELERATION);
    CHECK(accelerated != nullptr);
    if (accelerated != nullptr)
        CHECK_EQ(std::string(accelerated), std::string("0"));
    CHECK_EQ(stand.mapped.size(), (size_t)1);
    CHECK_EQ(stand.unmapped, 1);
    if (!stand.mapped.empty()) {
        CHECK_EQ(stand.mapped[0].width, 640);
        CHECK_EQ(stand.mapped[0].height, 720);
        CHECK_EQ(stand.mapped[0].bpp, 32);
    }
    CHECK_EQ(stand.editors.size(), (size_t)1);
    if (!stand.editors.empty()) {
        CHECK_EQ(stand.editors[0].left, 0);
        CHECK_EQ(stand.editors[0].right, 639);
        CHECK_EQ(stand.editors[0].bottom, 719);
    }
    // It wears the game window's icon.
    CHECK_EQ(stand.icons.size(), (size_t)1);
    if (!stand.icons.empty())
        CHECK(stand.icons[0] == (void *)window());
    CHECK(stand.thumbs.empty());
    SDL_Surface *surface = SDL_GetWindowSurface(window());
    CHECK(surface != nullptr);
    if (surface != nullptr)
        CHECK(*(const Uint32 *)surface->pixels != 0u);

    // A second frame keeps the window it has.
    const unsigned int id = nocturne_debug_window_id();
    nocturne_debug_window_frame();
    CHECK_EQ(nocturne_debug_window_id(), id);

    stand.game.subtitle_system_enabled = 0;
    nocturne_debug_window_frame();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
}

// The light view alone: every spot light then every dynamic one, in a grid
// of 128-pixel thumbnails, and the counts below.
NOCTURNE_TEST(the_light_view_lays_its_shadow_maps_out_in_a_grid) {
    start();
    stand.game.screen_clear_enabled = 1;
    nocturne_debug_window_frame();
    CHECK(stand.editors.empty());
    CHECK_EQ(stand.thumbs.size(), (size_t)3);
    if (stand.thumbs.size() == 3) {
        CHECK(stand.thumbs[0].light == &stand.lights[0]);
        CHECK(stand.thumbs[2].light == &stand.lights[2]);
        CHECK_EQ(stand.thumbs[0].x, 4);
        CHECK_EQ(stand.thumbs[1].x, 136);
        CHECK_EQ(stand.thumbs[2].y, 4);
        CHECK_EQ(stand.thumbs[0].size, 128);
    }
    CHECK_EQ(stand.texts.size(), (size_t)2);
    if (stand.texts.size() == 2) {
        CHECK_EQ(stand.texts[0].text, std::string("5 omni lights"));
        CHECK_EQ(stand.texts[1].text, std::string("2 spot lights"));
        CHECK_EQ(stand.texts[1].y - stand.texts[0].y, 11);
    }

    // Narrower than two thumbnails, one column.
    SDL_SetWindowSize(window(), 100, 600);
    stand.thumbs.clear();
    nocturne_debug_window_frame();
    CHECK_EQ(stand.thumbs.size(), (size_t)3);
    if (stand.thumbs.size() == 3) {
        CHECK_EQ(stand.thumbs[1].x, 4);
        CHECK_EQ(stand.thumbs[1].y, 136);
    }
    nocturne_debug_window_close();
}

// Both views: the lights take two columns of thumbnails and the script the
// rest, or each half of a window too narrow for that.
NOCTURNE_TEST(both_views_share_the_window) {
    start();
    stand.game.subtitle_system_enabled = 1;
    stand.game.screen_clear_enabled = 1;
    nocturne_debug_window_frame();
    CHECK_EQ(stand.editors.size(), (size_t)1);
    if (!stand.editors.empty())
        CHECK_EQ(stand.editors[0].right, 371);
    CHECK_EQ(stand.thumbs.size(), (size_t)3);
    if (stand.thumbs.size() == 3) {
        CHECK_EQ(stand.thumbs[0].x, 376);
        CHECK_EQ(stand.thumbs[1].x, 508);
        CHECK_EQ(stand.thumbs[2].x, 376);
        CHECK_EQ(stand.thumbs[2].y, 136);
    }

    SDL_SetWindowSize(window(), 400, 600);
    stand.editors.clear();
    nocturne_debug_window_frame();
    if (!stand.editors.empty())
        CHECK_EQ(stand.editors[0].right, 199);

    // Taller than mapFrameBuffer takes, the mapping stops at its limit.
    SDL_SetWindowSize(window(), 400, GAME_SCREEN_MAX_HEIGHT + 100);
    stand.mapped.clear();
    nocturne_debug_window_frame();
    if (!stand.mapped.empty())
        CHECK_EQ(stand.mapped[0].height, GAME_SCREEN_MAX_HEIGHT);
    nocturne_debug_window_close();
}

// With the script it opens wide enough for its widest line beside the
// lights, and no wider than the screen; the lights alone open at the default.
NOCTURNE_TEST(it_opens_as_wide_as_the_script) {
    start();
    stand.lines = {"short", std::string(100, 'x'), ""};
    stand.game.subtitle_system_enabled = 1;
    stand.game.screen_clear_enabled = 1;
    nocturne_debug_window_frame();
    if (!stand.mapped.empty())
        CHECK_EQ(stand.mapped[0].width, 30 + 600 + 8 + 268);
    nocturne_debug_window_close();

    // The dummy display is 1024 wide.
    stand.reset();
    stand.lines = {std::string(300, 'x')};
    stand.game.subtitle_system_enabled = 1;
    nocturne_debug_window_frame();
    if (!stand.mapped.empty())
        CHECK_EQ(stand.mapped[0].width, 1024);
    nocturne_debug_window_close();

    stand.reset();
    stand.game.screen_clear_enabled = 1;
    nocturne_debug_window_frame();
    if (!stand.mapped.empty())
        CHECK_EQ(stand.mapped[0].width, 1280);
    nocturne_debug_window_close();
}

// At 16 bits the shadow maps, which write 32-bit pixels, are left out; at a
// depth the window cannot show nothing is drawn.
NOCTURNE_TEST(the_depth_decides_what_is_drawn) {
    start();
    stand.game.screen_clear_enabled = 1;
    g_BitsPerPixel = 16;
    nocturne_debug_window_frame();
    CHECK_EQ(stand.mapped.size(), (size_t)1);
    if (!stand.mapped.empty())
        CHECK_EQ(stand.mapped[0].bpp, 16);
    CHECK(stand.thumbs.empty());
    CHECK_EQ(stand.texts.size(), (size_t)2);
    nocturne_debug_window_close();

    stand.reset();
    stand.game.screen_clear_enabled = 1;
    g_BitsPerPixel = 8;
    nocturne_debug_window_frame();
    CHECK(stand.mapped.empty());
    CHECK_EQ(nocturne_debug_window_id(), 0u);
}

// With no video there is no window to open, and nothing is drawn.
NOCTURNE_TEST(no_window_nothing_drawn) {
    start();
    // Every start() took a reference, and SDL_CreateWindow starts video again
    // by itself, so it is also left no driver to start.
    while (SDL_WasInit(SDL_INIT_VIDEO) != 0)
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    SDL_setenv("SDL_VIDEODRIVER", "no_such_driver", 1);
    stand.game.subtitle_system_enabled = 1;
    nocturne_debug_window_frame();
    CHECK(stand.mapped.empty());
    CHECK_EQ(nocturne_debug_window_id(), 0u);
}

// Closing it turns both views off and lets a paused script run; with no game
// or no script there is only the window to close.
NOCTURNE_TEST(closing_turns_the_views_off) {
    start();
    stand.game.subtitle_system_enabled = 1;
    stand.game.screen_clear_enabled = 1;
    stand.script.script_state = 2;
    nocturne_debug_window_frame();
    nocturne_debug_window_close();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
    CHECK_EQ(stand.game.subtitle_system_enabled, 0);
    CHECK_EQ(stand.game.screen_clear_enabled, 0);
    CHECK_EQ(stand.script.script_state, 0);
    nocturne_debug_window_close();
    CHECK_EQ(stand.script.script_state, 0);

    g_CGamePtr = nullptr;
    g_CScriptPtr = nullptr;
    nocturne_debug_window_close();
    CHECK_EQ(nocturne_debug_window_id(), 0u);
}

NOCTURNE_TEST_MAIN()
