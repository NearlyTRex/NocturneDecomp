#pragma once

// =============================================================================
// NETPLAY — SESSION STATE
// =============================================================================
//
// What every netplay module, and the additions that behave differently in a
// network game, ask of g_CNetGamePtr. Each reads only session state every
// machine in the session agrees on, so a decision keyed on it stays in
// lockstep.
//
// active and playing are different questions and are kept apart: a session is
// active from the moment it connects, through the lobby, loading and play, and
// is playing only while CNetGame::network_mode is NET_MODE_PLAYING. A change
// that has to be scheduled onto a sim frame needs playing; one that only has to
// know a session exists needs active.
//
// Not gated on NOCTURNE_AUTHENTIC_NETPLAY: these only read state, which the
// shipped netplay keeps too. A module that must stay inert under that flag
// gates its own entry points.

#ifdef __cplusplus
extern "C" {
#endif

struct SNetPacketHeader;

// A network session is connected: host or guest, in any network_mode.
int nocturne_net_session_active(void);

// A network session is connected and its simulation is running.
int nocturne_net_session_playing(void);

// This machine hosts the active session.
int nocturne_net_session_is_host(void);

// This machine is a guest in a session that is playing.
int nocturne_net_session_is_guest(void);

// This machine's own sim frame index.
int nocturne_net_session_local_frame(void);

// Sends `header`'s packet to every other player in the session.
void nocturne_net_session_broadcast(struct SNetPacketHeader *header);

// Clears every netplay module's per-mission state — the sync checker's ring,
// the RNG reports, the sim trace, and the weapon, camera and skip queues —
// so nothing scheduled in one mission applies inside the next. Called from
// CDemonMission::createOneHero. Each module's reset is a no-op under
// NOCTURNE_AUTHENTIC_NETPLAY, and the sync ring's when the checker is
// compiled out.
void nocturne_net_session_reset(void);

#ifdef __cplusplus
}
#endif
