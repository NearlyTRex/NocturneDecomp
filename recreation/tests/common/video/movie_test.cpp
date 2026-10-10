#include "common/video/movie.h"

#include <gtest/gtest.h>

#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <vector>

namespace nocturne::common {
namespace {

constexpr SExtent kMovie{.width = 320, .height = 240};

TEST(Movie, DoublesAndCentresOnTheGameScreen) {
    EXPECT_EQ(placeMovie(kMovie, {.width = 640, .height = 480}),
              (SViewport{.x = 0, .y = 0, .width = 640, .height = 480}));
    EXPECT_EQ(placeMovie(kMovie, {.width = 800, .height = 600}),
              (SViewport{.x = 80, .y = 60, .width = 640, .height = 480}));
}

// Just past either threshold the movie doubles, and doubled it no longer fits.
TEST(Movie, DoublesWhenEitherSideIsPastTheThreshold) {
    EXPECT_FALSE(placeMovie(kMovie, {.width = 401, .height = 300}).has_value());
    EXPECT_FALSE(placeMovie(kMovie, {.width = 400, .height = 301}).has_value());
}

TEST(Movie, KeepsItsSizeOnASmallScreen) {
    EXPECT_EQ(placeMovie(kMovie, {.width = 400, .height = 300}),
              (SViewport{.x = 40, .y = 30, .width = 320, .height = 240}));
}

TEST(Movie, RefusesAPlacementPastTheScreen) {
    EXPECT_FALSE(placeMovie(kMovie, {.width = 300, .height = 300}).has_value());
    EXPECT_FALSE(placeMovie(kMovie, {.width = 400, .height = 200}).has_value());
    EXPECT_FALSE(placeMovie({.width = 0, .height = 240}, {.width = 640, .height = 480}));
    EXPECT_FALSE(placeMovie({.width = 320, .height = 0}, {.width = 640, .height = 480}));
}

TEST(CMovieClock, ReadsZeroBeforeTheFirstPlay) {
    const CMovieClock clock;
    EXPECT_EQ(clock.getTime(5.0), 0.0);
}

TEST(CMovieClock, RunsFromTheFirstPlay) {
    CMovieClock clock;
    clock.play(10.0);
    EXPECT_EQ(clock.getTime(12.5), 2.5);
}

TEST(CMovieClock, FreezesWhilePausedAndResumesWhereItStopped) {
    CMovieClock clock;
    clock.play(10.0);
    clock.pause(12.0);
    EXPECT_EQ(clock.getTime(20.0), 2.0);
    clock.play(20.0);
    EXPECT_EQ(clock.getTime(21.0), 3.0);
}

TEST(CMovieClock, PauseBeforePlayOrTwiceKeepsTheFirstPause) {
    CMovieClock clock;
    clock.pause(1.0);
    clock.play(10.0);
    clock.pause(11.0);
    clock.pause(15.0);
    EXPECT_EQ(clock.getTime(30.0), 1.0);
}

TEST(CMovieClock, PlayWhilePlayingChangesNothing) {
    CMovieClock clock;
    clock.play(10.0);
    clock.play(15.0);
    EXPECT_EQ(clock.getTime(16.0), 6.0);
}

TEST(Movie, NoFrameIsDueBeforeTheFirst) {
    const std::array times = {0.5, 0.6};
    EXPECT_FALSE(selectDueFrame(times, 0.4).has_value());
    EXPECT_FALSE(selectDueFrame({}, 1.0).has_value());
}

TEST(Movie, TheLatestDueFrameWinsAndEarlierOnesAreDropped) {
    const std::array times = {0.0, 1.0 / 15, 2.0 / 15, 3.0 / 15};
    EXPECT_EQ(selectDueFrame(times, 0.0), 0U);
    EXPECT_EQ(selectDueFrame(times, 0.15), 2U);
    EXPECT_EQ(selectDueFrame(times, 9.0), 3U);
}

SMovieProgress progress(bool decoder_finished, bool frames_queued, bool audio_queued,
                        double since_last_frame) {
    return {.decoder_finished = decoder_finished,
            .frames_queued = frames_queued,
            .audio_queued = audio_queued,
            .since_last_frame = since_last_frame};
}

TEST(Movie, RunsWhileTheDecoderOrQueueHasFrames) {
    EXPECT_FALSE(hasMovieEnded(progress(false, false, false, 0.0)));
    EXPECT_FALSE(hasMovieEnded(progress(true, true, false, 0.0)));
}

TEST(Movie, EndsWhenThePictureAndSoundAreDone) {
    EXPECT_TRUE(hasMovieEnded(progress(true, false, false, 0.0)));
}

TEST(Movie, WaitsForTheSoundUpToTheGrace) {
    EXPECT_FALSE(hasMovieEnded(progress(true, false, true, 2.9)));
    EXPECT_TRUE(hasMovieEnded(progress(true, false, true, kMovieAudioGrace)));
}

using SampleBytes = std::array<std::uint8_t, 2>;

// Runs samples through applyGain as the native-order bytes the resampler writes.
std::vector<std::int16_t> gained(const std::vector<std::int16_t> &samples, float gain) {
    std::vector<std::uint8_t> bytes;
    for (const std::int16_t sample : samples) {
        const auto encoded = std::bit_cast<SampleBytes>(sample);
        bytes.insert(bytes.end(), encoded.begin(), encoded.end());
    }
    applyGain(bytes, gain);
    std::vector<std::int16_t> out;
    for (std::size_t i = 0; i < bytes.size(); i += 2) {
        out.push_back(std::bit_cast<std::int16_t>(SampleBytes{bytes.at(i), bytes.at(i + 1)}));
    }
    return out;
}

TEST(Movie, GainScalesSamples) {
    EXPECT_EQ(gained({1000, -1000, 0}, 0.5F), (std::vector<std::int16_t>{500, -500, 0}));
}

TEST(Movie, FullGainLeavesSamplesAlone) {
    EXPECT_EQ(gained({32767, -32768}, 1.0F), (std::vector<std::int16_t>{32767, -32768}));
}

TEST(Movie, GainAboveOneSaturates) {
    EXPECT_EQ(gained({30000, -30000}, 2.0F), (std::vector<std::int16_t>{32767, -32768}));
}

TEST(Movie, ZeroOrNegativeGainSilences) {
    EXPECT_EQ(gained({1000, -1000}, 0.0F), (std::vector<std::int16_t>{0, 0}));
    EXPECT_EQ(gained({1000, -1000}, -1.0F), (std::vector<std::int16_t>{0, 0}));
}

TEST(Movie, GainLeavesATrailingOddByte) {
    std::vector<std::uint8_t> bytes = {0x10, 0x00, 0x7f};
    applyGain(bytes, 0.0F);
    EXPECT_EQ(bytes, (std::vector<std::uint8_t>{0x00, 0x00, 0x7f}));
}

} // namespace
} // namespace nocturne::common
