#pragma once

// =============================================================================
// ATTRACT MOVIES — play a cutscene when the menu's splash music runs out
// =============================================================================
//
// An addition, not a reconstruction: neither shipped binary ever did this.
// NOC1..NOC4.AVI have no call site anywhere in nocedit.exe or nocturne.exe, so
// nothing in the original ever played them. Gated on NOCTURNE_ATTRACT_MOVIES.
//
// The trigger is the main menu's splash music running out. CSound::configure
// starts "splash-music-44.wav" (or the 22kHz variant on a low sample rate);
// its keep also looks up that sample's length via CSound::getSoundDuration and
// registers it here, and enterMainGameMenu ticks the countdown down with the
// frame delta it already computes.
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
// This module holds only the session state — the ints and float that would
// otherwise need new game globals (generator/Ghidra territory). All the game
// calls stay in the keeps.
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
// started (CSound::getSoundDuration on the same filename). Starts/restarts the
// countdown. A value <= 0 — which is what getSoundDuration returns as -1.0 when
// the sample cannot be found — disarms the trigger instead of firing instantly.
void nocturne_attract_set_music_duration(float seconds);

// Called once per main-menu frame with that frame's delta in seconds. Returns 1
// on the frame the countdown runs out; the caller should play one attract movie
// and then restart the music (CSound::reset followed by CSound::configure, the
// same pairing the menu already uses around submenus), which re-arms this for
// the next cycle. Returns 1 at most once per cycle.
int nocturne_attract_tick(float delta_seconds);

#ifdef __cplusplus
}
#endif
