#pragma once

// =============================================================================
// A SCRIPT'S CAMERA HOLD RUNS OUT UNDER THE GOGGLES
// =============================================================================
//
// CGame::runGameSession skips CDemonSet::evaluateVirtualDirector while the
// goggles are on, and only the director counts down a script's timed camera
// hold (switchCamera(name, seconds) through CDemonSet::setPendingCamera). A
// hold set with the goggles on therefore waited, whole, for the goggles to come
// off, and the view then showed that camera for its full time: CASTLE1.SCR's
// ghoul spook, switchcamera(cas2, 3), cut a player who had walked on to cas2
// for three seconds. In a network game the script runs on every machine, so a
// spook one player set off did this to the other.
//
// Gated by NOCTURNE_AUTHENTIC_GOGGLES_CAMERA_HOLD at the call site.

struct CDemonSet;

#ifdef __cplusplus
extern "C" {
#endif

// Each frame the director is skipped for the goggles: counts the hold down by
// `delta_time` as the director would, stopping at 0. An untimed hold (1e10 s)
// is unaffected in practice.
void nocturne_goggles_camera_hold_tick(struct CDemonSet *set, float delta_time);

#ifdef __cplusplus
}
#endif
