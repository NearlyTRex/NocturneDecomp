#pragma once

#include <optional>

namespace nocturne::common {

// The frames shown since the last report, over how long.
struct SFrameRateReport {
    int frames = 0;
    double seconds = 0.0;
    double frames_per_second = 0.0;
    double slowest_frame_seconds = 0.0;

    bool operator==(const SFrameRateReport &) const = default;
};

// The frame rate for a log that can't take a line a frame: reported a second after the first
// frame, then twice as long after each report up to a minute, and a second after any report
// whose rate moved by more than a fifth.
class CFrameRateMeter {
public:
    // A frame shown at `now_seconds`, on a clock that only goes forward; a report when one is due.
    [[nodiscard]] std::optional<SFrameRateReport> addFrame(double now_seconds);

private:
    std::optional<double> started_at_;
    double last_frame_at_ = 0.0;
    double slowest_frame_ = 0.0;
    int frames_ = 0;
    double interval_ = 1.0;
    std::optional<double> last_rate_;
};

} // namespace nocturne::common
