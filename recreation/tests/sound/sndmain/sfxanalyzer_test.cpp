#include "sound/sndmain/sfxanalyzer.h"

#include <gtest/gtest.h>

#include <cmath>
#include <numbers>
#include <vector>

namespace nocturne::sound {
namespace {

constexpr int kRate = 22050;
constexpr float kTolerance = 0.01F;

class CSfxAnalyzerTest : public ::testing::Test {
protected:
    CSfxAnalyzerTest() {
        analyzer_.reset(2, kRate);
    }

    // A full-scale tone on the left, exactly on a bin, and silence on the right.
    void recordTone(std::size_t bin, std::size_t frame_count) {
        const auto window = static_cast<double>(analyzer_.getWindowSize());
        std::vector<float> frames(frame_count * 2);
        for (std::size_t frame = 0; frame < frame_count; ++frame) {
            frames[frame * 2] = static_cast<float>(std::sin(
                2.0 * std::numbers::pi * static_cast<double>(bin * (written_ + frame)) / window));
        }
        written_ += frame_count;
        analyzer_.record(frames);
    }

    // A bin wide in hertz, starting a quarter into the bin, clear of the rounding at its edges.
    [[nodiscard]] float band(std::size_t bin, int channel = 0) {
        const std::size_t bin_count = (analyzer_.getWindowSize() / 2) + 1;
        const float width = static_cast<float>(kRate) / static_cast<float>(bin_count);
        const float start = static_cast<float>(bin) + 0.25F;
        return analyzer_.analyzeFrequencyBand(channel, start * width, (start + 1.0F) * width);
    }

    CSfxAnalyzer analyzer_;
    std::size_t written_ = 0;
};

// allocMixBuffers' size at the default half second of latency.
TEST_F(CSfxAnalyzerTest, TheWindowIsTheOriginalsMixBuffer) {
    EXPECT_EQ(analyzer_.getWindowSize(), 4096U);
    analyzer_.reset(2, 44100);
    EXPECT_EQ(analyzer_.getWindowSize(), 8192U);
}

TEST_F(CSfxAnalyzerTest, AToneReadsAboutTwoInItsBandAndNothingElsewhere) {
    recordTone(100, 4096);
    EXPECT_NEAR(band(100), 2.0F, kTolerance);
    EXPECT_NEAR(band(300), 0.0F, kTolerance);
    EXPECT_NEAR(band(100, 1), 0.0F, kTolerance);
}

TEST_F(CSfxAnalyzerTest, TheSpectrumIsKeptUntilAWholeNewWindowIsMixed) {
    recordTone(100, 4096);
    EXPECT_NEAR(band(100), 2.0F, kTolerance);
    const std::vector<float> silence(std::size_t{2} * 2048, 0.0F);
    analyzer_.record(silence);
    EXPECT_NEAR(band(100), 2.0F, kTolerance);
    analyzer_.record(silence);
    EXPECT_NEAR(band(100), 0.0F, kTolerance);
}

TEST_F(CSfxAnalyzerTest, ABandNarrowerThanABinReadsTheBinItStartsIn) {
    recordTone(100, 4096);
    const float width = static_cast<float>(kRate) / 2049.0F;
    EXPECT_NEAR(analyzer_.analyzeFrequencyBand(0, 100.25F * width, 100.45F * width), 2.0F,
                kTolerance);
}

TEST_F(CSfxAnalyzerTest, BandsReachingPastTheSpectrumAreClippedToIt) {
    recordTone(100, 4096);
    const float width = static_cast<float>(kRate) / 2049.0F;
    const float from_zero = analyzer_.analyzeFrequencyBand(0, 0.0F, 101.0F * width);
    EXPECT_GT(from_zero, 0.0F);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(0, -500.0F, 101.0F * width), from_zero);
    const float to_top = analyzer_.analyzeFrequencyBand(0, 100.0F * width, 2049.0F * width);
    EXPECT_GT(to_top, 0.0F);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(0, 100.0F * width, 30000.0F), to_top);
}

TEST_F(CSfxAnalyzerTest, BandsWhollyOutsideTheSpectrumReadNothing) {
    recordTone(100, 4096);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(0, -500.0F, -10.0F), 0.0F);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(0, 23000.0F, 30000.0F), 0.0F);
}

// An end past what an int holds converts to the integer indefinite, which is below the first bin.
TEST_F(CSfxAnalyzerTest, ABandEndingPastAnIntReadsNothing) {
    recordTone(100, 4096);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(0, 0.0F, 1e30F), 0.0F);
}

TEST_F(CSfxAnalyzerTest, AChannelTheOutputLacksReadsNothing) {
    recordTone(100, 4096);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(2, 0.0F, 22050.0F), 0.0F);
    EXPECT_EQ(analyzer_.analyzeFrequencyBand(-1, 0.0F, 22050.0F), 0.0F);
}

TEST(CSfxAnalyzer, BeforeAnOutputItKeepsAndReadsNothing) {
    CSfxAnalyzer analyzer;
    const std::vector<float> frames(16, 1.0F);
    analyzer.record(frames);
    EXPECT_EQ(analyzer.analyzeFrequencyBand(0, 0.0F, 22050.0F), 0.0F);
}

} // namespace
} // namespace nocturne::sound
