// =============================================================================
// RNG — the two streams, and the audit of draws that use neither door
// =============================================================================
//
// Simulation draws from the game's seeded generator, which every machine
// shares, and is counted so the desync check can compare counts; effects draw
// from the per-machine libc stream. A bare rand() inside a sim frame is
// counted as undeclared, and in a session said once.

#include "net/rng.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstdlib>

namespace {

using net_support::game;
using net_support::stand;

void fresh() {
    stand.reset();
    nocturne_rng_reset();
    srand(1);
}

} // namespace

// Outside a session a sim draw is libc's, and not counted.
NOCTURNE_TEST(outside_a_session_a_sim_draw_is_the_libc_streams) {
    fresh();
    nocturne_rng_sim();
    CHECK_EQ(nocturne_rng_sim_draws(), 0u);
    CHECK_EQ(nocturne_rng_undeclared_draws(), 0u);
    CHECK_EQ(stand.next_random, 0u);
}

// In a session it is the game's generator, cut to rand()'s range and counted,
// in a sim frame or out of one; outside one it is said once.
NOCTURNE_TEST(in_a_session_a_sim_draw_is_the_games_and_counted) {
    fresh();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    stand.next_random = 0x18001;
    CHECK_EQ(nocturne_rng_sim(), 1u);
    CHECK_EQ(nocturne_rng_sim(), 2u);
    game.is_processing = 1;
    CHECK_EQ(nocturne_rng_sim(), 3u);
    g_CGamePtr = nullptr;
    nocturne_rng_sim();
    CHECK_EQ(nocturne_rng_sim_draws(), 4u);

    CHECK_EQ(nocturne_rng_game(nullptr), 0x18005u);
    CHECK_EQ(nocturne_rng_sim_draws(), 5u);
    nocturne_rng_frame_reset(1);
    CHECK_EQ(nocturne_rng_sim_draws(), 0u);
}

// The effects stream: a value, a float in range, a chance, an integer in range
// with the original's own clamping at both ends.
NOCTURNE_TEST(the_effects_stream_answers_in_range) {
    fresh();
    nocturne_rng_fx();
    for (int i = 0; i < 50; i++) {
        const float f = nocturne_rng_fx_range(2.0f, 4.0f);
        CHECK(2.0f <= f && f <= 4.0f);
    }
    CHECK_EQ(nocturne_rng_fx_chance(0.0f), 0);
    CHECK_EQ(nocturne_rng_fx_chance(2.0f), 1);

    bool low = false, high = false;
    for (int i = 0; i < 200; i++) {
        const int n = nocturne_rng_fx_int(0, 1);
        CHECK(n == 0 || n == 1);
        low = low || (n == 0);
        high = high || (n == 1);
    }
    CHECK(low && high);
    // A range given backwards answers its first end.
    for (int i = 0; i < 50; i++) {
        const int n = nocturne_rng_fx_int(5, 1);
        CHECK(1 <= n && n <= 5);
    }
    // Below zero, truncation toward it carries the top of the range past its
    // end, which is the end.
    for (int i = 0; i < 50; i++) {
        const int n = nocturne_rng_fx_int(-5, -1);
        CHECK(-5 <= n && n <= -1);
    }
    nocturne_rng_seed();
}

// The game's own fallback outside CGame::process is libc's, said once in a
// session.
NOCTURNE_TEST(the_off_frame_fallback_is_libcs) {
    fresh();
    nocturne_rng_offframe();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    nocturne_rng_offframe();
    nocturne_rng_offframe();
    CHECK_EQ(nocturne_rng_sim_draws(), 0u);
}

// A bare rand() is counted only inside a sim frame, and said once in a
// session; one made through a door is not counted at all.
NOCTURNE_TEST(a_bare_draw_in_a_sim_frame_is_undeclared) {
    fresh();
    (void)rand();
    CHECK_EQ(nocturne_rng_undeclared_draws(), 0u);
    game.is_processing = 1;
    (void)rand();
    nocturne_rng_fx();
    CHECK_EQ(nocturne_rng_undeclared_draws(), 1u);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    (void)rand();
    (void)rand();
    CHECK_EQ(nocturne_rng_undeclared_draws(), 3u);
    nocturne_rng_frame_reset(2);
    CHECK_EQ(nocturne_rng_undeclared_draws(), 0u);
}

NOCTURNE_TEST_MAIN()
