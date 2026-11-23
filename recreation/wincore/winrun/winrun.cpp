#include "wincore/winrun/winrun.h"

#include "common/error/fatalerror.h"
#include "common/math/fixed.h"
#include "platform/clock.h"
#include "platform/window.h"

#include <cmath>
#include <format>

namespace nocturne::wincore {

// The counter is read as calibrateCPUSpeed read it; the speed it then measured was never used.
CWinRun::CWinRun(platform::IWindow &window, platform::IClock &clock, engine::CGamepadInput &gamepad)
    : window_(window), clock_(clock), gamepad_(gamepad),
      timer_calibration_(static_cast<double>(clock.getCounterFrequency())),
      performance_counter_(clock.getCounter()) {}

// The original fell back to timeGetTime without a performance counter; the clock always has one.
// It also dropped each call's fraction of a tick, so a loop faster than a tick a pass, as
// clearInputUntilTick's is, saw the clock stand still for seconds; the fraction is carried to the
// next call. A step too long for an int adds the x87's integer indefinite.
// nocedit 0x005f2dc0
// bw1 0x005b2420
// bw2 0x0058e9e0
// bw3 0x005806a0
int CWinRun::getTime() {
    const std::uint64_t previous_counter = performance_counter_;
    performance_counter_ = clock_.getCounter();
    const auto elapsed = static_cast<double>(performance_counter_ - previous_counter);
    const double ticks = (elapsed / timer_calibration_ * kTicksPerSecond) + tick_remainder_;
    tick_remainder_ = ticks - std::trunc(ticks);
    accumulated_game_time_ += static_cast<std::uint32_t>(common::truncateToInt(ticks));
    return static_cast<int>(accumulated_game_time_);
}

// The quit is main's: it returns 1 once the box is closed.
// nocedit 0x005f3920
// bw1 0x005b3080
// bw2 0x0058f5d0
// bw3 0x00581300
void CWinRun::displayMessageBoxAndQuit(const common::CFatalError &error) {
    window_.showMessageBox(
        std::format("{}\n\nFile: {}\nLine: {}", error.what(), error.getFile(), error.getLine()),
        title_);
}

void CWinRun::setTitle(std::string_view title) {
    title_ = title;
    window_.setTitle(title);
}

} // namespace nocturne::wincore
