#include "core/game/game.h"

#include "common/math/fixed.h"
#include "engine/gameclock.h"

#include <algorithm>

namespace nocturne::core {
namespace {

// The clock's 65536 * 18 ticks a second, as 16.16 seconds.
constexpr int kTicksPerDeltaUnit = 18;
constexpr int kMaxDeltaTimeInt = 0x4000;
constexpr double kDeltaTimeToSeconds = 1.0 / 65536.0;

} // namespace

CGame::CGame(engine::IGameClock &clock) : clock_(clock) {
    restoreDefaultControls();
}

// nocedit 0x004d7d80
void CGame::saveClockTime() {
    clocktime_ = clock_.getTime();
}

// deferred: the fixed thirtieth of a second, scaled, while a debug movie records, with
//   setupMovieRecording
// nocedit 0x004d7d90
void CGame::updateDT() {
    const int now = clock_.getTime();
    const int elapsed = common::wrappingSubtract(now, clocktime_) / kTicksPerDeltaUnit;
    clocktime_ = now;
    const int clamped = std::clamp(elapsed, 0, kMaxDeltaTimeInt);
    delta_time_int_ = common::truncateToInt(static_cast<double>(clamped) *
                                            static_cast<double>(time_scale_factor));
    delta_time_float_ =
        static_cast<float>(static_cast<double>(delta_time_int_) * kDeltaTimeToSeconds);
}

int CGame::getDeltaTimeInt() const {
    return delta_time_int_;
}

float CGame::getDeltaTimeFloat() const {
    return delta_time_float_;
}

} // namespace nocturne::core
