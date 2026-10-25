// =============================================================================
// MENU FONT, SAVED — a run after the first reads the small font back
// =============================================================================

#include "../gl/ini_support.h"
#include "core/menu_font.h"
#include "nocturne_test.h"

#include <filesystem>
#include <system_error>

NOCTURNE_TEST(the_saved_font_is_the_font) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_menu_font_saved_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "menuFont", "1");
    CHECK_EQ(nocturne_menu_font_get(), NOCTURNE_MENU_FONT_SMALL);
}

NOCTURNE_TEST_MAIN()
