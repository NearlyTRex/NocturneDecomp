#pragma once

// =============================================================================
// NETPLAY — HOST-SCHEDULED SAFE RESPAWN
// =============================================================================
//
// An addition, not a reconstruction. The shipped game gives a network session
// exactly one spawn point — every mission ships a single CHeroPlaceholder — and
// it has to be used before anything is ready: CDemonMission::createHeros runs
// ahead of loadSet, so there is no collision geometry to stand on and no camera
// to be visible to. Any placement decided there is a guess, and a guess is what
// dropped guests through ledges.
//
// So guests are not placed there at all. createOneHero creates the hero with a
// negative location.area_id, which holds it out of the world (see below), and
// the host brings it in from the pause menu once it has walked somewhere worth
// spawning into — by which time the set and camera are live and the spot can
// actually be vetted.
//
// This adds a host-only pause-menu action that picks a spot that is
//   - standing on real ground (the collision query returns a height, not NaN),
//   - level with the host's own footing, so nobody is dropped down a shaft,
//   - inside the current static camera's frustum, scored towards the middle of
//     frame so the player lands where the camera is actually aimed,
//   - clear of the other heroes,
// and falls back to the mission's authored placeholder spot — the one position
// a designer signed off on — when no candidate qualifies.
//
// The same action doubles as an arcade continue: a hero that is dead when the
// respawn lands is revived on the spot. A dead hero is never destroyed —
// CCharacter::getDeathState just reads the motion controller's state name — so
// restoring hit_points and jumping the motion back out of DEAD is the entire
// revive. One button therefore covers both "bring my friend in" and "pick my
// friend back up", and neither needs a rejoin, which the lockstep protocol
// could not support anyway (see below).
//
// HOLDING A HERO OUT OF THE WORLD
//
// CDemonMission::buildActiveSetActorList admits an actor to the set only when
// its location.area_id equals the mission's current_set_index, so a negative
// area means not rendered, not processed, not collidable — while the hero still
// sits on the mission's actor list, where teardown frees it like anything else.
// It cannot simply be left uncreated: applySimFrameHistory dereferences
// g_HeroActors[i] for every connected player on every frame.
//
// Giving it a real area is therefore what admits it, and the apply below
// rebuilds the active set when it does. A guest whose hero is still held reads
// as ALIVE (nothing has touched its motion state), so the game code treats
// "held" as a second waiting state alongside "down".
//
// WHY IT IS SCHEDULED RATHER THAN APPLIED
//
// The netcode is deterministic lockstep: CNetGame::applySimFrameHistory
// distributes only the random seed, the delta-time and the players' inputs,
// and each machine simulates every hero locally. No position is ever sent, and
// nothing reconciles a disagreement. Moving a hero on one machine alone would
// therefore desync the session permanently.
//
// So the host broadcasts the chosen positions tagged with a sim-frame number a
// little ahead of the current one, and every machine — the host included —
// applies those absolute positions when its simulation reaches that frame, out
// of the one hook both the server and client frame paths share. The packet is
// re-sent every frame until it is due, because the transport is UDP and a lost
// respawn would be a desync rather than a dropped update.
//
// Uses PACKET_UNUSED (0xE), the gap the shipped protocol never assigned.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY in shim_config.h: with authentic netplay
// on, every entry point here compiles to nothing.

#ifdef __cplusplus
extern "C" {
#endif

// Records a mission's hero-placeholder spot as the known-safe fallback.
// Called from CDemonMission::createOneHero, which is the last moment the
// placeholder exists — createHeros deletes every one of them immediately
// afterwards. Only the first spot of a mission is kept.
void nocturne_net_respawn_note_placeholder(float x, float y, float z, int area_id);

// Forgets the recorded placeholder. Called when a mission is torn down so a
// stale spot from the previous map can never be used.
void nocturne_net_respawn_clear_placeholder(void);

// 1 when the pause menu should offer the respawn item: a host, in a running
// network game, with at least one other player.
int nocturne_net_respawn_available(void);

// The area_id whose set should be loaded: the local hero's, or — while that
// hero is still held out of the world and carries no real area — the first
// hero that has one.
//
// CDemonMission::run and ::startMission both pick the set straight off
// g_HeroActors[g_LocalHeroIndex], and loadSet indexes set_names[] with it
// unchecked, so a held guest would read set_names[-1] and come up with no set
// and no cameras at all.
int nocturne_net_respawn_world_area(void);

// Host action. Chooses the spots, schedules them, and broadcasts. Returns 1 if
// a respawn was scheduled, 0 if the request could not be honoured.
int nocturne_net_respawn_request(void);

// Feeds one received PACKET_UNUSED to this module. Returns 1 if it was a
// respawn packet and has been consumed.
int nocturne_net_respawn_on_packet(const void *packet, int packet_size);

// Called once per applied sim frame on every machine, from
// CNetGame::applySimFrameHistory. Re-broadcasts a pending respawn while it is
// still in the future, and applies it on the frame it was scheduled for.
void nocturne_net_respawn_apply_if_due(int sequence_number);

#ifdef __cplusplus
}
#endif
