#pragma once

// =============================================================================
// SHIM CONFIG — MOVIES AND VOICE
// =============================================================================
//
// Playback that has no authentic answer, because the shipped game never did it
// at all. One flag so far.
//
// The two media flags that DO have an authentic answer — AUTHENTIC_VOICE and
// AUTHENTIC_FMV, both describing something the shipped build silently declined
// to play — are in shim_config_authentic.h with the other fidelity flags.
//
// Included from shim_config.h, which is what nocturne.h reaches.

// NOCTURNE_ATTRACT_MOVIES
//   An ADDITION, not a reconstruction — unlike the NOCTURNE_AUTHENTIC_* toggles
//   above, there is no "authentic" side to this one. Neither shipped binary ever
//   played NOC1..NOC4.AVI; those files have no call site anywhere in
//   nocedit.exe or nocturne.exe.
//   1: once the opening movie has played, the main menu plays a random
//      NOC1..NOC4 whenever its splash music finishes, then restarts the music
//      (so it cycles). Arcade attract-mode behaviour.
//   0: off — the menu behaves exactly as shipped.
//
//   Session-only: nothing is persisted, so the opening still plays every launch
//   and attract movies only ever follow it within the same run. Requires the
//   movies to be where the game looks (the hardcoded "video\" directory) and
//   is inert when NOCTURNE_AUTHENTIC_FMV is 1, when opening.avi is missing, or
//   while sound is muted (no splash music means no trigger).
//
//   Override with -DNOCTURNE_ATTRACT_MOVIES=0.
#ifndef NOCTURNE_ATTRACT_MOVIES
#define NOCTURNE_ATTRACT_MOVIES 1
#endif
