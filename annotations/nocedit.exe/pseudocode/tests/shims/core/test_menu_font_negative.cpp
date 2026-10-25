// =============================================================================
// MENU FONT, NEGATIVE — a saved value below the fonts is the large one too
// =============================================================================

#include "../gl/ini_support.h"
#include "core/menu_font.h"
#include "nocturne_test.h"

#include <filesystem>
#include <system_error>

NOCTURNE_TEST(a_font_below_the_list_is_the_large_one) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_menu_font_negative_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "menuFont", "-1");
    CHECK_EQ(nocturne_menu_font_get(), NOCTURNE_MENU_FONT_LARGE);
}

NOCTURNE_TEST_MAIN()
