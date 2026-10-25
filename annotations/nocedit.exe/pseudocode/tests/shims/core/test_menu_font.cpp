// =============================================================================
// MENU FONT — the front end's font, large or small, kept in nocturne.ini
// =============================================================================
//
// Read once, on first use; a value that names no font is the large one. The
// first read is what is under test, so a saved small font, and one below the
// list, are runs of their own (test_menu_font_saved.cpp,
// test_menu_font_negative.cpp).

#include "../gl/ini_support.h"
#include "core/menu_font.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <filesystem>
#include <string>
#include <system_error>

NOCTURNE_TEST(a_font_the_ini_does_not_name_is_the_large_one) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_menu_font_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "menuFont", "5");
    CHECK_EQ(nocturne_menu_font_get(), NOCTURNE_MENU_FONT_LARGE);
    CHECK_EQ(nocturne_menu_font_cycle(1), NOCTURNE_MENU_FONT_SMALL);
    CHECK_EQ(ini_support::values["Graphics/menuFont"], std::string("1"));
    CHECK_EQ(std::string(nocturne_menu_font_name(NOCTURNE_MENU_FONT_SMALL)), std::string("Small"));
    CHECK_EQ(std::string(nocturne_menu_font_name(NOCTURNE_MENU_FONT_LARGE)), std::string("Large"));
}

// The small font is the editor's, when it is loaded; otherwise, and for the
// large one, the theme's.
NOCTURNE_TEST(the_font_is_the_one_chosen_where_it_is_loaded) {
    static CBitFont theme = {};
    static CBitFont small = {};
    g_ThemeFont = &theme;
    g_SmallEditorFont = nullptr;
    CHECK(nocturne_menu_font() == &theme);
    g_SmallEditorFont = &small;
    CHECK(nocturne_menu_font() == &small);
    nocturne_menu_font_cycle(1);
    CHECK(nocturne_menu_font() == &theme);
}

NOCTURNE_TEST_MAIN()
