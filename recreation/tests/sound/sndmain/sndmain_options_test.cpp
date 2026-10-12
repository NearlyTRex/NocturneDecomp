#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <utility>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::FloatNear;
using ::testing::Pair;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr float kTolerance = 1e-4F;

class CSndMainOptionsTest : public CSndMainFixture {
protected:
    CSndMainOptionsTest() {
        givenSound("tone.wav", makeConstantWav(10000, 16384));
        startOutput();
    }

    // The left and right levels the next sound plays at, 0.5 being the sample at unity gain.
    std::pair<float, float> playLevels() {
        handle_ = sound_.startSfx("tone.wav");
        EXPECT_NE(handle_, 0U);
        const std::vector<float> frames = mix(3);
        sound_.killSfx(handle_);
        return {frames[2], frames[3]};
    }

    std::uint32_t handle_ = 0;
};

TEST_F(CSndMainOptionsTest, ANonPositionalSoundPlaysAtItsVolume) {
    sound_.setNextSfxFlags(kSfxNonPositional);
    sound_.setNextSfxVolume(0.5F);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.25F, kTolerance), FloatNear(0.25F, kTolerance)));
}

TEST_F(CSndMainOptionsTest, FlagBitsAddToTheFlags) {
    sound_.setNextSfxFlags(0);
    sound_.setNextSfxFlagBits(kSfxNonPositional);
    sound_.setNextSfxStaticPosition(1000.0, 0.0, 0.0);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.5F, kTolerance), FloatNear(0.5F, kTolerance)));
}

// Twenty feet off to the right: the right ear is nearer, at 19.5 feet.
TEST_F(CSndMainOptionsTest, APositionalSoundIsHeardFromWhereItIs) {
    sound_.setNextSfxStaticPosition(20.0, 0.0, 0.0);
    sound_.setNextSfxDelay(0.0);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.5F * 20.0F / 20.5F, kTolerance),
                                   FloatNear(0.5F * 20.0F / 19.5F, kTolerance)));
}

TEST_F(CSndMainOptionsTest, ATrackedPositionIsReadWhereverItIsNow) {
    const common::CVector3f position{.x = -20.0F, .y = 0.0F, .z = 0.0F};
    sound_.setNextSfxTrackedFloatPosition(&position);
    sound_.setNextSfxDelay(0.0);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.5F * 20.0F / 19.5F, kTolerance),
                                   FloatNear(0.5F * 20.0F / 20.5F, kTolerance)));
}

TEST_F(CSndMainOptionsTest, ATrackedVelocityShiftsThePitch) {
    const common::CVector3f velocity{.x = -111.64F, .y = 0.0F, .z = 0.0F};
    sound_.setNextSfxStaticPosition(100.0, 0.0, 0.0);
    sound_.setNextSfxTrackedVelocity1(&velocity);
    sound_.setNextSfxDelay(0.0);
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    (void)mix(2000);
    EXPECT_GE(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), 2200.0);
}

TEST_F(CSndMainOptionsTest, TheChannelsVolumeScalesTheSound) {
    sound_.setSfxChannelVol(1, 0.5F);
    sound_.setNextSfxChannel(1);
    sound_.setNextSfxFlags(kSfxNonPositional);
    EXPECT_EQ(sound_.getSfxChannelVol(1), 0.5F);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.25F, kTolerance), FloatNear(0.25F, kTolerance)));
}

TEST_F(CSndMainOptionsTest, ASwitchedOffChannelPlaysNothingAndStopsWhatItWasPlaying) {
    sound_.setNextSfxChannel(1);
    const std::uint32_t playing = sound_.startSfx("tone.wav");
    sound_.setNextSfxChannel(0);
    const std::uint32_t other = sound_.startSfx("tone.wav");
    sound_.enableSfxChannel(1, false);
    EXPECT_FALSE(sound_.isSfxChannelEnabled(1));
    EXPECT_FALSE(sound_.isSfxPlaying(playing));
    EXPECT_TRUE(sound_.isSfxPlaying(other));
    sound_.setNextSfxChannel(1);
    EXPECT_EQ(sound_.startSfx("tone.wav"), 0U);
}

TEST_F(CSndMainOptionsTest, ABaseFrequencyPlaysItFaster) {
    sound_.setNextSfxFlags(kSfxNonPositional);
    sound_.setNextSfxBaseFrequency(2.0F);
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    (void)mix(2000);
    EXPECT_GE(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), 4000.0);
}

TEST_F(CSndMainOptionsTest, ADelayHoldsTheSoundBack) {
    sound_.setNextSfxFlags(kSfxNonPositional);
    sound_.setNextSfxDelay(0.01);
    ASSERT_NE(sound_.startSfx("tone.wav"), 0U);
    const std::vector<float> frames = mix(240);
    EXPECT_EQ(frames.at(std::size_t{2} * 215), 0.0F);
    EXPECT_THAT(frames.at(std::size_t{2} * 225), FloatNear(0.5F, kTolerance));
}

TEST_F(CSndMainOptionsTest, ATriggerTimeStartsPartWayIn) {
    sound_.setNextSfxTriggerTime(0.5, EPlaybackPosType::Relative);
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_EQ(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), 5000.0);
}

TEST_F(CSndMainOptionsTest, PushingCopiesTheOptionsAndPoppingRestoresThem) {
    sound_.setNextSfxFlags(kSfxNonPositional);
    sound_.setNextSfxVolume(0.5F);
    sound_.pushSfxOptions();
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.25F, kTolerance), FloatNear(0.25F, kTolerance)));
    sound_.setNextSfxVolume(1.0F);
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.5F, kTolerance), FloatNear(0.5F, kTolerance)));
    sound_.popSfxOptions();
    EXPECT_THAT(playLevels(), Pair(FloatNear(0.25F, kTolerance), FloatNear(0.25F, kTolerance)));
}

TEST_F(CSndMainOptionsTest, TheStackHoldsEight) {
    for (int depth = 1; depth < 8; ++depth) {
        sound_.pushSfxOptions();
    }
    EXPECT_THAT([this] { sound_.pushSfxOptions(); },
                ThrowsMessage<common::CFatalError>(StrEq("pushSfxOptions - stack full")));
}

TEST_F(CSndMainOptionsTest, PoppingTheLastIsFatal) {
    EXPECT_THAT([this] { sound_.popSfxOptions(); },
                ThrowsMessage<common::CFatalError>(StrEq("popSfxOptions - stack empty")));
}

TEST_F(CSndMainOptionsTest, AChannelOutsideTheThirtyTwoIsFatal) {
    const auto fatal = [](const char *message) {
        return ThrowsMessage<common::CFatalError>(StrEq(message));
    };
    EXPECT_THAT([this] { sound_.setNextSfxChannel(32); },
                fatal("setNextSfxChannel - invalid channel index: 32"));
    EXPECT_THAT([this] { sound_.setSfxChannelVol(-1, 1.0F); },
                fatal("setSfxChannelVol - invalid channel index: -1"));
    EXPECT_THAT([this] { (void)sound_.getSfxChannelVol(32); },
                fatal("getSfxChannelVol - invalid channel index: 32"));
    EXPECT_THAT([this] { sound_.enableSfxChannel(40, true); },
                fatal("enableSfxChannel - invalid channel index: 40"));
    EXPECT_THAT([this] { (void)sound_.isSfxChannelEnabled(-2); },
                fatal("isSfxChannelEnabled - invalid channel index: -2"));
}

TEST_F(CSndMainOptionsTest, TheIniKeepsUpToThirtyTwoChannels) {
    sound_.setNumberOfSfxChannels(32);
    EXPECT_THAT([this] { sound_.setNumberOfSfxChannels(33); },
                ThrowsMessage<common::CFatalError>(StrEq("setNumberOfSfxChannels - too many!")));
}

} // namespace
} // namespace nocturne::sound
