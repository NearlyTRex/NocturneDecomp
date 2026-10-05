#pragma once

// =============================================================================
// NETPLAY TRACES (debug)
// =============================================================================
//
// Per-machine state that decides what each player sees, logged to the
// "netplay" channel when it changes. None of it is lockstep state, so the two
// machines' logs are read side by side rather than diffed (net/sim_trace.h is
// the diffable one).
//
// Compile-time gated by NOCTURNE_NETPLAY_RNG_TRACE in shim_config_netplay.h,
// which only the dev preset turns on. Every entry point is empty otherwise.

#ifdef __cplusplus
extern "C" {
#endif

// Once per frame from CGame::runGameSession, after it has settled whether a
// guest is waiting (its hero dead or held out of the world, the view on the
// host's hero) and pointed the script's focus actor accordingly. Logs:
//   - "waiting a->b" when `was_waiting` and `waiting` differ, with the local
//     hero's area and `death_state`, and the local, host and focus actors;
//   - "focus_actor now" when the script's focus actor changes, with who is
//     speaking and whether the focus is locked;
//   - "camera" when this machine's displayed camera, the focus actor's
//     director zone or the goggles change, stamped with wall-clock
//     milliseconds and the local sim frame, with the focus actor's position,
//     the script's camera hold, and the letterbox state. The zone is found as
//     CDemonSet::evaluateVirtualDirector finds it, from the bounding box
//     centre; a zone of -1 scores every camera negative, so the view stays
//     where it was.
void nocturne_net_trace_view(int was_waiting, int waiting, int death_state);

#ifdef __cplusplus
}
#endif
