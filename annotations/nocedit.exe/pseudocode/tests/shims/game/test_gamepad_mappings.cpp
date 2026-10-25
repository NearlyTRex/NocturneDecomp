// =============================================================================
// GAMEPAD MAPPINGS — the mapping file beside the program, and beside the data
// =============================================================================
//
// Where the two are one file, it is loaded once.

#include "game/gamepad.h"
#include "gamepad_support.h"
#include "nocturne_test.h"

#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

using namespace gamepad_support;

NOCTURNE_TEST(one_mapping_file_in_both_places_is_loaded_once) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_gamepad_mappings_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    std::ofstream(dir / "gamecontrollerdb.txt") << "# mappings\n";

    const std::string base = dir.string() + "/";
    stand.base_path = base.c_str();
    stand.mappings_added = 3;
    nocturne_gamepad_init();
    CHECK_EQ(stand.mapping_files.size(), (size_t)1);
    if (!stand.mapping_files.empty()) {
        CHECK_EQ(stand.mapping_files[0], base + "gamecontrollerdb.txt");
    }
}

NOCTURNE_TEST_MAIN()
