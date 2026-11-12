// =============================================================================
// ACT SCREENS — the end of an act and the credits at the game's resolution
// =============================================================================
//
// The stats' text and where it goes, the times they leave in the game, "To be
// continued..." and the credits' roll, strips, music and Escape, at 640x480
// and on larger layouts.

#include "core/act_screens.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "screens_support.h"

#include <string>

namespace {

using screens_support::count;
using screens_support::first;
using screens_support::stand;

CGame s_game = {};

void fresh() {
    stand.reset();
    s_game = CGame();
    g_ThemeFont->win_font_enabled = 0;
}

std::string nth(const std::string &prefix, int n) {
    for (const std::string &call : stand.calls) {
        if (call.rfind(prefix, 0) == 0 && n-- == 0)
            return call;
    }
    return "";
}

} // namespace

// The act's time and body count, wrapped in the stats column and centred in
// it from row 240 at 640x480; the play time added to the game's and cleared.
NOCTURNE_TEST(the_acts_stats_are_where_they_ship) {
    fresh();
    s_game.total_play_time = 3723.5f;
    s_game.total_game_time = 100.0f;
    s_game.damageable_enemy_count = 7;
    s_game.total_kill_count = 3;
    nocturne_act_stats(&s_game);
    CHECK_EQ(stand.wrap_text, std::string("Level time\n\n01:02:03.50\n\nBody count\n\n7\n\n"));
    CHECK_EQ(stand.wrap_width, 0xc0);
    CHECK_EQ(first("load"), std::string("load stats 640x480"));
    CHECK_EQ(first("display"), std::string("display 0 0 ffff"));
    CHECK_EQ(first("text"), std::string("text theme Level time 504 240 248 1"));
    CHECK_EQ(first("text theme 7"), std::string("text theme 7 540 300 248 1"));
    CHECK_EQ(count("dtor"), 1);
    CHECK_EQ(count("swap"), 0);
    CHECK_EQ(s_game.total_play_time, 0.0f);
    CHECK_EQ(s_game.total_game_time, 3823.5f);
    CHECK_EQ(s_game.total_kill_count, 10);
}

// Larger, the column and its rows are scaled with the picture.
NOCTURNE_TEST(the_stats_follow_the_layout) {
    fresh();
    screens_support::screen(1280, 960);
    stand.layout = {2.0f, 0, 0};
    nocturne_act_stats(&s_game);
    CHECK_EQ(first("text"), std::string("text theme Level time 1007 480 248 2"));
    CHECK_EQ(nth("text", 1), std::string("text theme  1087 500 248 2"));
}

// The mission's: its whole time and body count, shown until a key; the game
// keeps its whole time.
NOCTURNE_TEST(a_finished_mission_shows_its_totals_until_a_key) {
    fresh();
    s_game.total_play_time = 23.5f;
    s_game.total_game_time = 100.0f;
    s_game.damageable_enemy_count = 2;
    s_game.total_kill_count = 3;
    nocturne_finish_act(&s_game);
    CHECK_EQ(stand.wrap_text,
             std::string("Mission time\n\n00:02:03.50\n\nTotal body count\n\n5\n\n"));
    CHECK_EQ(s_game.total_game_time, 123.5f);
    CHECK_EQ(s_game.total_kill_count, 5);
    CHECK_EQ(count("swap"), 1);
    CHECK_EQ(count("keypress"), 1);
    CHECK_EQ(count("credits"), 0);
}

// A finished game says "To be continued..." at the screen's centre for five
// seconds, in the small font on a small screen, then rolls the credits.
NOCTURNE_TEST(a_finished_game_is_to_be_continued) {
    fresh();
    s_game.act_completion_state = 2;
    stand.delta = 1.0f;
    g_CDemonCameraInstance.framebuffer_width = 400;
    nocturne_finish_act(&s_game);
    CHECK_EQ(first("text"), std::string("text small To be continued... 248 235 248 1"));
    CHECK_EQ(count("swap"), 5);
    CHECK_EQ(count("clock"), 1);
    CHECK_EQ(stand.calls.back(), std::string("credits"));
}

NOCTURNE_TEST(to_be_continued_is_scaled_with_the_layout) {
    fresh();
    s_game.act_completion_state = 2;
    stand.delta = 5.0f;
    screens_support::screen(1280, 960);
    stand.layout = {2.0f, 0, 0};
    nocturne_finish_act(&s_game);
    CHECK_EQ(first("text"), std::string("text theme To be continued... 496 470 248 2"));
    CHECK_EQ(count("swap"), 1);
}

// The credits roll up from the picture's foot: nothing shows on the first
// frame, then the lines from row 448, the heading in its colour, between the
// strips; Escape stops them. The bitmap font draws them, and the OS font
// setting is put back.
NOCTURNE_TEST(the_credits_roll_up_the_column) {
    fresh();
    g_UseOSFonts = 1;
    g_ThemeFont->win_font_enabled = 1;
    stand.credits = {"\\bTitle\n", "Name\n", "\\cPlain\n", "\\", "end\n", "Unread\n"};
    stand.delta = 1.0f;
    stand.escape_after = 2;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(first("open"), std::string("open data credits.txt"));
    CHECK_EQ(count("close"), 1);
    CHECK_EQ(first("music"), std::string("music faded-remix.mp3"));
    CHECK_EQ(first("sfx channel"), std::string("sfx channel 1"));
    CHECK_EQ(first("sfx flags"), std::string("sfx flags 1"));
    CHECK_EQ(first("load"), std::string("load stats 640x480"));
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 640x480 ffff 0"));
    CHECK_EQ(count("scaled"), 2);
    CHECK_EQ(first("text"), std::string("text theme Title\n 503 448 2 1"));
    CHECK_EQ(nth("text", 1), std::string("text theme Name\n 507 458 248 1"));
    CHECK_EQ(nth("text", 2), std::string("text theme Plain\n 503 468 248 1"));
    CHECK_EQ(count("text"), 3);
    CHECK_EQ(first("fill"), std::string("fill 414 0 639 30 0"));
    CHECK_EQ(nth("fill", 1), std::string("fill 414 439 639 479 0"));
    CHECK_EQ(count("swap"), 2);
    CHECK_EQ(g_ThemeFont->win_font_enabled, 1);
    CHECK_EQ(count("dtor"), 1);
    CHECK_EQ(count("sound reset"), 2);
}

// On a wide screen the picture keeps to the left, the column runs on to the
// screen's right edge and its rows and text are scaled; lines scrolled off
// the top are not drawn.
NOCTURNE_TEST(the_credits_column_runs_to_a_wide_screens_edge) {
    fresh();
    screens_support::screen(1920, 1080);
    stand.layout = {2.25f, 240, 0};
    stand.credits = {"Name\n"};
    stand.delta = 1.0f;
    stand.escape_after = 2;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 1440x1080 ffff 1"));
    CHECK_EQ(first("fill"), std::string("fill 932 0 1919 68 0"));
    CHECK_EQ(nth("fill", 1), std::string("fill 932 988 1919 1079 0"));
    // Centred between 932 and 1919 at 2.25: 5 characters, 90 wide.
    CHECK_EQ(first("text"), std::string("text theme Name\n 1381 1008 248 2.25"));
    CHECK_EQ(g_ThemeFont->win_font_enabled, 0);

    fresh();
    stand.credits = {"Name\n"};
    stand.delta = 20.0f; // past the top by the second frame
    stand.escape_after = 2;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("text"), 0);
}

// A frame that has not scrolled to another row is swapped, not redrawn.
NOCTURNE_TEST(the_credits_redraw_only_on_a_new_row) {
    fresh();
    stand.credits = {"Name\n"};
    stand.delta = 0.0f;
    stand.escape_after = 3;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("swap"), 3);
    CHECK_EQ(count("scaled"), 1);
}

// A screen smaller than the picture keeps the picture's edges for the strips.
NOCTURNE_TEST(a_small_screen_keeps_the_pictures_edges) {
    fresh();
    screens_support::screen(600, 400);
    stand.credits = {"end\n"};
    stand.escape_after = 1;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(nth("fill", 1), std::string("fill 414 439 639 479 0"));
}

// The music's end ends the credits before the strips are drawn; without the
// music channel there is none, and Escape ends them.
NOCTURNE_TEST(the_music_ending_ends_the_credits) {
    fresh();
    stand.credits = {"Name\n"};
    stand.music_frames = 0;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("fill"), 0);
    CHECK_EQ(count("swap"), 0);
    fresh();
    stand.credits = {"Name\n"};
    stand.music_channel = 2;
    stand.escape_after = 1;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("music"), 0);
    CHECK_EQ(count("swap"), 1);
}

// Without the file there are no credits; past 1024 lines the rest are not read.
NOCTURNE_TEST(credits_need_their_file_and_stop_at_1024_lines) {
    fresh();
    stand.credits_file = false;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("dtor"), 1);
    CHECK_EQ(count("sound"), 0);
    fresh();
    stand.credits.assign(1100, "Name\n");
    stand.credits.emplace_back("end\n");
    stand.delta = 1.0f;
    stand.escape_after = 2;
    nocturne_roll_credits(&s_game);
    CHECK_EQ(count("close"), 1);
    CHECK_EQ(count("text"), 3); // rows 448, 458 and 468 of those read
}

NOCTURNE_TEST_MAIN()
