#include "common/video/framerate.h"

#include <algorithm>
#include <cmath>
#include <optional>

namespace nocturne::common {
namespace {

constexpr double kFirstInterval = 1.0;
constexpr double kLongestInterval = 60.0;
constexpr double kIntervalGrowth = 2.0;
// A rate this share away from the last report's is a change worth hearing about soon.
constexpr double kChangeShare = 0.2;

} // namespace

std::optional<SFrameRateReport> CFrameRateMeter::addFrame(double now_seconds) {
    if (!started_at_) {
        started_at_ = now_seconds;
        last_frame_at_ = now_seconds;
        return std::nullopt;
    }
    ++frames_;
    slowest_frame_ = std::max(slowest_frame_, now_seconds - last_frame_at_);
    last_frame_at_ = now_seconds;
    const double elapsed = now_seconds - *started_at_;
    if (elapsed < interval_) {
        return std::nullopt;
    }
    const SFrameRateReport report{.frames = frames_,
                                  .seconds = elapsed,
                                  .frames_per_second = frames_ / elapsed,
                                  .slowest_frame_seconds = slowest_frame_};
    const bool changed =
        last_rate_ && std::abs(report.frames_per_second - *last_rate_) > *last_rate_ * kChangeShare;
    interval_ = changed ? kFirstInterval : std::min(interval_ * kIntervalGrowth, kLongestInterval);
    last_rate_ = report.frames_per_second;
    started_at_ = now_seconds;
    frames_ = 0;
    slowest_frame_ = 0.0;
    return report;
}

} // namespace nocturne::common
