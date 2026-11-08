#include "core/frontend.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

TEST(GetFrontEndWidth, WithoutAccelerationItIsTheLayoutsWidth) {
    EXPECT_EQ(getFrontEndWidth(1920, 1080, false), 640);
}

// 16:9 at 480 lines is 853.3, which rounds to 848.
TEST(GetFrontEndWidth, WithAccelerationItTakesThePickedAspectAt480Lines) {
    EXPECT_EQ(getFrontEndWidth(1920, 1080, true), 848);
    EXPECT_EQ(getFrontEndWidth(1280, 720, true), 848);
    EXPECT_EQ(getFrontEndWidth(1024, 768, true), 640);
    EXPECT_EQ(getFrontEndWidth(1600, 900, true), 848);
}

TEST(GetFrontEndWidth, ItStaysBetween640And1280) {
    EXPECT_EQ(getFrontEndWidth(1280, 1024, true), 640);
    EXPECT_EQ(getFrontEndWidth(3840, 1080, true), 1280);
}

TEST(GetFrontEndWidth, ANonsenseHeightIsTheLayoutsWidth) {
    EXPECT_EQ(getFrontEndWidth(1920, 0, true), 640);
    EXPECT_EQ(getFrontEndWidth(1920, -1, true), 640);
}

TEST(GetFrontEndLeft, TheLayoutIsCentredAndNeverOffTheLeft) {
    EXPECT_EQ(getFrontEndLeft(848), 104);
    EXPECT_EQ(getFrontEndLeft(640), 0);
    EXPECT_EQ(getFrontEndLeft(320), 0);
}

} // namespace
} // namespace nocturne::core
