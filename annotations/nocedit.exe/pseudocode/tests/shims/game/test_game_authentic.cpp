// =============================================================================
// GAME SHIMS, AUTHENTIC — the shipped game's behaviour, with the flags on
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_HERO_ACTIONS, _HELPER_DEATH, _CUE_RETRIGGER,
// _STATUS_BAR_WIDTH and _FMV, each of which puts the shipped behaviour back.

#include "game/helper_death.h"
#include "game/hero_svetlana.h"
#include "game/movie_audio.h"
#include "game/script_cue.h"
#include "game/status_bar.h"
#include "nocturne_test.h"
#include "sound_support.h"

// A player Svetlana cannot be grabbed, a helper's death holds nothing, a cue
// can start over, bars are their shipped width, and movies play at full
// volume whatever the game's mute.
NOCTURNE_TEST(each_addition_is_off) {
    CHECK_EQ(nocturne_svetlana_get_grabbed(nullptr, nullptr, 1), 0);

    nocturne_helper_death_note_end();
    nocturne_helper_death_reset();
    CHECK_EQ(nocturne_helper_death_game_over(), 0);
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);

    nocturne_script_cue_started("music\\castle.wav", 41);
    CHECK_EQ(nocturne_script_cue_playing("music\\castle.wav"), 0u);

    nocturne_status_bar_note(nullptr);
    CHECK_EQ(nocturne_status_bar_right((char *)"Svetlana", 10, 110), 110);

    sound_support::muted = 1;
    CHECK_EQ(nocturne_movie_audio_gain(), 1.0f);
}

NOCTURNE_TEST_MAIN()
