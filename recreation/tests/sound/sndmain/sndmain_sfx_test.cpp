#include "common/math/vector3f.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::FloatNear;
using ::testing::HasSubstr;

constexpr float kTolerance = 1e-4F;

class CSndMainSfxTest : public CSndMainFixture {
protected:
    CSndMainSfxTest() {
        givenSound("tone.wav", makeConstantWav(10000, 16384));
        givenSound("click.wav", makeConstantWav(100, 16384));
        startOutput();
        sound_.setNextSfxFlags(kSfxNonPositional);
    }

    // The left level of the second frame mixed next.
    float level() {
        return mix(2)[2];
    }
};

TEST_F(CSndMainSfxTest, AHandleNamesTheSlotAndItsGeneration) {
    const std::uint32_t first = sound_.startSfx("tone.wav");
    const std::uint32_t second = sound_.startSfx("tone.wav");
    EXPECT_EQ(first, (2U << 6U) | 0U);
    EXPECT_EQ(second, (3U << 6U) | 1U);
    EXPECT_TRUE(sound_.isSfxPlaying(first));
    EXPECT_EQ(sound_.countActiveSfx(), 2);
}

TEST_F(CSndMainSfxTest, NothingStartsWithoutANameOrWhileTheOutputIsOff) {
    EXPECT_EQ(sound_.startSfx(""), 0U);
    sound_.resetSoundDevice();
    EXPECT_EQ(sound_.startSfx("tone.wav"), 0U);
}

TEST_F(CSndMainSfxTest, ASampleThatCantBeHadIsReported) {
    EXPECT_CALL(file_system_, appendFile(std::string_view("sounderr.txt"),
                                         HasSubstr("Msg: startSfx - can't get sample gone.wav\n")));
    EXPECT_EQ(sound_.startSfx("gone.wav"), 0U);
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

TEST_F(CSndMainSfxTest, EverySlotBusyStartsNothing) {
    for (std::size_t slot = 0; slot < CSndMain::kSlotCount; ++slot) {
        ASSERT_NE(sound_.startSfx("tone.wav"), 0U);
    }
    EXPECT_EQ(sound_.startSfx("tone.wav"), 0U);
}

TEST_F(CSndMainSfxTest, AStaleHandleFindsNothing) {
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_TRUE(sound_.killSfx(handle));
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_FALSE(sound_.killSfx(handle));
    EXPECT_FALSE(sound_.isSfxPlaying(0));
    EXPECT_EQ(sound_.getSfxSampleInfo(handle), std::nullopt);
    EXPECT_EQ(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), -1.0);
    EXPECT_FALSE(sound_.setSfxVolume(handle, 0.5F));
    EXPECT_FALSE(sound_.setSfxFade(handle, 0.0F, 1.0F, true));
}

TEST_F(CSndMainSfxTest, ASoundThatHasPlayedOutIsNoLongerPlaying) {
    const std::uint32_t handle = sound_.startSfx("click.wav");
    EXPECT_TRUE(sound_.isSfxPlaying(handle));
    (void)mix(200);
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

TEST_F(CSndMainSfxTest, ThePlayingSamplesInfoComesBack) {
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    const CSampleInfo info = expectInfo(sound_.getSfxSampleInfo(handle));
    EXPECT_EQ(info.name, "tone.wav");
    EXPECT_EQ(info.sample_count, 10000);
}

TEST_F(CSndMainSfxTest, ThePositionComesBackInTheUnitsAskedFor) {
    sound_.setNextSfxTriggerTime(0.25, EPlaybackPosType::Relative);
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_EQ(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), 2500.0);
    EXPECT_EQ(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Relative), 0.25);
}

TEST_F(CSndMainSfxTest, VolumeAndFrequencyChangeAPlayingSound) {
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_THAT(level(), FloatNear(0.5F, kTolerance));
    EXPECT_TRUE(sound_.setSfxVolume(handle, 0.5F));
    EXPECT_THAT(level(), FloatNear(0.25F, kTolerance));
    EXPECT_TRUE(sound_.setSfxBaseFrequency(handle, 4.0F));
    (void)mix(1000);
    EXPECT_GE(sound_.getSfxPlaybackPosition(handle, EPlaybackPosType::Samples), 4000.0);
}

TEST_F(CSndMainSfxTest, APlayingSoundCanBeMovedOrMadeToFollow) {
    sound_.setNextSfxFlags(0);
    sound_.setNextSfxDelay(0.0);
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_TRUE(sound_.setSfxPosition(handle, 20.0, 0.0, 0.0));
    EXPECT_THAT(level(), FloatNear(0.5F * 20.0F / 20.5F, kTolerance));
    const common::CVector3f position{.x = 40.0F, .y = 0.0F, .z = 0.0F};
    EXPECT_TRUE(sound_.setSfxTrackedFloatPosition(handle, &position));
    EXPECT_THAT(level(), FloatNear(0.5F * 20.0F / 40.5F, kTolerance));
    const common::CVector3f velocity{.x = 1000.0F, .y = 0.0F, .z = 0.0F};
    EXPECT_TRUE(sound_.setSfxTrackedFloatVelocity(handle, &velocity));
}

TEST_F(CSndMainSfxTest, AFadeRunsAsTheGameAdvancesAndCanStopTheSound) {
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_TRUE(sound_.setSfxFade(handle, 0.0F, 0.5F, true));
    sound_.pollAllSfxSlots(0.25F);
    EXPECT_THAT(level(), FloatNear(0.25F, kTolerance));
    sound_.pollAllSfxSlots(0.25F);
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
}

TEST_F(CSndMainSfxTest, APollAdvancesAQuarterOfASecondAtMost) {
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    EXPECT_TRUE(sound_.setSfxFade(handle, 0.0F, 1.0F, false));
    sound_.pollAllSfxSlots(10.0F);
    EXPECT_THAT(level(), FloatNear(0.375F, kTolerance));
    sound_.pollAllSfxSlots(-1.0F);
    EXPECT_THAT(level(), FloatNear(0.375F, kTolerance));
}

TEST_F(CSndMainSfxTest, APollEmptiesTheSlotsOfSoundsThatHavePlayedOut) {
    (void)sound_.startSfx("click.wav");
    (void)mix(200);
    sound_.pollAllSfxSlots(0.0F);
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

TEST_F(CSndMainSfxTest, WalksThePlayingSoundsInSlotOrder) {
    const std::uint32_t first = sound_.startSfx("tone.wav");
    const std::uint32_t second = sound_.startSfx("tone.wav");
    const std::uint32_t third = sound_.startSfx("tone.wav");
    sound_.killSfx(second);
    EXPECT_EQ(sound_.getFirstActiveSfx(), first);
    EXPECT_EQ(sound_.getNextActiveSfx(first), third);
    EXPECT_EQ(sound_.getNextActiveSfx(third), 0U);
    sound_.killAllSfx();
    EXPECT_EQ(sound_.getFirstActiveSfx(), 0U);
}

} // namespace
} // namespace nocturne::sound
