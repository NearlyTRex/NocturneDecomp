#include "common/video/movie.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <limits>

namespace nocturne::common {
namespace {

constexpr float kLowest = std::numeric_limits<std::int16_t>::min();
constexpr float kHighest = std::numeric_limits<std::int16_t>::max();

} // namespace

std::optional<SViewport> placeMovie(SExtent movie, SExtent screen) {
    constexpr int kDoubleAboveWidth = 400;
    constexpr int kDoubleAboveHeight = 300;
    const int scale =
        screen.width > kDoubleAboveWidth || screen.height > kDoubleAboveHeight ? 2 : 1;
    const int width = movie.width * scale;
    const int height = movie.height * scale;
    if (width <= 0 || height <= 0 || width > screen.width || height > screen.height) {
        return std::nullopt;
    }
    return SViewport{.x = (screen.width - width) / 2,
                     .y = (screen.height - height) / 2,
                     .width = width,
                     .height = height};
}

void CMovieClock::play(double now) {
    if (!running_) {
        started_ = now;
        running_ = true;
        return;
    }
    if (paused_) {
        started_ += now - paused_at_;
        paused_ = false;
    }
}

void CMovieClock::pause(double now) {
    if (!running_ || paused_) {
        return;
    }
    paused_at_ = now;
    paused_ = true;
}

double CMovieClock::getTime(double now) const {
    if (!running_) {
        return 0.0;
    }
    return (paused_ ? paused_at_ : now) - started_;
}

std::optional<std::size_t> selectDueFrame(std::span<const double> frame_times, double movie_time) {
    const auto first_future =
        std::ranges::find_if(frame_times, [movie_time](double time) { return time > movie_time; });
    if (first_future == frame_times.begin()) {
        return std::nullopt;
    }
    return static_cast<std::size_t>(first_future - frame_times.begin()) - 1;
}

bool hasMovieEnded(const SMovieProgress &progress) {
    if (!progress.decoder_finished || progress.frames_queued) {
        return false;
    }
    return !progress.audio_queued || progress.since_last_frame >= kMovieAudioGrace;
}

void applyGain(std::span<std::uint8_t> samples, float gain) {
    using SampleBytes = std::array<std::uint8_t, sizeof(std::int16_t)>;
    const float scale = std::max(gain, 0.0F);
    for (std::size_t i = 0; i + sizeof(std::int16_t) <= samples.size(); i += sizeof(std::int16_t)) {
        const auto bytes = samples.subspan(i, sizeof(std::int16_t));
        const auto sample = std::bit_cast<std::int16_t>(SampleBytes{bytes[0], bytes[1]});
        const auto scaled = static_cast<std::int16_t>(
            std::clamp(std::round(static_cast<float>(sample) * scale), kLowest, kHighest));
        std::ranges::copy(std::bit_cast<SampleBytes>(scaled), bytes.begin());
    }
}

} // namespace nocturne::common
