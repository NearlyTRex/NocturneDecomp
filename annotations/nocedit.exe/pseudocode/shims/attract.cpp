// =============================================================================
// ATTRACT MOVIES — session state for the menu's post-music cutscene
// =============================================================================
// See attract.h for what this is and why the countdown lives here rather than
// in game globals.

#include "attract.h"
#include "debug_log.h"

namespace {

// Non-zero once the opening movie has actually played this launch.
int s_opening_played = 0;

// Seconds left of the splash music, or <= 0 when disarmed.
float s_music_remaining = 0.0f;

// Guards against a second fire before CSound::configure re-arms us.
int s_armed = 0;

// A frame delta this large is not real time passing — it is the menu loop
// resuming after something blocking (the opening movie, a submenu, a level
// load). Charging it against the countdown would burn the whole track at once.
const float kMaxSaneDelta = 0.5f;

} // namespace

extern "C" void nocturne_attract_set_opening_played(int played) {
    s_opening_played = played ? 1 : 0;
    DLOG_EX("attract", "opening_played=%d", s_opening_played);
}

extern "C" void nocturne_attract_set_music_duration(float seconds) {
    if (seconds > 0.0f) {
        s_music_remaining = seconds;
        s_armed = 1;
    } else {
        s_music_remaining = 0.0f;
        s_armed = 0;
    }
    DLOG_EX("attract", "music_duration=%.2fs armed=%d (opening_played=%d)",
            (double)seconds, s_armed, s_opening_played);
}

extern "C" int nocturne_attract_tick(float delta_seconds) {
    if (!s_opening_played || !s_armed) {
        return 0;
    }
    if (delta_seconds > 0.0f && delta_seconds < kMaxSaneDelta) {
        s_music_remaining -= delta_seconds;
    }
    if (s_music_remaining > 0.0f) {
        return 0;
    }

    // Disarm so this fires once; the caller restarts the music and
    // CSound::configure registers a fresh duration to re-arm.
    s_armed = 0;
    s_music_remaining = 0.0f;
    return 1;
}
