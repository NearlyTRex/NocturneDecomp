// =============================================================================
// ATTRACT — the movie after the menu's music has played through
// =============================================================================
//
// On the real clock, in fractions of a second.

#include "core/clock.h"
#include "game/attract.h"
#include "nocturne_test.h"

#include <chrono>
#include <thread>

namespace {

void wait(double seconds) {
    std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

} // namespace

// Until the opening has played, or with no music to wait out, nothing fires.
NOCTURNE_TEST(nothing_fires_before_the_opening_or_without_music) {
    nocturne_attract_set_opening_played(0);
    nocturne_attract_set_music_duration(0.01f);
    wait(0.02);
    CHECK_EQ(nocturne_attract_tick(), 0);
    nocturne_attract_set_opening_played(1);
    nocturne_attract_set_music_duration(0.0f);
    CHECK_EQ(nocturne_attract_tick(), 0);
}

// It fires a little before the end of a pass of the music, once.
NOCTURNE_TEST(the_movie_fires_once_as_the_music_ends) {
    nocturne_attract_set_opening_played(1);
    nocturne_attract_set_music_duration(0.4f);
    CHECK_EQ(nocturne_attract_tick(), 0);
    wait(0.2);
    CHECK_EQ(nocturne_attract_tick(), 1);
    CHECK_EQ(nocturne_attract_tick(), 0);

    // A track shorter than the lead fires at once.
    nocturne_attract_set_music_duration(0.1f);
    CHECK_EQ(nocturne_attract_tick(), 1);
}

// A pass that ends behind a screen in front of the menu is let go, and the
// movie waits for the end of the one now playing.
NOCTURNE_TEST(a_pass_that_ends_away_from_the_menu_is_let_go) {
    nocturne_attract_set_opening_played(1);
    nocturne_attract_set_music_duration(0.3f);
    // Two passes end 0.05s and 0.35s in, both behind the gap; the next ends at
    // 0.65s, a little after the menu comes back.
    wait(0.62);
    CHECK_EQ(nocturne_attract_tick(), 0);
    wait(0.15);
    CHECK_EQ(nocturne_attract_tick(), 1);
}

// The silence before the movie is held.
NOCTURNE_TEST(the_silence_before_the_movie_is_held) {
    const double start = nocturne_now_seconds();
    nocturne_attract_pre_movie_pause();
    CHECK(nocturne_now_seconds() - start >= 0.39);
}

NOCTURNE_TEST_MAIN()
