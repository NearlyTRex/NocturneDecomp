#include "common/error/fatalerror.h"
#include "sound/sndmain/sfxmixer.h"
#include "sound/sndmain/sfxsample.h"
#include "sound/sndmain/sfxstream.h"
#include "sound/sndmain/sfxvoice.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <type_traits>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::Each;
using ::testing::FloatNear;

constexpr float kTolerance = 1e-4F;
// The mixer's resampler holds a voice back by a frame.
constexpr std::size_t kLatency = 1;

class CSfxVoiceTest : public ::testing::Test {
protected:
    // frame_count copies of one frame, in a sample with that frame's channels.
    void givenSamples(std::span<const float> frame, std::size_t frame_count) {
        sample_.sample_info.name = "pier59.wav";
        sample_.sample_info.bit_depth = 16;
        sample_.sample_info.num_channels = static_cast<int>(frame.size());
        sample_.sample_info.sample_rate = 22050;
        sample_.sample_info.sample_count = static_cast<int>(frame_count);
        sample_.sample_data.clear();
        for (std::size_t index = 0; index < frame_count; ++index) {
            sample_.sample_data.insert(sample_.sample_data.end(), frame.begin(), frame.end());
        }
    }

    void givenMono(std::size_t frame_count) {
        const std::array<float, 1> frame{0.5F};
        givenSamples(frame, frame_count);
    }

    CSfxVoice &play(std::span<const float> gains = kUnity, std::uint64_t delay = 0) {
        voice_ = std::make_unique<CSfxVoice>(mixer_, sample_);
        voice_->setGains(gains);
        voice_->start(delay);
        return *voice_;
    }

    // Mixes frame_count stereo frames; left is the first of each pair.
    std::vector<float> mix(std::size_t frame_count) {
        std::vector<float> frames(frame_count * 2);
        mixer_.readFrames(frames);
        return frames;
    }

    // What the voice played, from the frame it reaches the output.
    static std::span<const float> played(const std::vector<float> &frames,
                                         std::size_t channels = 2) {
        return std::span(frames).subspan(kLatency * channels);
    }

    static constexpr std::array<float, 2> kUnity{1.0F, 1.0F};

    CSfxMixer mixer_{2, 22050};
    CSfxSample sample_;
    std::unique_ptr<CSfxVoice> voice_;
};

TEST_F(CSfxVoiceTest, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSfxVoice>);
    static_assert(!std::is_move_constructible_v<CSfxVoice>);
}

TEST_F(CSfxVoiceTest, AMonoSampleAtUnityGainPlaysAsRecordedInBothEars) {
    givenMono(100);
    play();
    EXPECT_THAT(played(mix(10)), Each(FloatNear(0.5F, kTolerance)));
}

TEST_F(CSfxVoiceTest, TheQuieterEarIsPannedDownToItsGain) {
    givenMono(100);
    const std::array<float, 2> left_louder{0.5F, 0.25F};
    CSfxVoice &voice = play(left_louder);
    std::vector<float> frames = mix(4);
    EXPECT_THAT(frames[2], FloatNear(0.25F, kTolerance));
    EXPECT_THAT(frames[3], FloatNear(0.125F, kTolerance));
    const std::array<float, 2> right_louder{0.25F, 0.5F};
    voice.setGains(right_louder);
    frames = mix(4);
    EXPECT_THAT(frames[2], FloatNear(0.125F, kTolerance));
    EXPECT_THAT(frames[3], FloatNear(0.25F, kTolerance));
}

TEST_F(CSfxVoiceTest, NoGainIsSilence) {
    givenMono(100);
    const std::array<float, 2> silent{0.0F, 0.0F};
    play(silent);
    EXPECT_THAT(mix(4), Each(0.0F));
}

TEST_F(CSfxVoiceTest, AMonoOutputTakesTheOneGain) {
    CSfxMixer mono(1, 22050);
    givenMono(100);
    CSfxVoice voice(mono, sample_);
    const std::array<float, 1> gain{0.5F};
    voice.setGains(gain);
    voice.start(0);
    std::vector<float> frames(4);
    mono.readFrames(frames);
    EXPECT_THAT(played(frames, 1), Each(FloatNear(0.25F, kTolerance)));
}

TEST_F(CSfxVoiceTest, AStereoSampleKeepsItsSides) {
    const std::array<float, 2> frame{0.5F, -0.5F};
    givenSamples(frame, 100);
    const std::array<float, 2> gains{1.0F, 0.5F};
    play(gains);
    const std::vector<float> frames = mix(3);
    EXPECT_THAT(frames[2], FloatNear(0.5F, kTolerance));
    EXPECT_THAT(frames[3], FloatNear(-0.25F, kTolerance));
}

TEST_F(CSfxVoiceTest, ADelayedStartWaitsForThatManyFrames) {
    givenMono(100);
    play(kUnity, 3);
    const std::vector<float> frames = mix(8);
    EXPECT_THAT(std::span(frames).first((3 + kLatency) * 2), Each(0.0F));
    EXPECT_THAT(std::span(frames).subspan((3 + kLatency) * 2), Each(FloatNear(0.5F, kTolerance)));
}

// Every frame but the one the resampler still holds.
TEST_F(CSfxVoiceTest, AOneShotPlaysOutAndEnds) {
    givenMono(4);
    const CSfxVoice &voice = play();
    EXPECT_FALSE(voice.atEnd());
    const std::vector<float> frames = mix(10);
    EXPECT_THAT(std::span(frames).subspan(2, 6), Each(FloatNear(0.5F, kTolerance)));
    EXPECT_THAT(std::span(frames).subspan(8), Each(0.0F));
    EXPECT_TRUE(voice.atEnd());
}

TEST_F(CSfxVoiceTest, ALoopingSampleGoesRoundAgain) {
    givenMono(4);
    CSfxVoice &voice = play();
    voice.setLooping(true);
    EXPECT_THAT(played(mix(20)), Each(FloatNear(0.5F, kTolerance)));
    EXPECT_FALSE(voice.atEnd());
    EXPECT_LE(voice.getCursor(), 4U);
}

TEST_F(CSfxVoiceTest, SeekingMovesTheCursorAtOnce) {
    givenMono(10000);
    CSfxVoice &voice = play();
    voice.seek(5000);
    EXPECT_EQ(voice.getCursor(), 5000U);
    (void)mix(10);
    EXPECT_GE(voice.getCursor(), 5010U);
}

// The cursor runs ahead of the output by what the mixer reads in a gulp.
TEST_F(CSfxVoiceTest, PitchPlaysItFaster) {
    givenMono(20000);
    CSfxVoice &voice = play();
    voice.setPitch(2.0F);
    (void)mix(2000);
    EXPECT_GE(voice.getCursor(), 4000U);
    EXPECT_LE(voice.getCursor(), 5100U);
}

TEST_F(CSfxVoiceTest, AStreamedSamplePlaysFromItsStream) {
    sample_.sample_info.name = "theme.mp3";
    sample_.stream = std::make_unique<CSfxStream>(makeConstantWav(100, 16384));
    play();
    EXPECT_THAT(played(mix(10)), Each(FloatNear(0.5F, kTolerance)));
}

TEST_F(CSfxVoiceTest, ASampleTheMixerCantPlayIsFatal) {
    givenMono(10);
    sample_.sample_info.num_channels = 0;
    EXPECT_THAT([this] { play(); }, ::testing::ThrowsMessage<common::CFatalError>(
                                        ::testing::StrEq("Can't play pier59.wav")));
}

} // namespace
} // namespace nocturne::sound
