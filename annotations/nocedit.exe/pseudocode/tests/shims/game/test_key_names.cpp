// =============================================================================
// KEY NAMES — what a binding is called on screen
// =============================================================================
//
// The shipped names for the mouse and the stick's buttons, the stick's
// directions under stick names, the controller's own codes by the controller's
// names, the keyboard by the engine's; each in the next of ten buffers, so a
// line holding several names keeps them all.

#include "front_support.h"
#include "game/key_names.h"
#include "nocturne_test.h"

#include <string>

namespace {

using front_support::stand;

std::string name(int code) {
    return nocturne_key_display_name(code);
}

} // namespace

NOCTURNE_TEST(each_code_by_its_name) {
    stand.reset();
    CHECK_EQ(name(INPUT_NONE), std::string("(none)"));
    CHECK_EQ(name(DIM_XAXIS), std::string("Mouse X-Axis"));
    CHECK_EQ(name(DIM_MBUTTON), std::string("Mouse B3"));
    CHECK_EQ(name(DIJ_BUTTON10), std::string("Button 10"));
    CHECK_EQ(name(DIJ_UP), std::string("Left Stick Forward"));
    CHECK_EQ(name(NOCTURNE_PAD_BUTTON_BASE), std::string("Pad A"));
    CHECK_EQ(name(NOCTURNE_PAD_CODE_END - 1), std::string("Pad A"));
    CHECK_EQ(name(DIK_A), std::string("Key 30"));
    CHECK_EQ(name(NOCTURNE_PAD_CODE_END), "Key " + std::to_string(NOCTURNE_PAD_CODE_END));
}

// Ten names stand at once; the eleventh takes the first's buffer.
NOCTURNE_TEST(ten_names_at_once) {
    stand.reset();
    char *first = nocturne_key_display_name(DIM_XAXIS);
    for (int i = 0; i < 9; i++)
        CHECK(nocturne_key_display_name(DIJ_BUTTON1) != first);
    CHECK_EQ(std::string(first), std::string("Mouse X-Axis"));
    CHECK(nocturne_key_display_name(DIJ_BUTTON1) == first);
    CHECK_EQ(g_StringBufferIndex, 1);
}

NOCTURNE_TEST_MAIN()
