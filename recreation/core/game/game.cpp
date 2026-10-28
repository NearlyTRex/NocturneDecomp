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
// deferred: refusing the draw and flashlight requests in a mission whose name starts "HQ-",
//   before netplay sends the input (the decomp's hq_weapon.h, FLASHLIGHT_DRAW), with
//   CGame::playerControls
// deferred: withholding the hero's input while the script camera is on a dead character who is
//   not a player hero (the decomp's helper_death.h nocturne_helper_death_hold_hero), with
//   CGame::playerControls
// deferred: a session the script ended with "end" closing on the Game Over menu, as a helper's
//   death ends it, where the original drops to the main menu (the decomp's helper_death.h), with
//   CGame::runGameSession
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
