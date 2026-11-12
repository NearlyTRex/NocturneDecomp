// =============================================================================
// PAUSE SOUND — the pause menu holds the sound where it is
// =============================================================================

#include "game/pause_sound.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "pause_sound_support.h"

#include <memory>
#include <string>
#include <vector>

using namespace pause_sound_support;

namespace {

using Calls = std::vector<std::string>;

std::unique_ptr<CGame> s_game(new CGame());

// The menu closed, with a cinematic being skipped or not.
void close_menu(int skipping = 0) {
    s_game->cinematic_skip_in_progress = skipping;
    nocturne_pause_sound_resume(s_game.get(), nullptr);
}

// With nothing playing: the menu opened, `choices` made in turn, and closed.
Calls pause(std::vector<int> choices, int skipping = 0) {
    reset();
    nocturne_pause_sound_hold(nullptr);
    for (int choice : choices) {
        nocturne_pause_sound_choice(nullptr, choice);
    }
    close_menu(skipping);
    return calls;
}

int count(const std::string &call) {
    int n = 0;
    for (const std::string &c : calls) {
        n += (int)(c == call);
    }
    return n;
}

} // namespace

// --- the menu's choices -------------------------------------------------------

// Return, Escape, Save and Options carry on: nothing is shut down or started.
NOCTURNE_TEST(return_escape_save_and_options_carry_on) {
    CHECK(pause({0}).empty());
    CHECK(pause({-1}).empty());
    CHECK(pause({3}).empty());
    CHECK(pause({1, 1, 0}).empty());
}

// Load and the choices after Save shut the sound down, once, and leaving the
// menu brings it back as shipped.
NOCTURNE_TEST(load_and_the_rest_shut_the_sound_down) {
    const Calls expected = {"shutdown", "init"};
    CHECK(pause({2}) == expected);
    CHECK(pause({4, 4}) == expected);
}

// Skipping a cinematic shuts the sound down and starts nothing, as shipped,
// whether the skip was chosen here or was already under way.
NOCTURNE_TEST(a_skipped_cinematic_starts_nothing) {
    CHECK(pause({5}, 1) == Calls({"shutdown"}));
    CHECK(pause({0}, 1) == Calls({"shutdown"}));
}

// --- the hold -----------------------------------------------------------------

// Each sound playing is held where it is, its hardware voice with it, and the
// compute and mix pass it by; leaving lets each go, with nothing started.
NOCTURNE_TEST(each_sound_playing_is_held_and_let_go) {
    reset();
    position = 1234.0;
    play(2, 7, "voice.mp3");
    play(5, 9, "music.mp3", 3);
    // A voice handle with no buffer behind it, and one past the table.
    play(6, 11, "odd.wav").hardware_buffer_handle = 4;
    play(8, 12, "odder.wav").hardware_buffer_handle = 31;
    CHECK_EQ(nocturne_pause_sound_held(), 0);
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[2]), 0);
    nocturne_pause_sound_hold(nullptr);
    CHECK_EQ(lock_depth, 0);
    CHECK(calls == Calls({"voice 3 held 1"}));
    CHECK_EQ(nocturne_pause_sound_held(), 1);
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[2]), 1);
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[5]), 1);
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[0]), 0);
    calls.clear();
    close_menu();
    CHECK(calls == Calls({"voice 3 held 0"}));
    CHECK_EQ(lock_depth, 0);
    CHECK_EQ(nocturne_pause_sound_held(), 0);
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[2]), 0);
    CHECK_EQ(g_SfxSlots[2].playback_state, 7);
}

// A sound the menu starts in a slot the hold lost is not held.
NOCTURNE_TEST(a_new_sound_in_a_lost_slot_is_not_held) {
    reset();
    play(2, 7, "voice.mp3");
    nocturne_pause_sound_hold(nullptr);
    play(2, 40, "splash-music-22.wav");
    CHECK_EQ(nocturne_pause_sound_slot_held(&g_SfxSlots[2]), 0);
    close_menu();
}

// --- the menu's own sounds ----------------------------------------------------

// The menu music as CSound::configure plays it, on the music channel at the
// output's rate, with no reset; nothing while muted.
NOCTURNE_TEST(the_menu_music_starts_without_a_reset) {
    reset();
    nocturne_pause_sound_menu_music();
    rate = 44100;
    nocturne_pause_sound_menu_music();
    CHECK(calls == Calls({"enable", "start splash-music-22.wav at 0 ch 1 flags 1", "enable",
                          "start splash-music-44.wav at 0 ch 1 flags 1"}));
    CHECK_EQ(g_SfxLastSlot, 0);
    calls.clear();
    muted = 1;
    nocturne_pause_sound_menu_music();
    CHECK(calls.empty());
}

// Quiet stops every sound but the held ones.
NOCTURNE_TEST(quiet_stops_all_but_the_held_sounds) {
    reset();
    play(2, 7, "voice.mp3");
    nocturne_pause_sound_hold(nullptr);
    play(0, 40, "splash-music-22.wav");
    play(4, 41, "colt45-0.wav");
    g_SfxSlots[6].playback_state = 42; // a slot with no sample is not playing
    nocturne_pause_sound_quiet();
    CHECK(calls == Calls({"kill 0", "kill 4"}));
    CHECK_EQ(lock_depth, 0);
    close_menu();
}

// --- sounds lost on the way ---------------------------------------------------

// A held sound lost to a reset goes back into its own slot under its own
// serial, at the position and with the options and fade it had; the menu's
// sounds go first, and the slots passed over are free again.
NOCTURNE_TEST(a_lost_sound_comes_back_where_it_was) {
    reset();
    position = 4410.0;
    CSfxSlot &voice = play(3, 7, "voice.mp3", 2);
    voice.options.channel_index = 2;
    voice.options.flags = 4;
    voice.fade_target_volume = 0.5f;
    voice.fade_time_remaining = 1.5f;
    voice.stop_after_fade = 1.0f;
    play(5, 9, "ambient.wav");
    nocturne_pause_sound_hold(nullptr);
    // A device reset: every slot killed, then the menu music in slot 0.
    g_SfxSlots[3] = CSfxSlot();
    g_SfxSlots[5] = CSfxSlot();
    play(0, 40, "splash-music-22.wav");
    calls.clear();
    close_menu();
    CHECK(calls == Calls({"kill 0", "start voice.mp3 at 4410 ch 2 flags 4",
                          "start ambient.wav at 4410 ch 0 flags 0"}));
    CHECK_EQ(lock_depth, 0);
    CHECK_EQ(g_SfxLastSlot, 0);
    CHECK_EQ(g_SfxSlots[3].playback_state, 7);
    CHECK_EQ(g_SfxSlots[3].fade_target_volume, 0.5f);
    CHECK_EQ(g_SfxSlots[3].fade_time_remaining, 1.5f);
    CHECK_EQ(g_SfxSlots[3].stop_after_fade, 1.0f);
    CHECK_EQ(g_SfxSlots[5].playback_state, 9);
    for (int i : {0, 1, 2, 4}) {
        CHECK_EQ_AT(g_SfxSlots[i].playback_state, 0, std::to_string(i));
    }
}

// Where the position cannot be read, the one the options last had stands.
NOCTURNE_TEST(an_unread_position_keeps_the_options_one) {
    reset();
    position = -1.0;
    play(1, 7, "voice.mp3").options.playback_position = 300.0;
    nocturne_pause_sound_hold(nullptr);
    g_SfxSlots[1] = CSfxSlot();
    calls.clear();
    close_menu();
    CHECK(calls == Calls({"start voice.mp3 at 300 ch 0 flags 0"}));
}

// A lost sound that will not start (its channel is off) stays gone; one the
// engine puts somewhere else is a new sound, its slot left as it came.
NOCTURNE_TEST(a_lost_sound_that_cannot_go_back_stays_new_or_gone) {
    reset();
    play(1, 7, "voice.mp3");
    nocturne_pause_sound_hold(nullptr);
    g_SfxSlots[1] = CSfxSlot();
    start_fails = true;
    close_menu();
    CHECK_EQ(g_SfxSlots[1].playback_state, 0);
    CHECK_EQ(g_SfxSlots[0].playback_state, 0);

    reset();
    play(1, 7, "voice.mp3");
    nocturne_pause_sound_hold(nullptr);
    g_SfxSlots[1] = CSfxSlot();
    start_elsewhere = 9;
    close_menu();
    CHECK_EQ(g_SfxSlots[9].playback_state, 100);
    CHECK_EQ(g_SfxSlots[1].playback_state, 0);
    CHECK_EQ(count("start voice.mp3 at 0 ch 0 flags 0"), 1);
}

NOCTURNE_TEST_MAIN()
