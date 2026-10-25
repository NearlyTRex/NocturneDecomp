// =============================================================================
// OS FONT — system fonts, the bitmap ones, or whatever msglist.txt asked for
// =============================================================================
//
// Kept in nocturne.ini and read once; Auto leaves the engine's own choice as it
// is, the other two set it.

#include "../gl/ini_support.h"
#include "core/os_font.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <filesystem>
#include <string>
#include <system_error>

// A mode the ini does not name is Auto, which changes nothing.
NOCTURNE_TEST(a_mode_the_ini_does_not_name_is_auto) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_os_font_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "osFont", "9");
    CHECK_EQ(nocturne_os_font_get(), NOCTURNE_OS_FONT_AUTO);
    g_UseOSFonts = 1;
    nocturne_os_font_apply();
    CHECK_EQ(g_UseOSFonts, 1);
}

// System and Bitmap set the engine's choice, and are saved.
NOCTURNE_TEST(system_and_bitmap_set_the_engines_choice) {
    nocturne_os_font_set(NOCTURNE_OS_FONT_BITMAP);
    nocturne_os_font_apply();
    CHECK_EQ(g_UseOSFonts, 0);
    CHECK_EQ(ini_support::values["Graphics/osFont"], std::string("1"));
    CHECK_EQ(nocturne_os_font_cycle(1), NOCTURNE_OS_FONT_SYSTEM);
    nocturne_os_font_apply();
    CHECK_EQ(g_UseOSFonts, 1);
    CHECK_EQ(nocturne_os_font_cycle(1), NOCTURNE_OS_FONT_AUTO);
    nocturne_os_font_set(-1);
    CHECK_EQ(nocturne_os_font_get(), NOCTURNE_OS_FONT_AUTO);
}

NOCTURNE_TEST(each_mode_has_a_name) {
    CHECK_EQ(std::string(nocturne_os_font_name(NOCTURNE_OS_FONT_AUTO)), std::string("Auto"));
    CHECK_EQ(std::string(nocturne_os_font_name(NOCTURNE_OS_FONT_BITMAP)), std::string("Bitmap"));
    CHECK_EQ(std::string(nocturne_os_font_name(NOCTURNE_OS_FONT_SYSTEM)), std::string("System"));
}

NOCTURNE_TEST_MAIN()
