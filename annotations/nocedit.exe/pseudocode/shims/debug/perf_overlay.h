#pragma once

// =============================================================================
// PERF OVERLAY — frame rate in the top-right corner
// =============================================================================
//
// An addition. Drawn while the Debug page's "FPS counter" line is on
// (NOCTURNE_CHEAT_PERF_STATS), which is read as this machine's own setting: it
// changes nothing in the simulation, so a netplay host has no say in it.
//
// Three lines, right-aligned in the HUD's font and colour:
//   the frame rate, the mean and worst frame time over the last half second,
//   and the resolution with the renderer in use.
// Measured by wall clock between calls, so it counts everything the frame
// cost, not only the game's own delta time.

#ifdef __cplusplus
extern "C" {
#endif

// Called once per rendered game frame, after the HUD. Costs one cheat lookup
// while the line is off.
void nocturne_perf_overlay_render(void);

#ifdef __cplusplus
}
#endif
