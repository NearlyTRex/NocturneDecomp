// =============================================================================
// ANTI-ALIASING — the setting
// =============================================================================
//
// Kept in nocturne.ini and read once; what the ini holds and does not name is
// Off, and the Options line steps through what it offers and saves it.

#include "gl/antialias.h"
#include "ini_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <string>
#include <system_error>

// A value the ini does not name is Off.
NOCTURNE_TEST(a_value_the_ini_does_not_name_is_off) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_antialias_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "antialias", "2");
    CHECK_EQ(nocturne_antialias_get(), NOCTURNE_ANTIALIAS_OFF);
}

// The setting steps both ways, wrapping, and is saved.
NOCTURNE_TEST(the_setting_steps_and_is_saved) {
    CHECK_EQ(nocturne_antialias_cycle(1), NOCTURNE_ANTIALIAS_FXAA);
    CHECK_EQ(ini_support::values["Graphics/antialias"], std::string("1"));
    CHECK_EQ(nocturne_antialias_get(), NOCTURNE_ANTIALIAS_FXAA);
    CHECK_EQ(nocturne_antialias_cycle(1), NOCTURNE_ANTIALIAS_OFF);
    CHECK_EQ(nocturne_antialias_cycle(-1), NOCTURNE_ANTIALIAS_FXAA);
    CHECK_EQ(ini_support::values["Graphics/antialias"], std::string("1"));
}

// Each choice by its name; a mode that does not exist reads as Off.
NOCTURNE_TEST(each_choice_has_a_name) {
    CHECK_EQ(std::string(nocturne_antialias_name(NOCTURNE_ANTIALIAS_OFF)), std::string("Off"));
    CHECK_EQ(std::string(nocturne_antialias_name(NOCTURNE_ANTIALIAS_FXAA)), std::string("FXAA"));
    CHECK_EQ(std::string(nocturne_antialias_name(NOCTURNE_ANTIALIAS_COUNT)), std::string("Off"));
    CHECK_EQ(std::string(nocturne_antialias_name(-1)), std::string("Off"));
}

NOCTURNE_TEST_MAIN()
