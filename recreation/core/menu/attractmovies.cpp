#include "core/menu/attractmovies.h"

#include "platform/clock.h"

#include <algorithm>
#include <chrono>

namespace nocturne::core {
namespace {

// The end of a pass is seen on a menu frame, a frame or so late, long enough to hear the music
// start over; a quarter second off its end isn't.
constexpr double kMusicEndLeadSeconds = 0.25;
constexpr std::chrono::duration<double> kPreMovieSilence{0.4};
// Menu frames are milliseconds apart, so a longer gap is a screen that ran in front of the menu.
constexpr double kMenuAwayGapSeconds = 0.5;

} // namespace

CAttractMovies::CAttractMovies(platform::IClock &clock) : clock_(clock) {}

void CAttractMovies::setOpeningPlayed(bool played) {
    opening_played_ = played;
}

void CAttractMovies::setMusicDuration(float seconds) {
    armed_ = seconds > 0.0F;
    if (!armed_) {
        return;
    }
    const double now = getNow();
    period_ = seconds;
    deadline_ = std::max(now + period_ - kMusicEndLeadSeconds, now);
    last_tick_ = now;
}

bool CAttractMovies::tick() {
    if (!opening_played_ || !armed_) {
        return false;
    }
    const double now = getNow();
    const double gap = now - last_tick_;
    last_tick_ = now;
    if (now < deadline_) {
        return false;
    }
    if (gap > kMenuAwayGapSeconds) {
        while (deadline_ <= now) {
            deadline_ += period_;
        }
        return false;
    }
    armed_ = false;
    return true;
}

void CAttractMovies::pauseBeforeMovie() {
    clock_.sleep(kPreMovieSilence);
}

double CAttractMovies::getNow() const {
    return static_cast<double>(clock_.getCounter()) /
           static_cast<double>(clock_.getCounterFrequency());
}

} // namespace nocturne::core
