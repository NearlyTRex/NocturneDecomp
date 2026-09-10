#pragma once

// =============================================================================
// SHIM CONFIG — MOVIE PLAYBACK
// =============================================================================
//
// One knob, tuning a feature with no authentic answer because the shipped game
// never reached it.
//
// The two media flags that DO have an authentic answer are in
// shim_config_authentic.h with the other fidelity flags: AUTHENTIC_FMV, for the
// opening movie the shipped build silently declined to play, and
// AUTHENTIC_ATTRACT_MOVIES, for the four it never referenced at all.
//
// Included from shim_config.h, which is what nocturne.h reaches.

// NOCTURNE_MOVIE_VOLUME_DEFAULT
//   Where the "Movie Vol" line in Sound Options starts, as a percentage, before
//   the player has ever set it. Another addition with no authentic side: the
//   shipped game reached movies through MCI, which carried the desktop's volume
//   and none of the game's own, and in practice never played one at all.
//
//   Once the player moves the line the choice is persisted as [Sound]
//   MovieVolume and this stops mattering.
#ifndef NOCTURNE_MOVIE_VOLUME_DEFAULT
#define NOCTURNE_MOVIE_VOLUME_DEFAULT 100
#endif
