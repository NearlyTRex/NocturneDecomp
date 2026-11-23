#pragma once

// =============================================================================
// LOOPING PLATFORMS NOT DRAWN ON THEIR WAY BACK
// =============================================================================
//
// A CPlatform whose toStartEvent and toEndEvent are both "true" runs back and
// forth for ever. The train's scenery uses that to stream past the windows: the
// telephone pole and the windmill cross the set in 10 s and return to their
// start in 0.1 s. The return is drawn like any other move, so for a few frames
// the pole sweeps back through the scene past the camera and is gone.
//
// This says when a platform is on that return: it loops, and it is moving along
// its shorter leg. CPlatform::renderOpaque draws nothing then, as the menu
// bats skip the segment that closes their path.
//
// Gated by NOCTURNE_AUTHENTIC_PLATFORM_LOOP_RETURN at the call site.

#ifdef __cplusplus
extern "C" {
#endif

// 1 when a platform in `state` (EPlatformStateType) with these events and
// travel times is a loop on its way back; 0 otherwise.
int nocturne_platform_loop_return(int state, const char *to_start_event, const char *to_end_event,
                                  float travel_time_to_start, float travel_time_to_end);

#ifdef __cplusplus
}
#endif
