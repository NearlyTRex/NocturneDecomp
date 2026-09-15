#pragma once

// =============================================================================
// ATTRACT MOVIES — play a cutscene at a wrap of the menu's splash music
// =============================================================================
//
// An addition, not a reconstruction: neither shipped binary ever did this.
// NOC1..NOC4.AVI have no call site anywhere in nocedit.exe or nocturne.exe, so
// nothing in the original ever played them. Gated on
// NOCTURNE_AUTHENTIC_ATTRACT_MOVIES.
//
// The trigger is the main menu's splash music reaching the end of a pass with
// the main menu on screen. CSound::configure starts "splash-music-44.wav" (or
// the 22kHz variant on a low sample rate); its keep also looks up that sample's
// length via CSound::getSoundDuration and registers it here, and
// enterMainGameMenu ticks this once a frame.
//
// The track loops — SOUND\SPLASH-MUSIC-44.SFX holds the single word "loop",
// which is what CSfxSample::parseConfigFile reads to point loop_destinations[0]
// back at the start of the sample — so it runs for as long as the menu is up
// and its end comes round once per pass. Each of those is an opportunity, not a
// deadline: one that arrives while a submenu or a dialog has the screen goes
// unused, and the wait moves to the end of the pass now playing.
//
// Why a countdown rather than asking whether the sound is still playing:
// isSfxPlaying() only reports whether the handle still owns a mixer slot, and
// slots are reaped by CSound::process — which is called exclusively from
// CGame::processFrame, i.e. during gameplay. The main menu never services the
// sound system, so a finished menu sample keeps its slot forever and
// isSfxPlaying stays true no matter how long you wait (measured: still true
// after 6000+ polls). The sample's own duration is the only honest answer
// available from the menu.
//
// This module holds only the session state — the scalars that would otherwise
// need new game globals (generator/Ghidra territory). All the game calls stay
// in the keeps.
//
// Nothing persists. The opening plays every launch as it always did; attract
// movies only ever follow it within the same session.

#ifdef __cplusplus
extern "C" {
#endif

// initializeGameSystems, with playMovie's return value: non-zero if the opening
// actually played this launch. Attract movies stay disarmed until it has, so a
// build with NOCTURNE_AUTHENTIC_FMV=1 (or a missing opening.avi) gets no movies
// at all rather than skipping straight to the cutscenes.
void nocturne_attract_set_opening_played(int played);

// CSound::configure, with the length in seconds of the splash music it just
// started (CSound::getSoundDuration on the same filename). This is one pass of
// the loop, so it sets both when the first end arrives and how far apart the
// ones after it are. A value <= 0 — which is what getSoundDuration returns as
// -1.0 when the sample cannot be found — disarms the trigger instead of firing
// instantly.
void nocturne_attract_set_music_duration(float seconds);

// Called once per main-menu frame. Returns 1 on the frame a pass of the music
// ends with the main menu on screen for it; the caller should play one attract
// movie and then restart the music (CSound::reset followed by CSound::configure,
// the same pairing the menu already uses around submenus), which re-arms this
// for the next cycle. Returns 1 at most once per cycle.
//
// The window is the end of a pass *and* the main menu being the thing in front
// of the player. The track loops, so a pass that ends while a submenu or a
// dialog has the screen is simply not a chance to show a movie: the music wraps
// and plays on, this waits for the end of the pass now running, and someone who
// spends five minutes in the options screen comes back to the music still
// going and a movie at its next end. Blocking screens are told from menu frames
// by the distance between consecutive calls — menu frames are milliseconds
// apart, a screen that blocks the loop is not.
//
// Takes no frame delta: the deadline is a point on a monotonic clock, so it
// cannot drift against the music. See attract.cpp.
int nocturne_attract_tick(void);

// Holds a short silence, to be called after CSound::reset has stopped the music
// and before playMovie opens the cutscene.
//
// Stopping the music does not empty the audio device — what the mixer has
// already queued still drains, so without this the last fragment of the splash
// track is heard over the opening moment of the movie. Waiting it out also
// gives the transition a beat of silence instead of a hard splice. The length,
// and how early the trigger fires so a looping track cannot wrap first, are
// both constants at the top of attract.cpp.
void nocturne_attract_pre_movie_pause(void);

#ifdef __cplusplus
}
#endif
