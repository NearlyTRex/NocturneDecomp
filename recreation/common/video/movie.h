#pragma once

#include "common/video/presentation.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>

namespace nocturne::common {

// Where positionMovieWindow puts a movie: doubled on a screen wider than 400 or taller than
// 300, then centred. Empty when the result would not fit on the screen.
[[nodiscard]] std::optional<SViewport> placeMovie(SExtent movie, SExtent screen);

// The wall clock a movie plays to, in seconds. Audio is not the master: frames that fall behind
// are dropped instead of the picture slowing to the sound.
class CMovieClock {
public:
    // Starts the clock, or resumes it from a pause.
    void play(double now);
    void pause(double now);
    // Seconds of the movie played by now; frozen while paused, zero before the first play.
    [[nodiscard]] double getTime(double now) const;

private:
    double started_ = 0.0;
    double paused_at_ = 0.0;
    bool running_ = false;
    bool paused_ = false;
};

// The latest queued frame whose time has come, by presentation time in seconds; the frames
// before it are overdue and dropped. Empty when the first is still in the future.
[[nodiscard]] std::optional<std::size_t> selectDueFrame(std::span<const double> frame_times,
                                                        double movie_time);

struct SMovieProgress {
    bool decoder_finished = false;
    bool frames_queued = false;
    bool audio_queued = false;
    // Seconds since the last frame was shown, once the decoder has finished.
    double since_last_frame = 0.0;
};

// How long a movie waits for its sound to finish after the picture has.
inline constexpr double kMovieAudioGrace = 3.0;

// Ended when every frame is shown and the sound has drained, or the grace has run out on it.
[[nodiscard]] bool hasMovieEnded(const SMovieProgress &progress);

// Scales 16-bit samples, in native byte order as the resampler writes them, by the movie volume.
// Zero or less silences them, which still keeps the timing the samples carry. A trailing odd
// byte is left alone.
void applyGain(std::span<std::uint8_t> samples, float gain);

} // namespace nocturne::common
