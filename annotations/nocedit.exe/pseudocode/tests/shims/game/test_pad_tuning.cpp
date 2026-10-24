// =============================================================================
// CONTROLLER TUNING — what [Control] in nocturne.ini can and cannot do
// =============================================================================
//
// The INI is read through a stand-in for the engine's CIni accessors, from a
// game directory the test makes its working directory.

#include "nocturne_test.h"
#include "../gl/ini_support.h"

#include "game/pad_tuning.h"
#include "shim_config.h"

#include <filesystem>
#include <system_error>

namespace {

namespace fs = std::filesystem;

void enter_game_directory() {
    std::error_code ec;
    const fs::path dir = fs::temp_directory_path(ec) / "nocturne_pad_tuning_test";
    fs::remove_all(dir, ec);
    fs::create_directories(dir, ec);
    fs::current_path(dir, ec);
    ini_support::values.clear();
    nocturne_pad_tuning_reload();
}

}  // namespace

// No INI yet: the build's defaults.
NOCTURNE_TEST(without_an_ini_the_tuning_is_the_build_default) {
    enter_game_directory();
    const NocturnePadTuning *tuning = nocturne_pad_tuning();
    CHECK_NEAR(tuning->stick_deadzone, NOCTURNE_PAD_STICK_DEADZONE, 1e-6f);
    CHECK_NEAR(tuning->turn_rate, NOCTURNE_PAD_TURN_RATE, 1e-6f);
    CHECK_NEAR(tuning->look_rate, NOCTURNE_PAD_LOOK_RATE, 1e-6f);
    CHECK_EQ(tuning->invert_look, NOCTURNE_PAD_INVERT_LOOK);
}

// Percentages, read once: a later change is not seen until a reload.
NOCTURNE_TEST(the_ini_sets_the_tuning_and_a_reload_reads_it_again) {
    enter_game_directory();
    ini_support::save("Control", "padDeadzone", "30");
    ini_support::save("Control", "padTurnRate", "50");
    ini_support::save("Control", "padLookRate", "10");
    ini_support::save("Control", "invertPadYAxis", "1");
    const NocturnePadTuning *tuning = nocturne_pad_tuning();
    CHECK_NEAR(tuning->stick_deadzone, 0.30f, 1e-6f);
    CHECK_NEAR(tuning->turn_rate, 0.50f, 1e-6f);
    CHECK_NEAR(tuning->look_rate, 0.10f, 1e-6f);
    CHECK_EQ(tuning->invert_look, 1);

    ini_support::save("Control", "invertPadYAxis", "0");
    CHECK_EQ(nocturne_pad_tuning()->invert_look, 1);
    nocturne_pad_tuning_reload();
    CHECK_EQ(nocturne_pad_tuning()->invert_look, 0);
}

// Out of range is the nearest end of it, so no file leaves the pad unusable.
NOCTURNE_TEST(values_out_of_range_are_clamped) {
    enter_game_directory();
    ini_support::save("Control", "padDeadzone", "95");
    ini_support::save("Control", "padTurnRate", "0");
    ini_support::save("Control", "padLookRate", "400");
    const NocturnePadTuning *tuning = nocturne_pad_tuning();
    CHECK_NEAR(tuning->stick_deadzone, 0.40f, 1e-6f);
    CHECK_NEAR(tuning->turn_rate, 0.05f, 1e-6f);
    CHECK_NEAR(tuning->look_rate, 1.00f, 1e-6f);
}

NOCTURNE_TEST_MAIN()
