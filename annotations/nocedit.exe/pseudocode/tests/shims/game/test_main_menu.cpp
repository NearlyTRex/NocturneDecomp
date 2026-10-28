// =============================================================================
// MAIN MENU — the front end's first page
// =============================================================================
//
// What it lists, where each line leads and what comes back after, the hotkeys
// it takes between frames, and the way it is set up and let go: the shipped
// enterMainGameMenu's, with its additions.

#include "front_support.h"
#include "game/main_menu.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

using front_support::game;
using front_support::last;
using front_support::Press;
using front_support::stand;

enum { PLAY, MULTIPLAYER, OPTIONS, QUIT };

Press pick(int line) {
    Press press;
    press.line = line;
    return press;
}

Press idle() {
    return Press();
}

} // namespace

NOCTURNE_TEST(a_short_window_has_no_menu) {
    stand.reset();
    g_WindowHeight = 400;
    CHECK_EQ(nocturne_main_menu(), (int)NOCTURNE_MAIN_MENU_TOO_SHORT);
    CHECK(stand.frames.empty());
    CHECK(stand.calls.empty());
}

// The bitmaps and the moon on the way in, and the music once the first frame
// is up, that frame shown black; both let go on the way out.
NOCTURNE_TEST(the_menu_sets_up_and_lets_go) {
    stand.reset();
    stand.presses = {idle(), pick(QUIT)};
    CHECK_EQ(nocturne_main_menu(), (int)NOCTURNE_MAIN_MENU_QUIT);
    CHECK_EQ(stand.count("scale 2x1"), 8);
    CHECK(stand.in_order({"load fblurl 104x70", "load fblurm 32x70", "load fblurr 104x70",
                          "clearInput", "clearTextureCache", "moonInit", "saveClockTime"}));
    CHECK(stand.in_order({"clearScreen", "swap", "soundConfigure", "clearInput", "swap"}));
    CHECK_EQ(stand.count("clearScreen"), 1);
    CHECK(stand.in_order({"soundReset", "moonFree"}));
    CHECK_EQ(stand.count("setSize 640x480"), 2);
    CHECK(g_EditorFont != nullptr);

    const std::vector<std::string> lines = {"P L A Y", "M U L T I P L A Y E R", "O P T I O N S",
                                            "Q U I T"};
    CHECK(last().lines == lines);
    CHECK_EQ(last().y, 250);
}

// The menu's font is not forced on the editor, and without acceleration the
// mode comes down to one the software path can show.
NOCTURNE_TEST(the_editor_keeps_its_font_and_software_its_size) {
    stand.reset();
    g_CDemonMissionPtr = front_support::mission;
    front_support::mission->is_in_editor = 1;
    game->game_pixx = 1024;
    game->game_pixy = 768;
    nocturne_main_menu();
    CHECK(g_EditorFont == nullptr);
    CHECK_EQ(game->game_pixy, 480);

    stand.reset();
    g_CDemonMissionPtr = front_support::mission;
    front_support::mission->is_in_editor = 0;
    g_UseDirect3D = 1;
    game->game_pixx = 1024;
    game->game_pixy = 768;
    nocturne_main_menu();
    CHECK(g_EditorFont != nullptr);
    CHECK_EQ(game->game_pixy, 768);

    stand.reset();
    g_ThemeFont = nullptr;
    nocturne_main_menu();
    CHECK(g_EditorFont == nullptr);
}

// Escape quits, and so does the window closing.
NOCTURNE_TEST(escape_or_closing_quits) {
    stand.reset();
    Press escape;
    escape.escape = true;
    stand.presses = {escape, idle()};
    CHECK_EQ(nocturne_main_menu(), (int)NOCTURNE_MAIN_MENU_QUIT);
    CHECK_EQ(stand.frames.size(), (size_t)1);

    stand.reset();
    Press close;
    close.close = true;
    stand.presses = {close, idle()};
    nocturne_main_menu();
    CHECK_EQ(stand.frames.size(), (size_t)1);
}

// Where the system ends the app there is no QUIT, and Escape is no way out.
NOCTURNE_TEST(no_quit_where_the_system_ends_the_app) {
    stand.reset();
    g_nocturne_no_quit = 1;
    Press escape;
    escape.escape = true;
    stand.presses = {escape};
    nocturne_main_menu();
    CHECK_EQ(stand.frames.size(), (size_t)2); // the close, not the Escape
    const std::vector<std::string> lines = {"P L A Y", "M U L T I P L A Y E R", "O P T I O N S"};
    CHECK(last().lines == lines);
}

// PLAY opens the single-player submenu: Start goes to the story list, Ctrl
// and Ctrl+Shift to the chapters, as the shipped START did; Load to the
// picker; Continue to the newest save, or says there is none.
NOCTURNE_TEST(play_leads_where_the_submenu_says) {
    const struct {
        int choice;
        std::vector<int> held;
        std::string call;
    } cases[] = {
        {NOCTURNE_SP_MENU_START, {}, "chapterSelect 0"},
        {NOCTURNE_SP_MENU_START, {DIK_LCONTROL}, "chapterSelect 1"},
        {NOCTURNE_SP_MENU_START, {DIK_LCONTROL, DIK_LSHIFT}, "chapterSelect 2"},
        {NOCTURNE_SP_MENU_START, {DIK_LSHIFT}, "chapterSelect 0"},
        {NOCTURNE_SP_MENU_LOAD, {}, "loadGame -"},
        {NOCTURNE_SP_MENU_CONTINUE, {}, "loadGame auto.noc"},
    };
    for (const auto &c : cases) {
        stand.reset();
        stand.sp_choices = {c.choice};
        for (int key : c.held)
            stand.held.insert(key);
        stand.presses = {pick(PLAY), pick(QUIT)};
        nocturne_main_menu();
        CHECK_AT(stand.in_order({"spMenu", "moonFree", "soundReset", c.call, "clearInput",
                                 "clearTextureCache", "moonInit", "soundConfigure"}),
                 c.call);
    }

    stand.reset();
    stand.sp_choices = {NOCTURNE_SP_MENU_CONTINUE};
    stand.continue_found = false;
    stand.presses = {pick(PLAY), pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("showError"), 1);
    CHECK_EQ(stand.count("loadGame auto.noc"), 0);

    // Backed out of: nothing runs, and the moon stays up.
    stand.reset();
    stand.presses = {pick(PLAY), pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("spMenu"), 1);
    CHECK_EQ(stand.count("moonFree"), 1); // only on the way out
}

// MULTIPLAYER hosts or joins with the menu music stopped, and either way
// waits for the keys to be let go.
NOCTURNE_TEST(multiplayer_hosts_or_joins) {
    const struct {
        int choice;
        const char *call;
    } cases[] = {{NOCTURNE_NET_MENU_HOST, "host"}, {NOCTURNE_NET_MENU_JOIN, "join"}};
    for (const auto &c : cases) {
        stand.reset();
        stand.net_choices = {c.choice};
        stand.presses = {pick(MULTIPLAYER), pick(QUIT)};
        nocturne_main_menu();
        CHECK_AT(stand.in_order({"netMenu", "soundReset", c.call, "soundConfigure", "clearInput"}),
                 c.call);
    }

    stand.reset();
    stand.presses = {pick(MULTIPLAYER), pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("host") + stand.count("join"), 0);
    CHECK(stand.in_order({"netMenu", "clearInput"}));
}

// OPTIONS runs the Options page over the running moon, and comes back to the
// menu.
NOCTURNE_TEST(options_runs_over_the_menu) {
    stand.reset();
    Press escape;
    escape.escape = true;
    stand.presses = {pick(OPTIONS), escape, pick(QUIT)};
    CHECK_EQ(nocturne_main_menu(), (int)NOCTURNE_MAIN_MENU_QUIT);
    CHECK_EQ(stand.frames[1].title, std::string("Option Menu"));
    CHECK_EQ(stand.frames[2].title, std::string());
    CHECK_EQ(stand.count("moonInit"), 1);
    CHECK(stand.in_order({"writeIni", "clearInput"}));
}

// Ctrl+M mutes and unmutes, Ctrl+F opens the file manager; without Ctrl the
// keys are left where they are.
NOCTURNE_TEST(the_hotkeys_between_frames) {
    stand.reset();
    stand.pressed = {DIK_M, DIK_F};
    stand.presses = {idle(), pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("setMuted 1"), 0);
    CHECK_EQ(stand.count("fileManager"), 0);
    CHECK_EQ(stand.pressed.size(), (size_t)2);

    stand.reset();
    stand.held = {DIK_LCONTROL};
    stand.pressed = {DIK_M, DIK_F};
    stand.presses = {idle(), idle(), pick(QUIT)};
    nocturne_main_menu();
    CHECK(stand.in_order({"setMuted 1", "soundConfigure"}));
    CHECK(stand.in_order({"soundReset", "fileManager", "soundConfigure"}));

    stand.reset();
    stand.held = {DIK_LCONTROL};
    stand.pressed = {DIK_M};
    stand.muted = 1;
    stand.presses = {pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("setMuted 0"), 1);
}

// At the end of a pass of the music, one of the four movies, the music stopped
// around it.
NOCTURNE_TEST(an_attract_movie_at_the_music_end) {
    stand.reset();
    stand.attract = {0, 1};
    stand.presses = {idle(), idle(), pick(QUIT)};
    nocturne_main_menu();
    CHECK_EQ(stand.count("playMovie video\\noc4.avi"), 1);
    CHECK(stand.in_order({"clearInput", "soundReset", "attractPause", "playMovie video\\noc4.avi",
                          "soundConfigure"}));
}

NOCTURNE_TEST_MAIN()
