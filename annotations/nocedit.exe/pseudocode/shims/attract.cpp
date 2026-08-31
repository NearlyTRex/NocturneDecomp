// =============================================================================
// ATTRACT MOVIES — session state for the menu's post-music cutscene
// =============================================================================
// See attract.h for what this is and why the countdown lives here rather than
// in game globals.

#include "attract.h"
#include "debug_log.h"

#include <chrono>
#include <thread>

namespace {

// Non-zero once the opening movie has actually played this launch.
int s_opening_played = 0;

// When the splash music is due to end, on the monotonic clock. Meaningless
// while disarmed.
double s_music_deadline = 0.0;

// Guards against a second fire before CSound::configure re-arms us.
int s_armed = 0;

// Kept only to report how long the wait actually was.
double s_armed_at = 0.0;

// How early to fire, relative to the music's reported end.
//
// getSoundDuration is the length of the sample, and the trigger can only be
// noticed on a menu frame, so without a lead the music is stopped a frame or so
// *after* it reaches that point. If the sample loops, that is long enough for
// the wrap to be heard - one note of the track starting over, right as the
// movie opens. Firing slightly early stops it before it can wrap, and a quarter
// second off the end of a fade is not something anyone hears.
const double kMusicEndLeadSeconds = 0.25;

// Silence held between stopping the music and starting the movie.
//
// CSound::reset stops the sample, but whatever the mixer has already handed to
// the audio device still drains - so the tail can be heard over the first
// moment of the movie even though the game considers the music stopped. Waiting
// out that buffer before the movie opens is the only way to be sure the two
// never overlap, and it gives the cut a beat of silence rather than a hard
// splice.
const double kPreMovieSilenceSeconds = 0.40;

// A monotonic clock, not the frame delta.
//
// The countdown used to be accumulated from the menu's own delta_time_float,
// which desynced it from the music every time a blocking screen ran. The music
// is started by the sound hardware and keeps playing through anything that
// blocks the menu loop - showOptionsScreen in particular, which from the main
// menu is called as showOptionsScreen(0) and is the one menu case that touches
// neither CSound::reset nor CSound::configure. The loop that ticks the
// countdown is not running for any of that time, so the music advances and the
// countdown does not.
//
// A guard used to try to catch exactly that ("a frame delta this large is not
// real time passing"), but it could never fire: CGame::updateDT clamps
// delta_time_int to 0x4000 before scaling it by 1/65536, so delta_time_float
// can never exceed 0.25s and the 0.5s threshold was unreachable. The whole of a
// two-minute visit to the options screen was charged to the countdown as a
// quarter of a second.
//
// Measuring against the clock the music itself runs on removes the failure mode
// rather than trying to detect it: whatever blocks the menu, and for however
// long, the deadline still lands when the music ends.
double now_seconds() {
    using namespace std::chrono;
    return duration<double>(steady_clock::now().time_since_epoch()).count();
}

} // namespace

extern "C" void nocturne_attract_set_opening_played(int played) {
    s_opening_played = played ? 1 : 0;
    DLOG_EX("attract", "opening_played=%d", s_opening_played);
}

extern "C" void nocturne_attract_set_music_duration(float seconds) {
    if (seconds > 0.0f) {
        s_armed_at = now_seconds();
        s_music_deadline = s_armed_at + (double)seconds - kMusicEndLeadSeconds;
        if (s_music_deadline < s_armed_at) {
            // A track shorter than the lead itself; do not fire in the past.
            s_music_deadline = s_armed_at;
        }
        s_armed = 1;
    } else {
        s_music_deadline = 0.0;
        s_armed = 0;
    }
    DLOG_EX("attract", "music_duration=%.2fs armed=%d (opening_played=%d)",
            (double)seconds, s_armed, s_opening_played);
}

extern "C" int nocturne_attract_tick(void) {
    double now;

    if (!s_opening_played || !s_armed) {
        return 0;
    }
    now = now_seconds();
    if (now < s_music_deadline) {
        return 0;
    }

    // Disarm so this fires once; the caller restarts the music and
    // CSound::configure registers a fresh duration to re-arm.
    s_armed = 0;
    DLOG_EX("attract", "fired %.2fs after arming (deadline was %.2fs after)",
            now - s_armed_at, s_music_deadline - s_armed_at);
    s_music_deadline = 0.0;
    return 1;
}

extern "C" void nocturne_attract_pre_movie_pause(void) {
    std::this_thread::sleep_for(
        std::chrono::duration<double>(kPreMovieSilenceSeconds));
}
