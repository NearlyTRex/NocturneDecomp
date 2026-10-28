// =============================================================================
// UPSCALER, SAVED — the choice a previous run, or a hand edit, left in the ini
// =============================================================================
//
// The first use of each setting is what reads it, so this is a run of its own.

#include "gl/upscaler.h"
#include "ini_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <system_error>

// FSR and a sharpness between steps read back as they are; the next step up
// from 60 is 75.
NOCTURNE_TEST(the_saved_choice_is_the_choice) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_upscaler_saved_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "upscaler", "1");
    ini_support::values["Graphics/fsrSharpness"] = "60";
    CHECK_EQ(nocturne_upscaler_get(), NOCTURNE_UPSCALER_FSR);
    CHECK_EQ(nocturne_upscaler_sharpness_get(), 60);
    CHECK_EQ(nocturne_upscaler_sharpness_cycle(1), 75);
}

NOCTURNE_TEST_MAIN()
