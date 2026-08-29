#pragma once

// =============================================================================
// NETPLAY — DESYNC DETECTOR
// =============================================================================
//
// An addition, not a reconstruction. The netcode is deterministic lockstep: the
// host sends only a seed, a delta-time and the players' inputs, and every
// machine simulates the whole world from them. That is correct exactly as long
// as the simulation code is deterministic — and it is not, in the places where
// it reads g_LocalHeroIndex, a value that legitimately differs per machine.
// Enemy AI walking toward "the local hero" chases hero 0 on the host and hero 1
// on a guest, and from there the two worlds drift apart silently.
//
// Silently is the problem. Nothing in the protocol ever compares state, so a
// desync shows up minutes later as a player standing somewhere the other
// machine says they are not, with no way to tell when it started or what broke.
//
// This adds the missing alarm. On each applied sim frame the host broadcasts
// what its world looks like at that frame — every hero's position, and a hash
// over the active set's actors — and each guest compares against its own. A
// mismatch is logged with the frame number and the actual coordinates from both
// sides, so a desync names itself the moment it happens.
//
// It reports; it does not correct. Snapping positions from these packets would
// hide the drift without fixing it: heroes would agree while the enemies that
// diverged stayed wrong, which plays worse than leaving both visible. The fix
// for a reported desync is always to remove whatever read per-machine state
// inside the simulation.
//
// The two tiers are reported separately on purpose. "Heroes match, actors do
// not" is the signature of enemy AI divergence; "heroes differ" points at
// something that moved a hero per-machine (a teleport, a script command). The
// actor count alone is often the loudest signal — the two machines disagreeing
// about how many things exist.
//
// Uses packet type 0x11, one past the shipped protocol's last assigned value.
//
// Gated by NOCTURNE_NETPLAY_SYNC_CHECK in shim_config.h, and by
// NOCTURNE_AUTHENTIC_NETPLAY — with authentic netplay on, every entry point
// here compiles to nothing.

// One past PACKET_PLAYER_INPUT (0x10), the last type the shipped game assigns.
// Declared here rather than added to ENetPacketType, which is generated from
// Ghidra and is not ours to extend.
#define NOCTURNE_NET_PACKET_SYNC_CHECK 0x11

#ifdef __cplusplus
extern "C" {
#endif

// Called once per applied sim frame on every machine, from
// CNetGame::applySimFrameHistory — the one point the host and every client
// agree on a frame number, and where each has finished every frame before it.
// The host broadcasts its state; a guest compares against the host's for the
// same frame and logs any mismatch.
void nocturne_net_sync_check(int sequence_number);

// Feeds one received packet of type NOCTURNE_NET_PACKET_SYNC_CHECK to this
// module. Returns 1 if it was one and has been consumed.
int nocturne_net_sync_on_packet(const void *packet, int packet_size);

// Drops the recorded history. Called when a mission is torn down so frame
// numbers from a previous session can never be compared against this one.
void nocturne_net_sync_reset(void);

#ifdef __cplusplus
}
#endif
