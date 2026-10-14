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

} // namespace
} // namespace nocturne::engine
