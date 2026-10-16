#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/moon/moon.h"
#include "tests/mocks/core/moonfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstdint>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::Each;
using ::testing::Return;

// In world units, 24.8 on the matrix, so 256 to a unit.
constexpr int kOneUnit = 256;

class CMoonRenderTest : public CMoonFixture {
protected:
    CMoonRenderTest() {
        moon_.init();
    }

    // Turns the moon to 0.579875, just short of where it stops, then on past it by the given
    // seconds, at least a hundredth, which the bats then fly.
    void settle(float bat_seconds) {
        moon_.update(26.39F);
        moon_.update(bat_seconds);
    }

    // The point the last thing drawn was placed at, relative to the camera.
    const common::CVector3i &lastPlaced() const {
        return matrix_.getRelativeOrigin();
    }

    // The clouds alone at a pixel the moon and title don't reach: each layer's texel picks
    // the grey a quarter of its value, here the row the layer's scale and scroll give.
    static std::uint32_t cloudGrey(int y, int scroll) {
        const auto level = static_cast<std::uint32_t>(((((y >> 1) + scroll) & 0xff) >> 2) +
                                                      ((((y >> 2) + scroll) & 0xff) >> 2));
        return (level << 16U) | (level << 8U) | level;
    }
};

TEST_F(CMoonRenderTest, TheMoonStartsAQuarterTurnInLowAndLeft) {
    moon_.render();
    EXPECT_EQ(lastPlaced(),
              (common::CVector3i{.x = 12 * kOneUnit, .y = 12 * kOneUnit, .z = -72 * kOneUnit}));
}

TEST_F(CMoonRenderTest, TheMoonTurnsAtAnEightiethOfItsSwingASecond) {
    moon_.update(10.0F);
    moon_.render();
    EXPECT_EQ(lastPlaced().x, 6 * kOneUnit);
}

// The phase stops at 0.58, 3.84 units right and up, which the float holds just under.
TEST_F(CMoonRenderTest, TheMoonStopsWhereItSettles) {
    moon_.update(26.0F);
    moon_.update(26.0F);
    moon_.render();
    EXPECT_EQ(lastPlaced().x, -983);
}

TEST_F(CMoonRenderTest, BatsStayHiddenUntilTheMoonSettles) {
    startRenderer();
    moon_.update(26.0F);
    moon_.render();
    EXPECT_EQ(lists_, 1);
}

TEST_F(CMoonRenderTest, OnceTheMoonSettlesTheBatsFlyOnToTheirCourses) {
    startRenderer();
    settle(0.5F);
    moon_.render();
    EXPECT_GT(lists_, 1);
}

// The original drew a bat between its course's last frame and the wrap at the course's start.
TEST_F(CMoonRenderTest, ABatPastItsCoursesLastFrameIsNotDrawn) {
    givenCourses(1);
    moon_.free();
    moon_.init();
    startRenderer();
    settle(0.025F);
    moon_.render();
    EXPECT_EQ(lists_, 1);
}

TEST_F(CMoonRenderTest, TheLightingFoundIsPutBack) {
    set_.setLightDirection({.x = 1, .y = 2, .z = 3});
    set_.setAmbientBaseQuick(7);
    set_.setFlatColor(4, 5, 6);
    settle(0.5F);
    moon_.render();
    EXPECT_EQ(set_.getLightDirection(), (common::CVector3i{.x = 1, .y = 2, .z = 3}));
    EXPECT_EQ(set_.getAmbientBaseQuick(), 7);
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 4, .g = 5, .b = 6}));
}

TEST_F(CMoonRenderTest, TheDepthBufferIsClearedFirst) {
    startRenderer();
    std::ranges::fill(depths_, 0xffffffffU);
    moon_.render();
    EXPECT_THAT(depths_, Each(0U));
}

TEST_F(CMoonRenderTest, TwoLayersOfCloudAreAddedOverTheClearedFrame) {
    std::ranges::fill(pixels_, 0xffffffffU);
    moon_.render();
    EXPECT_EQ(pixel(0, 300), cloudGrey(300, 0));
    EXPECT_EQ(pixel(639, 479), cloudGrey(479, 0));
}

// A quarter second at 16 texels a second moves the clouds four rows.
TEST_F(CMoonRenderTest, TheCloudsScrollByTheGamesOwnFrameTime) {
    EXPECT_CALL(clock_, getTime()).WillOnce(Return(0)).WillOnce(Return(18 * 0x4000));
    game_.saveClockTime();
    game_.updateDT();
    moon_.update(0.0F);
    moon_.render();
    EXPECT_EQ(pixel(0, 300), cloudGrey(300, 4));
}

TEST_F(CMoonRenderTest, BrightLayersSaturateAtWhite) {
    givenFile("art\\menucld2.act", std::string(768, '\xc8'));
    moon_.free();
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(0, 300), 0x00ffffffU);
}

TEST_F(CMoonRenderTest, BelowThirtyTwoBitsTheCloudsAreLeftOut) {
    bits_per_pixel_ = 16;
    std::ranges::fill(pixels_, 0x12345678U);
    moon_.render();
    EXPECT_EQ(pixel(639, 479), 0x12345678U);
}

// Title frame i is grey i wherever it isn't black, and frame 0 is black throughout.
TEST_F(CMoonRenderTest, TheFirstHalfShowsTheTitleFrameTheTimerIsAt) {
    moon_.update(1.5F);
    moon_.render();
    EXPECT_NE(pixel(10, 10), cloudGrey(10, 0));
}

TEST_F(CMoonRenderTest, TheSecondHalfHoldsTheFirstFrame) {
    moon_.update(3.75F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), cloudGrey(10, 0));
}

// The timer can only run negative on a negative step; it shows the first frame too.
TEST_F(CMoonRenderTest, ANegativeTimerShowsTheFirstFrame) {
    moon_.update(-1.0F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), cloudGrey(10, 0));
}

} // namespace
} // namespace nocturne::core
