#include "engine/font/uiscale.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

TEST(UiScale, IsTheScreenHeightInFourEightyLineScreensRoundedToNearest) {
    EXPECT_EQ(getUiScale(480), 1);
    EXPECT_EQ(getUiScale(600), 1);
    EXPECT_EQ(getUiScale(719), 1);
    EXPECT_EQ(getUiScale(720), 2);
    EXPECT_EQ(getUiScale(768), 2);
    EXPECT_EQ(getUiScale(1080), 2);
    EXPECT_EQ(getUiScale(1200), 3);
}

TEST(UiScale, IsHeldToOneToFour) {
    EXPECT_EQ(getUiScale(0), 1);
    EXPECT_EQ(getUiScale(-480), 1);
    EXPECT_EQ(getUiScale(200), 1);
    EXPECT_EQ(getUiScale(4320), 4);
}

TEST(UiScale, TextScaleIsTheUnroundedShareOfFourEightyLinesFromOneAndAHalf) {
    EXPECT_FLOAT_EQ(getUiTextScale(240), 1.0F);
    EXPECT_FLOAT_EQ(getUiTextScale(600), 1.0F);
    EXPECT_FLOAT_EQ(getUiTextScale(719), 1.0F);
    EXPECT_FLOAT_EQ(getUiTextScale(720), 1.5F);
    EXPECT_FLOAT_EQ(getUiTextScale(1080), 2.25F);
    EXPECT_FLOAT_EQ(getUiTextScale(4320), 9.0F);
}

} // namespace
} // namespace nocturne::engine
