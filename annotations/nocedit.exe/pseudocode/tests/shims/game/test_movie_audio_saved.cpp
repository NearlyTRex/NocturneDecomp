// =============================================================================
// MOVIE AUDIO, SAVED — the level a saved INI holds
// =============================================================================

#include "../gl/ini_support.h"
#include "game/movie_audio.h"
#include "nocturne_test.h"

#include <filesystem>
#include <system_error>

// What the INI holds is the level, held to nothing at the bottom.
NOCTURNE_TEST(the_saved_level_is_read_and_held_in_range) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_movie_audio_saved_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Sound", "MovieVolume", "-20");
    CHECK_EQ(nocturne_movie_volume_get(), 0.0f);
}

NOCTURNE_TEST_MAIN()
