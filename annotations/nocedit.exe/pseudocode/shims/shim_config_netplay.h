#pragma once

// =============================================================================
// SHIM CONFIG — NETPLAY
// =============================================================================
//
// Netplay knobs that have no authentic answer, because the thing they tune is
// an addition: the ini file, the drop timeout, and the three diagnostics.
//
// The switch that decides whether netplay is reachable at all —
// NOCTURNE_AUTHENTIC_NETPLAY — is in shim_config_authentic.h with the other
// fidelity flags, as is NOCTURNE_AUTHENTIC_RNG. The API headers those two gate
// (net_config.h, net_respawn.h, net_sync.h, sim_trace.h, net_weapon.h,
// net_sim.h, rng.h) are included from shim_config.h, not here.
//
// Included from shim_config.h, which is what nocturne.h reaches.

// NOCTURNE_NETPLAY_INI
//   An addition. Every network parameter in the shipped game is a compile-time
//   constant: UDP port 0x1ddf appears as a literal in four places, the socket
//   binds INADDR_ANY, and the Ctrl+J prompt is pre-filled from g_IpAddress —
//   which is baked in as an original developer's LAN address.
//   Nothing in any menu changes them.
//   1: those values are read from system/netplay.ini when it exists. See
//      net_config.h for the format. bindAddress and port fall back to the
//      shipped constant; serverAddress falls back to 127.0.0.1 instead, since
//      the baked-in address is a developer's old LAN machine and could only
//      ever be a wrong answer.
//   0: the ini is never read and the built-in constants always apply, the
//      join prompt included.
//
//   Override with -DNOCTURNE_NETPLAY_INI=0.
#ifndef NOCTURNE_NETPLAY_INI
#define NOCTURNE_NETPLAY_INI 1
#endif

// NOCTURNE_NETPLAY_TIMEOUT_SECONDS
//   How long the host tolerates total silence from a guest before dropping it,
//   in seconds. Only consulted in the non-authentic netplay mode.
//
//   The shipped game has no timeout at all: SNetPlayer::last_arrival_time is
//   written in four places and read in none, and removePlayer is only ever
//   reached from an explicit PACKET_DISCONNECT. A guest that crashes or is
//   killed rather than leaving cleanly therefore stays in the player list
//   forever with its sim_frame_index frozen — and because
//   CNetGame::processServerFrame trims the sim-frame history to the *slowest*
//   player, that frozen index stops the trim dead. The history then grows one
//   entry per frame until the host quits with "allocSimFrame - sim history
//   list full".
//
//   That is what bounds this value: the history is 512 entries and fills at one
//   per rendered frame, so at 60fps the host has ~8.5 seconds from the moment a
//   guest goes quiet. The default leaves margin under that while staying far
//   above any normal gap — during play a guest sends input every frame and
//   answers the host's pings, and the two blocking stalls that could look like
//   silence (the sync barrier and mission loading) both happen outside
//   NET_MODE_PLAYING, where this check does not run.
#ifndef NOCTURNE_NETPLAY_TIMEOUT_SECONDS
#define NOCTURNE_NETPLAY_TIMEOUT_SECONDS 5
#endif

// g_CurrentGameTime and last_arrival_time are 16.16 fixed-point seconds — see
// CNetGame::syncPlayers, which scales their difference by 1/65536, and
// addPlayer's 0x1e0000 (= 30s) ping backdate.
#define NOCTURNE_NETPLAY_TIMEOUT_TICKS \
    ((uint)(NOCTURNE_NETPLAY_TIMEOUT_SECONDS * 65536))

// The guest waits longer before giving up on the host than the host does on a
// guest. The host's limit is forced on it — the sim-frame history is filling
// while it waits — but nothing accumulates on the guest side, so its only job
// is to not hang forever. Being three times as patient keeps a host that merely
// hitched for a few seconds from costing the guest the session, since the
// guest's clock is its own wall clock and keeps running through a stall the
// host is frozen in.
#define NOCTURNE_NETPLAY_HOST_TIMEOUT_TICKS \
    ((uint)(NOCTURNE_NETPLAY_TIMEOUT_SECONDS * 3 * 65536))

// NOCTURNE_NETPLAY_SYNC_CHECK
//   1: the host reports its hero positions and a hash of the active set once
//      per sim frame, and each guest compares them against its own, logging any
//      mismatch with the frame number and both sides' coordinates. Lockstep has
//      no state comparison of any kind, so without this a desync is invisible
//      until a player notices they are somewhere the other machine says they
//      are not. Costs ~85 bytes per guest per frame and never corrects
//      anything — see net_sync.h for why correcting would be worse.
//   0: no reports are sent and no comparison is made.
//
//   Override with -DNOCTURNE_NETPLAY_SYNC_CHECK=0.
#ifndef NOCTURNE_NETPLAY_SYNC_CHECK
#define NOCTURNE_NETPLAY_SYNC_CHECK 1
#endif

// NOCTURNE_NETPLAY_SIM_TRACE
//   1: every machine writes nocturne_simtrace.log — one line per character per
//      applied sim frame, with position, health, motion state and the AI's
//      victim fields. The two files are diffed offline and the first differing
//      line names the desync's origin: frame, actor, and which field went
//      first. The sync check can only afford to say "this actor's position
//      differs"; this says what decided to move it.
//   0: no trace is written.
//
//   Only writes during a network game in NET_MODE_PLAYING, so single player and
//   the menus cost nothing — but expect a few MB per minute while playing.
//   Turn it off once the desync it is chasing has been found.
//
//   Override with -DNOCTURNE_NETPLAY_SIM_TRACE=0.
#ifndef NOCTURNE_NETPLAY_SIM_TRACE
#define NOCTURNE_NETPLAY_SIM_TRACE 1
#endif

// NOCTURNE_NETPLAY_RNG_TRACE
//   1: every machine writes nocturne_rngtrace.log — one line per sim-stream
//      draw, carrying the frame, the draw's index within it, and the caller's
//      offset from generateRandomValue. Diffed offline against the other
//      machine's, it turns "the guest drew one more number than the host in
//      this frame" into the name of the function that did it. Also enables the
//      LOAD SEED and focus-actor DLOG_EX traces in the netgame and game keeps.
//   0: no trace is written and no attribution is computed.
//
//   Separate from NOCTURNE_AUTHENTIC_RNG on purpose. That flag chooses whether
//   the sim/cosmetic partition exists at all, which is a fix; this one chooses
//   whether the partition is being *watched*, which is a diagnostic. Turning
//   the diagnostics off must never cost a fix, so the two are independent —
//   set this, NOCTURNE_NETPLAY_SIM_TRACE and NOCTURNE_NETPLAY_SYNC_CHECK to 0
//   for a netplay build that keeps every fix and writes no diagnostic files.
//
//   Override with -DNOCTURNE_NETPLAY_RNG_TRACE=0.
#ifndef NOCTURNE_NETPLAY_RNG_TRACE
#define NOCTURNE_NETPLAY_RNG_TRACE 1
#endif
