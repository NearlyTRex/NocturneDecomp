// =============================================================================
// GAMEPAD, NO PROGRAM DIRECTORY — only the data directory's mapping file
// =============================================================================

#include "game/gamepad.h"
#include "gamepad_support.h"
#include "nocturne_test.h"

using namespace gamepad_support;

// When SDL cannot say where the program is, the copy beside the data is the
// only one looked for.
NOCTURNE_TEST(without_a_program_directory_the_data_copy_is_loaded) {
    stand.base_path = nullptr;
    nocturne_gamepad_init();
    CHECK_EQ(stand.mapping_files.size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
