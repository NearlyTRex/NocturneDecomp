#include "tests/mocks/sound/sndmainfixture.h"

#include <gtest/gtest.h>

namespace nocturne::sound {
namespace {

class CSndMainListenerTest : public CSndMainFixture {};

TEST_F(CSndMainListenerTest, KeepsWhereTheListenerIsAndHowFastItMoves) {
    sound_.set3DListenerPos(1.0, 2.0, 3.0);
    sound_.set3DListenerVelocity(4.0, 5.0, 6.0);
    EXPECT_EQ(sound_.getListenerPosition(), (common::CVector3d{.x = 1.0, .y = 2.0, .z = 3.0}));
    EXPECT_EQ(sound_.getListenerVelocity(), (common::CVector3d{.x = 4.0, .y = 5.0, .z = 6.0}));
}

TEST_F(CSndMainListenerTest, InStereoTheEarsSitHalfAFootEitherSideAlongTheFirstAxis) {
    sound_.set3DListenerPos(10.0, 0.0, 0.0);
    sound_.set3DListenerOrient(0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0);
    sound_.pollAllSfxSlots(0.0F);
    EXPECT_EQ(sound_.getSpeakerPosition(0), (common::CVector3d{.x = 10.0, .y = 0.0, .z = -0.5}));
    EXPECT_EQ(sound_.getSpeakerPosition(1), (common::CVector3d{.x = 10.0, .y = 0.0, .z = 0.5}));
}

TEST_F(CSndMainListenerTest, AnyOtherOutputHearsFromTheListener) {
    sound_.setAudioChannelCount(1);
    sound_.set3DListenerPos(10.0, 20.0, 30.0);
    sound_.pollAllSfxSlots(0.0F);
    EXPECT_EQ(sound_.getSpeakerPosition(0), sound_.getListenerPosition());
    EXPECT_EQ(sound_.getSpeakerPosition(7), sound_.getListenerPosition());
}

TEST_F(CSndMainListenerTest, ARadiusIncludesItsEdge) {
    sound_.set3DListenerPos(1.0, 1.0, 1.0);
    EXPECT_TRUE(sound_.isWithinListenerRadius(4.0, 5.0, 1.0, 5.0));
    EXPECT_FALSE(sound_.isWithinListenerRadius(4.0, 5.0, 1.1, 5.0));
}

} // namespace
} // namespace nocturne::sound
