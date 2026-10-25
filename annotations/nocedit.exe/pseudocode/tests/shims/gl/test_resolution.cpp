// =============================================================================
// RESOLUTION LIST — what the Graphics Options selector steps through
// =============================================================================
//
// Left and right step down and up the modes, wrapping at both ends, within the
// tallest the screen will take while acceleration is off; a mode not in the
// list, from an old INI, snaps to the nearest rather than to the smallest.

#include "gl/resolution.h"
#include "nocturne_test.h"

#include <string>

namespace {

struct Mode {
    int width;
    int height;
    bool operator==(const Mode &o) const {
        return width == o.width && height == o.height;
    }
};

const int kRight = 1;
const int kLeft = -1;
const int kSoftwareMax = 480; // the Options screen's ceiling without acceleration

Mode step(Mode from, int direction, int max_height = 0) {
    Mode to = {0, 0};
    nocturne_resolution_step(from.width, from.height, direction, max_height, &to.width, &to.height);
    return to;
}

} // namespace

// Right is the next larger mode and left the next smaller, through every mode
// there is, round from the largest to the smallest and back.
NOCTURNE_TEST(left_and_right_step_through_every_mode_and_wrap) {
    const Mode modes[] = {{320, 240}, {400, 300},  {512, 384},   {640, 480},
                          {800, 600}, {1024, 768}, {1280, 1024}, {1600, 1200}};
    const int count = (int)(sizeof(modes) / sizeof(modes[0]));
    for (int i = 0; i < count; ++i) {
        CHECK(step(modes[i], kRight) == modes[(i + 1) % count]);
        CHECK(step(modes[i], kLeft) == modes[(i + count - 1) % count]);
    }
}

// Without acceleration the modes stop at 480 lines, and the stepping wraps
// within them; a mode past the ceiling, which an INI can hold, comes down to it.
NOCTURNE_TEST(the_software_ceiling_bounds_the_stepping) {
    CHECK(step({640, 480}, kRight, kSoftwareMax) == (Mode{320, 240}));
    CHECK(step({320, 240}, kLeft, kSoftwareMax) == (Mode{640, 480}));
    CHECK(step({1024, 768}, kRight, kSoftwareMax) == (Mode{640, 480}));
    // A ceiling under every mode still leaves the smallest.
    CHECK(step({320, 240}, kRight, 100) == (Mode{320, 240}));
}

// A mode not in the list snaps to the nearest by height, within the ceiling,
// the first of two as near.
NOCTURNE_TEST(a_mode_not_in_the_list_snaps_to_the_nearest) {
    CHECK(step({1920, 1080}, kRight) == (Mode{1280, 1024}));
    CHECK(step({2560, 1440}, kRight) == (Mode{1600, 1200}));
    CHECK(step({1920, 1080}, kLeft, kSoftwareMax) == (Mode{640, 480}));
    CHECK(step({360, 270}, kRight) == (Mode{320, 240}));
    CHECK(step({300, 240}, kRight) == (Mode{320, 240}));
    CHECK(step({640, 400}, kRight) == (Mode{512, 384})); // a width of ours alone
}

NOCTURNE_TEST(the_label_names_the_mode) {
    CHECK_EQ(std::string(nocturne_resolution_label(1024, 768)),
             std::string("Resolution : 1024x768"));
}

NOCTURNE_TEST_MAIN()
