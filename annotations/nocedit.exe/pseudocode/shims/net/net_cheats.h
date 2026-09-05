#pragma once

// =============================================================================
// NETPLAY — HOST-AUTHORITATIVE CHEATS
// =============================================================================
//
// An addition, and one the shipped game had no need for, because it had no
// cheat menu: the only way to turn a cheat on was to type it, mid-mission, on
// the machine you were sitting at. With Options > CHEATS (see cheats.h) a
// player can arm one before a session starts, and two players arriving with
// different lists is now the ordinary case rather than an impossible one.
//
// WHY IT MATTERS. Netplay here is lockstep: only the seed, the frame delta and
// the inputs cross the wire, and each machine derives everything else by
// simulating from them. Two machines that disagree about god mode do not
// disagree about a cosmetic — one of them stops applying damage the other
// applies, the actor states part, and the desync detector starts reporting a
// divergence with no obvious cause. Armed weapons are worse: the grants create
// actors, so a guest with "All weapons" on and a host without it builds eleven
// actors the host never builds and every actor id after them is shifted.
//
// HOST-AUTHORITATIVE, like the respawn and the mission transition next door.
// The host broadcasts its list; a guest applies the host's states in place of
// its own for the length of the session. Nothing is written to the guest's ini
// — cheats.cpp keeps the override in a separate array — so the player's own
// choices are still there when they leave, and are what they see again in the
// menu. While the override stands, the CHEATS pages show the host's values
// under a "(set by host)" title and the toggles are inert, because a guest
// changing one could only desync the session it is in.
//
// The guest is told once, on the first mission the override covers, with a
// "Cheats set by host" message — otherwise a player who armed god mode and
// finds it off has nothing to explain it.
//
// WHEN IT IS SENT. Twice, because a session has two ways to reach a mission and
// only one of them goes through net_mission:
//
//   CNetGame::runLobby       the host announces before syncPlayers(1), so the
//                            first mission of the session is covered.
//   nocturne_net_mission_*   the host announces again with each transition,
//                            which also re-covers a guest that joined late or
//                            missed the first one.
//
// Like the mission announcement, each send is repeated: a single UDP datagram
// can be dropped, several across two points realistically cannot. A guest that
// never receives one keeps its own list — which is the pre-existing behaviour,
// not a new failure — and the desync detector remains the backstop.
//
// The packet type is 0x14: the shipped protocol's own types stop at
// PACKET_PLAYER_INPUT (0x10), and 0x11, 0x12 and 0x13 are taken by net_sync,
// net_weapon and net_mission.
//
// Every entry point is a no-op outside a network game and when
// NOCTURNE_AUTHENTIC_NETPLAY is 1. Under NOCTURNE_AUTHENTIC_CHEAT_MENU there is
// nothing to synchronise — no menu, no armed cheats — so the announcement
// carries an all-zero list and costs one datagram.

#define NOCTURNE_NET_PACKET_CHEATS 0x14

#ifdef __cplusplus
extern "C" {
#endif

// Host: broadcast the local cheat list to every guest. A no-op on a guest and
// outside a network game. Called from the lobby before syncPlayers(1) and from
// each mission announcement.
void nocturne_net_cheats_announce(void);

// Drops any override so this machine's own list applies again. Called when a
// session ends.
void nocturne_net_cheats_reset(void);

// Feeds one received packet of type NOCTURNE_NET_PACKET_CHEATS to this module.
// Returns nonzero when it was one. Reached from CNetGame::processPacket.
int nocturne_net_cheats_on_packet(const void *packet, int packet_size);

#ifdef __cplusplus
}
#endif
