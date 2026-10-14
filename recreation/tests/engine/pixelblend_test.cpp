#include "engine/pixelblend.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

TEST(PixelBlend, BlendingWeighsTheTwoLevelsByTheOpacity) {
    EXPECT_EQ(blendLevel(200, 100, 128), ((200U * 128U) + (100U * 127U)) >> 8U);
}

TEST(PixelBlend, ZeroOpacityLeavesTheDestinationDarkenedByOneStep) {
    EXPECT_EQ(blendLevel(0, 255, 0), 254U);
}

TEST(PixelBlend, FullOpacityLeavesTheSourceDarkenedByOneStep) {
    EXPECT_EQ(blendLevel(255, 0, 255), 254U);
}

TEST(PixelBlend, AddingScalesTheSourceByTheOpacity) {
    EXPECT_EQ(addLevel(200, 10, 128), 10U + 100U);
}

TEST(PixelBlend, AddingSaturatesAtTheBrightestLevel) {
    EXPECT_EQ(addLevel(255, 200, 255), kMaxLevel);
}

} // namespace
} // namespace nocturne::engine
