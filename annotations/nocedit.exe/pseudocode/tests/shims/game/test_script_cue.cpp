// =============================================================================
// SCRIPT CUES — a music cue still playing is not started over
// =============================================================================

#include "game/script_cue.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <string>

using namespace game_support;

// A cue started is playing for as long as its sound is, under any case of its
// name; one never started, or no longer sounding, is not.
NOCTURNE_TEST(a_started_cue_plays_while_its_sound_does) {
    stand.reset();
    nocturne_script_cue_started("music\\castle.wav", 41);
    stand.playing.insert(41);
    CHECK_EQ(nocturne_script_cue_playing("MUSIC\\CASTLE.WAV"), 41u);
    CHECK_EQ(nocturne_script_cue_playing("music\\mine.wav"), 0u);
    stand.playing.clear();
    CHECK_EQ(nocturne_script_cue_playing("music\\castle.wav"), 0u);

    // Started again, it takes the new handle.
    nocturne_script_cue_started("music\\castle.wav", 42);
    stand.playing.insert(42);
    CHECK_EQ(nocturne_script_cue_playing("music\\castle.wav"), 42u);
}

// No name, an empty one, or a sound that did not start is nothing to keep.
NOCTURNE_TEST(nothing_is_kept_for_no_cue) {
    stand.reset();
    stand.playing.insert(0);
    nocturne_script_cue_started(nullptr, 5);
    nocturne_script_cue_started("", 5);
    nocturne_script_cue_started("music\\never.wav", 0);
    CHECK_EQ(nocturne_script_cue_playing(nullptr), 0u);
    CHECK_EQ(nocturne_script_cue_playing(""), 0u);
    CHECK_EQ(nocturne_script_cue_playing("music\\never.wav"), 0u);
}

// Past sixteen cues the oldest is the one written over.
NOCTURNE_TEST(a_full_table_writes_over_the_oldest) {
    stand.reset();
    for (unsigned int i = 1; i <= 17; i++) {
        const std::string name = "cue" + std::to_string(i);
        nocturne_script_cue_started(name.c_str(), 100 + i);
        stand.playing.insert(100 + i);
    }
    CHECK_EQ(nocturne_script_cue_playing("cue17"), 117u);
    CHECK_EQ(nocturne_script_cue_playing("cue2"), 102u);
    CHECK_EQ(nocturne_script_cue_playing("cue1"), 0u);
}

NOCTURNE_TEST_MAIN()
