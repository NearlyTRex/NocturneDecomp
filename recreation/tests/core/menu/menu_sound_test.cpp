#include "core/menu/menu.h"
#include "core/sound/sound.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/menufixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <format>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;

// A bar as the hardware renderer is handed it.
struct SBar {
    std::vector<platform::SRenderVertex> corners;
    int render_flags = 0;
    // Which flame frame it showed: the first entry of that frame's palette.
    std::uint8_t frame = 0;
};

// Noise, so every band of the spectrum has something in it.
std::string makeNoiseWav(std::size_t frame_count) {
    std::vector<std::int16_t> samples(frame_count);
    std::uint32_t state = 1;
    for (std::int16_t &sample : samples) {
        state = (state * 1103515245U) + 12345U;
        sample = static_cast<std::int16_t>(static_cast<int>((state >> 16U) & 0x7fffU) - 0x4000);
    }
    return sound::makeWav16(samples);
}

// The spectrum through the hardware renderer, the eight flame frames on disk each with its index
// heading its palette, and noise as the menu music.
class CAudioSpectrumTest : public CMenuFixture {
protected:
    CAudioSpectrumTest() {
        startRenderer();
        for (int frame = 0; frame < 8; ++frame) {
            const std::string stem = std::format("art\\F{:02}00", (frame * 2) + 1);
            // The cache sizes the name as it is given, then reads the .raw beside it.
            givenFile(stem + ".RAW", std::string(std::size_t{32} * 32, '\x01'));
            givenFile(stem + ".raw", std::string(std::size_t{32} * 32, '\x01'));
            std::string palette(768, '\0');
            palette[0] = static_cast<char>(frame);
            givenFile(stem + ".act", palette);
        }
        givenFile("sound\\splash-music-22.wav", makeNoiseWav(44100));
        ON_CALL(renderer_, drawPolygon2(_, _, _))
            .WillByDefault([this](platform::SRenderVertex **corners, int count, int render_flags) {
                SBar bar{.corners = {}, .render_flags = render_flags, .frame = texture_.palette[0]};
                for (int i = 0; i < count; ++i) {
                    bar.corners.push_back(*corners[i]);
                }
                bars_.push_back(bar);
                return 1;
            });
    }

    // The music playing, with a window's worth mixed for the spectrum to read.
    void playMusic() {
        sound_.configure();
        std::vector<float> frames(8192);
        sound_main_.readFrames(frames);
    }

    [[nodiscard]] static int centreOf(const SBar &bar) {
        return (bar.corners[0].projected_vertex.screen_x >> 16) + 16;
    }

    [[nodiscard]] std::vector<int> sortedCentres() const {
        std::vector<int> centres;
        centres.reserve(bars_.size());
        for (const SBar &bar : bars_) {
            centres.push_back(centreOf(bar));
        }
        std::ranges::sort(centres);
        return centres;
    }

    // Every bar in the frame its column picks with the counter at that frame.
    void expectFramesFromCounter(int counter_frame) const {
        ASSERT_FALSE(bars_.empty());
        for (const SBar &bar : bars_) {
            EXPECT_EQ(bar.frame, (counter_frame + centreOf(bar)) % 8) << centreOf(bar);
        }
    }

    std::vector<SBar> bars_;
};

// A quarter second of nothing playing still turns the frames on six.
TEST_F(CAudioSpectrumTest, WhileNothingPlaysThereAreNoBarsButTheFramesTurn) {
    ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(0));
    game_.saveClockTime();
    ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(18 * 0x4000));
    game_.updateDT();
    menu_.drawAudioSpectrum();
    EXPECT_TRUE(bars_.empty());
    playMusic();
    game_.updateDT();
    menu_.drawAudioSpectrum();
    expectFramesFromCounter(6);
}

TEST_F(CAudioSpectrumTest, SilenceHasNoBars) {
    givenFile("sound\\splash-music-22.wav", sound::makeConstantWav(44100, 0));
    playMusic();
    ASSERT_TRUE(sound_main_.isSoundBusy());
    menu_.drawAudioSpectrum();
    EXPECT_TRUE(bars_.empty());
}

// Stereo on 640 columns: each channel's half less 32 a side, a bar every four columns.
TEST_F(CAudioSpectrumTest, EachChannelHasABarEveryFourColumnsAcrossItsHalf) {
    playMusic();
    menu_.drawAudioSpectrum();
    std::vector<int> expected;
    for (const int left : {32, 352}) {
        for (int x = left; x < left + 256; x += 4) {
            expected.push_back(x);
        }
    }
    EXPECT_EQ(sortedCentres(), expected);
}

TEST_F(CAudioSpectrumTest, MonoHasOneRunOfBarsAcrossTheWidth) {
    sound_main_.resetSoundDevice();
    sound_main_.setAudioChannelCount(1);
    playMusic();
    menu_.drawAudioSpectrum();
    const std::vector<int> centres = sortedCentres();
    ASSERT_EQ(centres.size(), 144U);
    EXPECT_EQ(centres.front(), 32);
    EXPECT_EQ(centres.back(), 32 + (143 * 4));
}

// Each in its flame frame, so the hardware renderer can take a frame's bars together.
TEST_F(CAudioSpectrumTest, TheBarsAreDrawnAFlameFrameAtATime) {
    playMusic();
    menu_.drawAudioSpectrum();
    ASSERT_FALSE(bars_.empty());
    EXPECT_TRUE(std::ranges::is_sorted(bars_, {}, &SBar::frame));
    EXPECT_EQ(bars_.front().frame, 0);
    EXPECT_EQ(bars_.back().frame, 4);
}

// 32 columns wide, rising from the foot, the frame inset eight texels on each side.
TEST_F(CAudioSpectrumTest, ABarIsAFlameFrameStandingOnTheFoot) {
    playMusic();
    menu_.drawAudioSpectrum();
    ASSERT_FALSE(bars_.empty());
    const SBar &bar = bars_.front();
    ASSERT_EQ(bar.corners.size(), 4U);
    EXPECT_EQ(bar.corners[0].projected_vertex.screen_x, 16 << 16);
    EXPECT_EQ(bar.corners[1].projected_vertex.screen_x, 48 << 16);
    EXPECT_EQ(bar.corners[0].projected_vertex.screen_y, 479 << 16);
    EXPECT_LT(bar.corners[2].projected_vertex.screen_y, 479 << 16);
    EXPECT_EQ(bar.corners[2].projected_vertex.screen_y, bar.corners[3].projected_vertex.screen_y);
    EXPECT_EQ(bar.corners[0].u, 8 << 16);
    EXPECT_EQ(bar.corners[0].v, 248 << 16);
    EXPECT_EQ(bar.corners[2].u, 248 << 16);
    EXPECT_EQ(bar.corners[2].v, 8 << 16);
}

// Each bar's x picks its frame, and the counter moves them all on.
TEST_F(CAudioSpectrumTest, TheFrameFollowsTheColumnAndTurnsWithTime) {
    playMusic();
    menu_.drawAudioSpectrum();
    expectFramesFromCounter(0);
    bars_.clear();
    ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(18 * 0x1000));
    game_.saveClockTime();
    ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(2 * 18 * 0x1000));
    game_.updateDT();
    menu_.drawAudioSpectrum();
    // A sixteenth of a second is a frame and a half; the counter is at frame 1.
    expectFramesFromCounter(1);
}

// After eight frames the counter starts again.
TEST_F(CAudioSpectrumTest, TheCounterWrapsAfterTheEighthFrame) {
    playMusic();
    for (int step = 0; step < 3; ++step) {
        bars_.clear();
        ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(0));
        game_.saveClockTime();
        ON_CALL(clock_, getTime()).WillByDefault(::testing::Return(18 * 0x4000));
        game_.updateDT();
        menu_.drawAudioSpectrum();
    }
    // Three quarter seconds are eighteen frames, two past the second wrap.
    expectFramesFromCounter(2);
}

} // namespace
} // namespace nocturne::core
