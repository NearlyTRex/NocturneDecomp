// =============================================================================
// UPSCALER — the filter that enlarges the frame, and FSR's sharpness
// =============================================================================
//
// Both kept in nocturne.ini and read once. What the ini holds and does not name
// is the default; the Options lines step through what they offer and save it.

#include "gl/upscaler.h"
#include "ini_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <string>
#include <system_error>

// Values the ini does not name are Standard and the default sharpness.
NOCTURNE_TEST(values_the_ini_does_not_name_are_the_defaults) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_upscaler_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "upscaler", "-1");
    ini_support::values["Graphics/fsrSharpness"] = "101";
    CHECK_EQ(nocturne_upscaler_get(), NOCTURNE_UPSCALER_STANDARD);
    CHECK_EQ(nocturne_upscaler_sharpness_get(), NOCTURNE_UPSCALER_SHARPNESS_DEFAULT);
}

// The upscaler steps both ways, wrapping, and is saved.
NOCTURNE_TEST(the_upscaler_steps_and_is_saved) {
    CHECK_EQ(nocturne_upscaler_cycle(1), NOCTURNE_UPSCALER_FSR);
    CHECK_EQ(ini_support::values["Graphics/upscaler"], std::string("1"));
    CHECK_EQ(nocturne_upscaler_get(), NOCTURNE_UPSCALER_FSR);
    CHECK_EQ(nocturne_upscaler_cycle(1), NOCTURNE_UPSCALER_STANDARD);
    CHECK_EQ(nocturne_upscaler_cycle(-1), NOCTURNE_UPSCALER_FSR);
}

// Sharpness steps a quarter at a time, wrapping at both ends; a value set by
// hand between steps starts from the step below it.
NOCTURNE_TEST(sharpness_steps_by_quarters_and_is_saved) {
    CHECK_EQ(nocturne_upscaler_sharpness_cycle(1), 75);
    CHECK_EQ(ini_support::values["Graphics/fsrSharpness"], std::string("75"));
    CHECK_EQ(nocturne_upscaler_sharpness_cycle(1), 100);
    CHECK_EQ(nocturne_upscaler_sharpness_cycle(1), 0);
    CHECK_EQ(nocturne_upscaler_sharpness_cycle(-1), 100);
}

NOCTURNE_TEST(each_upscaler_has_a_name) {
    CHECK_EQ(std::string(nocturne_upscaler_name(NOCTURNE_UPSCALER_STANDARD)),
             std::string("Standard"));
    CHECK_EQ(std::string(nocturne_upscaler_name(NOCTURNE_UPSCALER_FSR)), std::string("FSR"));
}

NOCTURNE_TEST_MAIN()
