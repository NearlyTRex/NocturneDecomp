#include "common/math/vector3f.h"
#include "sound/sndmain/sfxmixer.h"
#include "sound/sndmain/sfxslot.h"
#include "sound/sndmain/sfxstream.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <type_traits>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::ElementsAre;
using ::testing::FloatEq;
using ::testing::FloatNear;

class CSfxSlotTest : public CSndMainFixture {
protected:
    CSfxSlotTest() {
        sound_.resetSoundSystemDefaults();
        sound_.pollAllSfxSlots(0.0F);
        sample_.sample_info.name = "pier59.wav";
        sample_.sample_info.sample_rate = 22050;
        sample_.sample_info.sample_count = 1000;
        sample_.sample_info.num_channels = 1;
        sample_.sample_info.bit_depth = 16;
        sample_.sample_data.assign(1000, 0.5F);
        sample_.ref_count = 1;
        slot_.sample = &sample_;
        slot_.playback_state = 1;
        slot_.reference_distance = 20.0F;
        slot_.min_distance = 5.0F;
        slot_.max_distance = 10000.0F;
        slot_.options.delay_remaining = 0.0;
    }

    // A positional sound this far along the line the listener's ears sit on.
    void placeAt(double x) {
        slot_.options.position = {.x = x, .y = 0.0, .z = 0.0};
    }

    CSfxSample sample_;
    CSfxSlot slot_{sound_};
};

TEST_F(CSfxSlotTest, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSfxSlot>);
    static_assert(!std::is_move_constructible_v<CSfxSlot>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::compute), bool (CSfxSlot::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::kill), void (CSfxSlot::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::seek), void (CSfxSlot::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSfxSlot::updatePlaybackPos), void (CSfxSlot::*)(double)>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::pollHwHandle), void (CSfxSlot::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::pollHwPlaybackPos), bool (CSfxSlot::*)()>);
}

TEST_F(CSfxSlotTest, AnEmptySlotComputesNothing) {
    slot_.sample = nullptr;
    EXPECT_FALSE(slot_.compute(0.0F));
}

TEST_F(CSfxSlotTest, ANonPositionalSoundPlaysAtItsChannelsVolumeInBothEars) {
    sound_.setSfxChannelVol(2, 0.5F);
    slot_.options.channel_index = 2;
    slot_.options.current_volume = 0.5F;
    slot_.options.flags = kSfxNonPositional;
    placeAt(500.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.getChannelVolumes(), ElementsAre(FloatEq(0.25F), FloatEq(0.25F)));
    EXPECT_EQ(slot_.effective_frequency, 1.0F);
}

// Ears half a foot either side, along the listener's first axis.
TEST_F(CSfxSlotTest, EachEarHearsTheReferenceDistanceOverItsOwnDistance) {
    placeAt(10.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.getChannelVolumes(),
                ElementsAre(FloatEq(20.0F / 10.5F), FloatEq(20.0F / 9.5F)));
    EXPECT_THAT(slot_.distance_to_speakers[0], FloatEq(10.5F));
}

TEST_F(CSfxSlotTest, NearerThanTheMinimumItGetsNoLouder) {
    placeAt(2.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.getChannelVolumes(), ElementsAre(FloatEq(4.0F), FloatEq(4.0F)));
}

TEST_F(CSfxSlotTest, BeyondTheMaximumItGetsNoQuieter) {
    slot_.max_distance = 100.0F;
    placeAt(1000.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.getChannelVolumes(), ElementsAre(FloatEq(0.2F), FloatEq(0.2F)));
}

TEST_F(CSfxSlotTest, WithinATwentiethOfTheReferenceDistanceTheGainIsTwenty) {
    slot_.min_distance = 0.1F;
    placeAt(0.6);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.getChannelVolumes(), ElementsAre(FloatEq(20.0F / 1.1F), FloatEq(20.0F)));
}

TEST_F(CSfxSlotTest, ClosingOnTheSoundRaisesItsPitch) {
    placeAt(100.0);
    sound_.set3DListenerVelocity(111.64, 0.0, 0.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.effective_frequency, FloatNear(1.1F, 1e-5F));
    slot_.options.velocity = {.x = 223.28, .y = 0.0, .z = 0.0};
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.effective_frequency, FloatNear(0.9F, 1e-5F));
}

TEST_F(CSfxSlotTest, DopplerIsHeldBetweenAQuarterAndFourTimes) {
    placeAt(100.0);
    sound_.set3DListenerVelocity(10000.0, 0.0, 0.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.effective_frequency, 4.0F);
    sound_.set3DListenerVelocity(-10000.0, 0.0, 0.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.effective_frequency, 0.25F);
}

TEST_F(CSfxSlotTest, AtTheListenerTheWholeRelativeSpeedCounts) {
    placeAt(0.0);
    sound_.set3DListenerVelocity(0.0, 111.64, 0.0);
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(slot_.effective_frequency, FloatNear(1.1F, 1e-5F));
}

TEST_F(CSfxSlotTest, ThePitchStaysBetweenATwentiethAndTwentyTimes) {
    slot_.options.flags = kSfxNonPositional;
    slot_.options.base_frequency = 40.0F;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.effective_frequency, 20.0F);
    slot_.options.base_frequency = 0.01F;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.effective_frequency, 0.05F);
}

TEST_F(CSfxSlotTest, TrackedPositionAndVelocityAreFollowed) {
    const common::CVector3f position{.x = 30.0F, .y = 4.0F, .z = -2.0F};
    const common::CVector3f velocity{.x = 1.0F, .y = 2.0F, .z = 3.0F};
    slot_.options.position_source_ptr = &position;
    slot_.options.velocity_source_ptr = &velocity;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.options.position, (common::CVector3d{.x = 30.0, .y = 4.0, .z = -2.0}));
    EXPECT_EQ(slot_.options.velocity, (common::CVector3d{.x = 1.0, .y = 2.0, .z = 3.0}));
}

TEST_F(CSfxSlotTest, AFadeMovesTheVolumeTowardsItsTargetOverItsTime) {
    slot_.options.flags = kSfxNonPositional;
    slot_.fade_target_volume = 0.0F;
    slot_.fade_time_remaining = 1.0F;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.options.current_volume, 1.0F);
    ASSERT_TRUE(slot_.compute(0.25F));
    EXPECT_EQ(slot_.options.current_volume, 0.75F);
    EXPECT_EQ(slot_.fade_time_remaining, 0.75F);
    ASSERT_TRUE(slot_.compute(1.0F));
    EXPECT_EQ(slot_.options.current_volume, 0.0F);
}

TEST_F(CSfxSlotTest, WithoutAFadeTimePassingLeavesTheVolume) {
    slot_.options.current_volume = 0.5F;
    ASSERT_TRUE(slot_.compute(0.25F));
    EXPECT_EQ(slot_.options.current_volume, 0.5F);
}

TEST_F(CSfxSlotTest, AFadeThatStopsTheSoundEmptiesTheSlotWhenItEnds) {
    slot_.fade_time_remaining = 0.5F;
    slot_.stop_after_fade = true;
    EXPECT_FALSE(slot_.compute(0.5F));
    EXPECT_EQ(slot_.sample, nullptr);
    EXPECT_EQ(slot_.playback_state, 0);
    EXPECT_EQ(sample_.ref_count, 0);
}

TEST_F(CSfxSlotTest, AGivenDelayIsKept) {
    slot_.options.delay_remaining = 0.17;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_EQ(slot_.options.delay_remaining, 0.17);
}

TEST_F(CSfxSlotTest, KillingLetsGoOfTheSample) {
    slot_.kill();
    EXPECT_EQ(slot_.sample, nullptr);
    EXPECT_EQ(slot_.playback_state, 0);
    EXPECT_EQ(sample_.ref_count, 0);
    EXPECT_EQ(sample_.getMemorySize(), 2000U);
    slot_.kill();
    EXPECT_EQ(slot_.playback_state, 0);
}

TEST_F(CSfxSlotTest, KillingAStreamedSampleFreesIt) {
    sample_.streaming_slot_index = 0;
    slot_.kill();
    EXPECT_EQ(sample_.getMemorySize(), 0U);
    EXPECT_TRUE(sample_.sample_info.name.empty());
}

TEST_F(CSfxSlotTest, SeekingConvertsToSamplesAndStopsAtTheEnd) {
    slot_.options.playback_position = 0.5;
    slot_.options.playback_position_type = EPlaybackPosType::Seconds;
    slot_.seek();
    EXPECT_EQ(slot_.options.playback_position, 1000.0);
    EXPECT_EQ(slot_.options.playback_position_type, EPlaybackPosType::Samples);
    EXPECT_EQ(slot_.prev_hardware_playback_pos, 1000.0);
}

TEST_F(CSfxSlotTest, SeekingALoopingSampleWrapsIntoIt) {
    sample_.loop_marker_count = true;
    slot_.options.playback_position = 1.25;
    slot_.options.playback_position_type = EPlaybackPosType::Relative;
    slot_.seek();
    EXPECT_EQ(slot_.options.playback_position, 250.0);
}

TEST_F(CSfxSlotTest, ThePositionFollowsTheCursor) {
    slot_.updatePlaybackPos(300.0);
    EXPECT_EQ(slot_.options.playback_position, 300.0);
    slot_.updatePlaybackPos(500.0);
    EXPECT_EQ(slot_.options.playback_position, 500.0);
}

// Moved away from where the cursor was, the position steps by what the cursor moved.
TEST_F(CSfxSlotTest, AMovedPositionStepsWithTheCursor) {
    slot_.prev_hardware_playback_pos = 100.0;
    slot_.options.playback_position = 400.0;
    slot_.updatePlaybackPos(150.0);
    EXPECT_EQ(slot_.options.playback_position, 450.0);
}

TEST_F(CSfxSlotTest, AOneShotsPositionStopsAtItsEnd) {
    slot_.prev_hardware_playback_pos = 900.0;
    slot_.options.playback_position = 900.0;
    slot_.updatePlaybackPos(1000.0);
    EXPECT_EQ(slot_.options.playback_position, 1000.0);
    slot_.options.playback_position = 950.0;
    slot_.updatePlaybackPos(1100.0);
    EXPECT_EQ(slot_.options.playback_position, 1000.0);
}

TEST_F(CSfxSlotTest, ALoopingPositionWrapsWhenTheCursorComesRound) {
    sample_.loop_marker_count = true;
    slot_.prev_hardware_playback_pos = 900.0;
    slot_.options.playback_position = 900.0;
    slot_.updatePlaybackPos(100.0);
    EXPECT_EQ(slot_.options.playback_position, 100.0);
}

TEST_F(CSfxSlotTest, AnUnknownLengthNeitherStopsNorWraps) {
    sample_.sample_info.sample_count = -1;
    slot_.updatePlaybackPos(5000.0);
    EXPECT_EQ(slot_.options.playback_position, 5000.0);
}

class CSfxSlotVoiceTest : public CSfxSlotTest {
protected:
    std::vector<float> mix(std::size_t frame_count) {
        std::vector<float> frames(frame_count * 2);
        mixer_.readFrames(frames);
        return frames;
    }

    CSfxMixer mixer_{2, 22050};
};

TEST_F(CSfxSlotVoiceTest, AVoicePlaysAtTheComputedGains) {
    slot_.options.flags = kSfxNonPositional;
    slot_.options.current_volume = 0.5F;
    ASSERT_TRUE(slot_.compute(0.0F));
    slot_.play(mixer_);
    const std::vector<float> frames = mix(3);
    EXPECT_THAT(frames[2], FloatNear(0.25F, 1e-4F));
    EXPECT_THAT(frames[3], FloatNear(0.25F, 1e-4F));
    slot_.options.current_volume = 1.0F;
    ASSERT_TRUE(slot_.compute(0.0F));
    EXPECT_THAT(mix(2)[2], FloatNear(0.5F, 1e-4F));
}

// A hundredth of a second is 220.5 frames.
TEST_F(CSfxSlotVoiceTest, AVoiceStartsAfterItsDelay) {
    slot_.options.flags = kSfxNonPositional;
    slot_.options.delay_remaining = 0.01;
    ASSERT_TRUE(slot_.compute(0.0F));
    slot_.play(mixer_);
    const std::vector<float> frames = mix(240);
    EXPECT_EQ(frames.at(std::size_t{2} * 215), 0.0F);
    EXPECT_THAT(frames.at(std::size_t{2} * 225), FloatNear(0.5F, 1e-4F));
}

// The automatic delay was the sound's travel time, which the voice doesn't wait for.
TEST_F(CSfxSlotVoiceTest, ADistantSoundWithoutAGivenDelayStartsAtOnce) {
    slot_.options.delay_remaining = CSfxOptions::kAutoDelay;
    placeAt(1116.4);
    ASSERT_TRUE(slot_.compute(0.0F));
    slot_.play(mixer_);
    EXPECT_NE(mix(2)[2], 0.0F);
}

TEST_F(CSfxSlotVoiceTest, AVoiceStartsAtThePlaybackPosition) {
    slot_.options.playback_position = 990.0;
    slot_.seek();
    slot_.play(mixer_);
    ASSERT_TRUE(slot_.pollHwPlaybackPos());
    EXPECT_EQ(slot_.options.playback_position, 990.0);
}

TEST_F(CSfxSlotVoiceTest, TheSlotEmptiesOnceItsVoiceHasPlayedOut) {
    slot_.play(mixer_);
    slot_.pollHwHandle();
    EXPECT_EQ(slot_.sample, &sample_);
    (void)mix(1100);
    slot_.pollHwHandle();
    EXPECT_EQ(slot_.sample, nullptr);
    EXPECT_FALSE(slot_.pollHwPlaybackPos());
}

TEST_F(CSfxSlotVoiceTest, ALoopingVoiceKeepsPlaying) {
    sample_.loop_marker_count = true;
    slot_.play(mixer_);
    (void)mix(2500);
    slot_.pollHwHandle();
    EXPECT_EQ(slot_.sample, &sample_);
    ASSERT_TRUE(slot_.pollHwPlaybackPos());
    EXPECT_LE(slot_.options.playback_position, 1000.0);
}

TEST_F(CSfxSlotVoiceTest, WithoutAVoiceThereIsNothingToPoll) {
    slot_.pollHwHandle();
    EXPECT_EQ(slot_.sample, &sample_);
    EXPECT_FALSE(slot_.pollHwPlaybackPos());
}

} // namespace
} // namespace nocturne::sound
