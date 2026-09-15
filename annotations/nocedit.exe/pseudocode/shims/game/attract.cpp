// =============================================================================
// ATTRACT MOVIES — session state for the menu's post-music cutscene
// =============================================================================
// See attract.h for what this is and why the countdown lives here rather than
// in game globals.

#include "game/attract.h"
#include "core/debug_log.h"

#include <chrono>
#include <thread>

namespace {

// Non-zero once the opening movie has actually played this launch.
int s_opening_played = 0;

// When the splash music next reaches the end of a pass, on the monotonic clock.
// Meaningless while disarmed.
double s_music_deadline = 0.0;

// One pass of the splash music, in seconds. The track loops, so passes come
// round at this interval for as long as it plays, and a wrap that goes by
// unused is replaced by the next one.
double s_music_period = 0.0;

// Guards against a second fire before CSound::configure re-arms us.
int s_armed = 0;

// Kept only to report how long the wait actually was.
double s_armed_at = 0.0;

// When the menu last ticked, on the same clock as the deadline. The distance
// between two ticks is how the tick tells a menu frame from a screen that took
// the menu away.
double s_last_tick = 0.0;

// How early to fire, relative to the end of a pass of the music.
//
// getSoundDuration is the length of the sample, and the trigger can only be
// noticed on a menu frame, so without a lead the music is stopped a frame or so
// *after* it reaches that point. The sample loops - SOUND\SPLASH-MUSIC-44.SFX
// is the single word "loop", which is what CSfxSample::parseConfigFile reads to
// set loop_destinations[0] to 0 - so a frame late is long enough for the wrap
// to be heard, one note of the track starting over right as the movie opens.
// Firing slightly early stops it before it can wrap, and a quarter second off
// the end of a fade is not something anyone hears.
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

// The gap between two ticks above which the main menu was not on screen.
//
// A menu frame is a CMoon update, a menu render and a buffer swap, so two ticks
// in the same visit to the menu are milliseconds apart; anything approaching
// half a second is a screen that ran in front of the menu and blocked its loop.
// Several of those exist - showOptionsScreen, which from the main menu is
// called as showOptionsScreen(0), and the file-selection dialogs under it and
// under the LOAD entry - and the music plays on behind all of them.
//
// The gap is measured on the wall clock rather than from the menu's own
// delta_time_float, which cannot see it: CGame::updateDT clamps delta_time_int
// to 0x4000 before scaling it by 1/65536, so delta_time_float never exceeds
// 0.25s no matter how long the frame really took, and a two-minute visit to the
// options screen arrives as a quarter of a second.
const double kMenuAwayGapSeconds = 0.5;

// A monotonic clock, not the frame delta.
//
// The deadline is a point on this clock rather than a running total of frame
// deltas, so it cannot drift against the music: both run on real time, whatever
// the menu loop is doing. The music is started by the sound hardware and plays
// on through anything that blocks that loop, which is exactly why a wrap can
// come round with the menu off screen - the tick's away-gap test is what
// notices that and moves on to the next one.
double now_seconds() {
    using namespace std::chrono;
    return duration<double>(steady_clock::now().time_since_epoch()).count();
}

} // namespace

extern "C" void nocturne_attract_set_opening_played(int played) {
    s_opening_played = played ? 1 : 0;
    DLOG("frontend", "opening_played=%d", s_opening_played);
}

extern "C" void nocturne_attract_set_music_duration(float seconds) {
    if (seconds > 0.0f) {
        s_armed_at = now_seconds();
        s_last_tick = s_armed_at;
        s_music_period = (double)seconds;
        s_music_deadline = s_armed_at + s_music_period - kMusicEndLeadSeconds;
        if (s_music_deadline < s_armed_at) {
            // A track shorter than the lead itself; do not fire in the past.
            s_music_deadline = s_armed_at;
        }
        s_armed = 1;
    } else {
        s_music_deadline = 0.0;
        s_music_period = 0.0;
        s_armed = 0;
    }
    DLOG("frontend", "music_duration=%.2fs armed=%d (opening_played=%d)",
            (double)seconds, s_armed, s_opening_played);
}

extern "C" int nocturne_attract_tick(void) {
    double now;
    double gap;
    int skipped;

    if (!s_opening_played || !s_armed) {
        return 0;
    }
    now = now_seconds();
    gap = now - s_last_tick;
    s_last_tick = now;

    if (now < s_music_deadline) {
        return 0;
    }

    // The track reached the end of a pass behind a screen that blocked the menu
    // loop, so nobody was at the main menu to be shown a movie. The music has
    // already wrapped and is playing on; let this pass go and wait for the end
    // of the one now running.
    if (gap > kMenuAwayGapSeconds && s_music_period > 0.0) {
        skipped = 0;
        do {
            s_music_deadline += s_music_period;
            skipped = skipped + 1;
        } while (s_music_deadline <= now);
        DLOG("frontend", "%d pass(es) ended behind a %.2fs gap; next in %.2fs",
                skipped, gap, s_music_deadline - now);
        return 0;
    }

    // Disarm so this fires once; the caller plays the movie and restarts the
    // music, and CSound::configure registers a fresh duration to re-arm.
    s_armed = 0;
    DLOG("frontend", "fired %.2fs after arming (deadline was %.2fs after)",
            now - s_armed_at, s_music_deadline - s_armed_at);
    s_music_deadline = 0.0;
    return 1;
}

extern "C" void nocturne_attract_pre_movie_pause(void) {
    std::this_thread::sleep_for(
        std::chrono::duration<double>(kPreMovieSilenceSeconds));
}
