#include "wincore/winrun/winrun.h"

#include "common/error/fatalerror.h"
#include "platform/clock.h"
#include "platform/window.h"

#include <format>

namespace nocturne::wincore {
namespace {

constexpr double kTicksPerSecond = 65536.0 * 18.0;

} // namespace

// The counter is read as calibrateCPUSpeed read it; the speed it then measured was never used.
CWinRun::CWinRun(platform::IWindow &window, platform::IClock &clock)
    : window_(window), clock_(clock),
      timer_calibration_(static_cast<double>(clock.getCounterFrequency())),
      performance_counter_(clock.getCounter()) {}

// The original fell back to timeGetTime without a performance counter; the clock always has one.
// Each call truncates its own fraction of a tick, so the game clock runs slightly slow.
// nocedit 0x005f2dc0
int CWinRun::getTime() {
    const std::uint64_t previous_counter = performance_counter_;
    performance_counter_ = clock_.getCounter();
    const auto elapsed = static_cast<double>(performance_counter_ - previous_counter);
    accumulated_game_time_ += static_cast<std::uint32_t>(
        static_cast<std::int64_t>(elapsed / timer_calibration_ * kTicksPerSecond));
    return static_cast<int>(accumulated_game_time_);
}

// The quit is main's: it returns 1 once the box is closed.
// nocedit 0x005f3920
void CWinRun::displayMessageBoxAndQuit(const common::CFatalError &error) {
    window_.showMessageBox(
        std::format("{}\n\nFile: {}\nLine: {}", error.what(), error.getFile(), error.getLine()),
        kApplicationTitle);
}

} // namespace nocturne::wincore
