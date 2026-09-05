#pragma once

// =============================================================================
// NETPLAY — MISSION TRANSITIONS
// =============================================================================
//
// An addition, not a reconstruction. Nocturne's storyline is a chain of
// missions: a script command calls CDemonMission::setMissionName and raises
// mission_ended, CGame::runGameSession returns 1, and CDemonMission::run's
// loop tears the mission down and loads whatever is in g_PendingMissionName.
// That is how the game moves from one chapter to the next, and none of it was
// ever asked to work with a second machine attached.
//
// The lobby is careful about exactly this and shows what the transition is
// missing. CNetGame::runLobby brackets its own mission start with
// syncPlayers(1) and syncPlayers(2), and between them it calls
// srand(random_seed) and setRandomSeed(random_seed) on host and guest alike -
// a barrier so neither machine starts simulating before the other has loaded,
// and a shared seed so they draw the same numbers when they do.
// CDemonMission::run's transition has neither. It loads on whatever libc rand
// state each machine happens to have drifted to, with no rendezvous at all.
//
// WHAT THAT LOOKS LIKE. The host finishes a chapter and moves on; the guest is
// left standing in a mission the host is no longer playing, its heroes falling
// out of a world nothing is simulating any more. There is no packet for a
// mission change - ENetPacketType stops at PACKET_PLAYER_INPUT - so the guest
// is never told, and the desync detector reports two machines in different
// missions frame after frame because they are.
//
// HOST-AUTHORITATIVE, like the respawn. In a lockstep simulation both machines
// run CScript::step and both should reach the same command on the same frame,
// so ordinarily both raise mission_ended by themselves. This does not rely
// on that: the host announces the mission it is moving to and the guest follows
// the announcement, so a transition still lands if only the host's script fired
// - which is exactly the case a trigger the guest's hero did not touch
// produces. The announcement carries the seed, so the new mission starts from
// the same RNG state on both machines the way the lobby's does.
//
// The sequence, run from CDemonMission::run on both machines:
//
//   resolve   host announces, or guest adopts the announced name and seed
//   begin     reset the sync stages, syncPlayers(1), seed both generators
//   (load, createHeros, startMission — the game's own, unchanged)
//   finish    syncPlayers(2)
//
// The stage numbers are reused rather than counted up: g_RemoteSyncStage and
// players[].local_sync_stage only ever increase, and CNetGame::syncPlayers
// returns immediately on a client for any stage above 3, so a second mission
// has to start from a cleared table. Both machines clear their own in begin(),
// and the host re-sends its stage request every 0.1 seconds while it waits, so
// a guest that clears late is picked up on the next pass.
//
// The per-machine "Press any key to continue..." between missions is dropped in
// a network game. Two players pressing a key whenever they feel like it is not
// a rendezvous; syncPlayers is, and it is already on screen saying so.

struct CVector3f;

// The packet type. 0x11 and 0x12 are taken by net_sync and net_weapon; the
// shipped protocol's own types stop at PACKET_PLAYER_INPUT (0x10).
#define NOCTURNE_NET_PACKET_MISSION 0x13

// Mission filenames are "castle1.msn" and the like. g_PendingMissionName is
// sized far larger, but nothing that fits in a .msn directory listing comes
// close to this.
#define NOCTURNE_NET_MISSION_NAME_MAX 64

#ifdef __cplusplus
extern "C" {
#endif

// Nonzero when the host has announced a mission change this machine has not
// acted on yet. CGame::runGameSession polls this so a guest leaves its session
// even when its own script never raised mission_ended.
int nocturne_net_mission_pending(void);

// Settles which mission both machines are about to load, and writes it into
// `name`.
//
// On the host: announces `name` with a fresh seed and broadcasts it.
// On a guest: overwrites `name` with the announced one when there is an
// announcement, and leaves it alone when there is not.
//
// A no-op outside a network game, so single player keeps its own name.
void nocturne_net_mission_resolve(char *name, int name_size);

// The rendezvous before the load: clears the sync table, waits for every
// machine at syncPlayers(1), and seeds both generators from the announced
// seed. A guest that somehow has no announcement waits a few seconds for one
// rather than loading against an unknown seed.
//
// Returns 1 when every machine is ready, and 0 when the player pressed ESC or
// no announcement arrived — in which case the caller must abandon the session
// rather than load. Returns 1 immediately outside a network game.
int nocturne_net_mission_begin(void);

// The rendezvous after startMission: syncPlayers(2), so neither machine
// simulates a frame of the new mission before the other has it built. Same
// return convention as begin().
int nocturne_net_mission_finish(void);

// Nonzero when the between-missions "Press any key to continue..." should be
// skipped, which is whenever this is a network game.
int nocturne_net_mission_skip_prompt(void);

// Feeds one received packet of type NOCTURNE_NET_PACKET_MISSION to this
// module. Returns nonzero when it was one. Reached from
// CNetGame::processPacket.
int nocturne_net_mission_on_packet(const void *packet, int packet_size);

#ifdef __cplusplus
}
#endif
