// =============================================================================
// MOVIE AUDIO — the movies' own level, from [Sound] MovieVolume
// =============================================================================
//
// With no INI yet; test_movie_audio_saved.cpp starts from a saved one.

#include "../gl/ini_support.h"
#include "game/movie_audio.h"
#include "nocturne_test.h"
#include "sound_support.h"

#include <filesystem>
#include <string>
#include <system_error>

// The level starts at the build's default, is set in fifths that land on whole
// percentages, is held between nothing and full, and is written to the INI.
NOCTURNE_TEST(the_level_is_the_default_until_it_is_set) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_movie_audio_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);

    CHECK_EQ(nocturne_movie_volume_get(), 1.0f);
    nocturne_movie_volume_set(0.2f * 3.0f);
    CHECK_EQ(nocturne_movie_volume_get(), 0.6f);
    CHECK_EQ(ini_support::values["Sound/MovieVolume"], std::string("60"));
    nocturne_movie_volume_set(1.4f);
    CHECK_EQ(nocturne_movie_volume_get(), 1.0f);
    nocturne_movie_volume_set(-1.0f);
    CHECK_EQ(nocturne_movie_volume_get(), 0.0f);
}

// A movie plays at that level, and not at all while the game is muted.
NOCTURNE_TEST(a_movie_plays_at_the_level_unless_muted) {
    nocturne_movie_volume_set(0.4f);
    CHECK_EQ(nocturne_movie_audio_gain(), 0.4f);
    sound_support::muted = 1;
    CHECK_EQ(nocturne_movie_audio_gain(), 0.0f);
    sound_support::muted = 0;
}

NOCTURNE_TEST_MAIN()
