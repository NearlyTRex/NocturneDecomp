#pragma once

// =============================================================================
// NETPLAY — SYNCHRONISED WEAPON / ITEM SELECTION
// =============================================================================
//
// An addition, not a reconstruction, and it fixes a real desync rather than a
// decompilation artifact.
//
// CGame::processKeyboardControls handles movement and fire by writing into
// player_control->action_state, which is the struct the sim-frame packet
// carries, so both machines simulate both heroes from the same inputs. Twenty
// lines further down it handles the weapon and item keys completely
// differently: it calls CInventory::selectWeapon / selectItem /
// cycleWeaponOfSameClass straight on g_HeroActors[g_LocalHeroIndex]->inventory,
// at keyboard-poll time, outside the simulation and outside the protocol.
//
// In single player that is invisible. In a network game each machine switches
// only its OWN hero and keeps a stale weapon for the remote one, and nothing
// ever corrects it: the protocol carries seed, delta time and inputs, and
// nothing else. It stays quiet until the remote hero fires — then the two
// machines run different weapon code on the same shot: one draws
// CGun::getDamage and CGun::fire while the other draws CCrossbow::getDamage,
// for the same shot at the same target. The damage differs, so the target dies
// by gunfire on one machine and is staked on the other, and everything
// downstream of that diverges.
//
// A selection is an input, so it has to travel like one. There is no room left
// in the input struct — SPlayerActionState is eight ints with no spare, and
// SSimFrame is exactly its 100 bytes — so this follows the net_respawn.h
// pattern instead: broadcast the selection as an absolute change stamped with
// the sim frame every machine should apply it on, and apply it there. Same
// frame, same hero, same result, on every machine.
//
// COST: the local player's own switch is delayed to the scheduled frame like
// everyone else's, because applying it early on the machine that pressed the
// key is exactly the divergence being fixed. That is NOCTURNE_NET_WEAPON_LEAD
// frames of input lag on weapon changes in a network game (single player is
// untouched and immediate). The lead has to cover the host's run-ahead over a
// guest, which processServerFrame caps at five frames, plus one round trip.
//
// UNLIKE THE RESPAWN, EITHER SIDE MAY ORIGINATE ONE. The respawn is a host
// action broadcast downward; here each player switches their own weapon, so
// packets travel in both directions and the dispatch must accept them from any
// peer, not just the server. Requests carry (origin, serial) so a re-broadcast
// is idempotent — the transport is UDP and the shipped protocol has no acks for
// anything but sim frames.

// Packet type. ENetPacketType runs to 0x10 in the shipped game and net_sync.h
// claimed 0x11, so this is the next free value.
#define NOCTURNE_NET_PACKET_WEAPON 0x12

#ifdef __cplusplus
extern "C" {
#endif

// Which selection call a request stands for. The values go on the wire, so
// they are fixed.
#define NOCTURNE_NET_WEAPON_SELECT 0   // CInventory::selectWeapon(category, dir)
#define NOCTURNE_NET_WEAPON_ITEM   1   // CInventory::selectItem(dir)
#define NOCTURNE_NET_WEAPON_AMMO   2   // CInventory::cycleWeaponOfSameClass(dir)

// The local player pressed a weapon/item key. Outside a network game this
// applies the selection immediately and behaves exactly as the shipped code
// did. Inside one it schedules and broadcasts the request instead, and the
// selection lands on every machine — this one included — on the same sim frame.
//
// Called from CGame::processKeyboardControls in place of the direct
// CInventory:: calls.
void nocturne_net_weapon_request(int action, int category, int direction);

// The shipped behaviour on its own: apply the selection to the local hero, now.
// Exists so the keep can hold both paths under one gate and select between two
// callables, rather than repeating #if/#else around each of its ten keys.
void nocturne_net_weapon_apply_local(int action, int category, int direction);

// Feeds one received packet of type NOCTURNE_NET_PACKET_WEAPON to this module.
// Returns 1 if it was a weapon-selection packet and has been consumed.
int nocturne_net_weapon_on_packet(const void *packet, int packet_size);

// Called once per applied sim frame on every machine, from
// CNetGame::applySimFrameHistory — the one point every machine agrees on a
// frame number. Applies every request scheduled for this frame or earlier, and
// re-broadcasts the ones this machine originated that are still in the future.
void nocturne_net_weapon_apply_if_due(int sequence_number);

// Drops every pending request and resets the de-duplication state. Called when
// a mission is torn down, so a selection scheduled in the previous session can
// never land in this one.
void nocturne_net_weapon_reset(void);

#ifdef __cplusplus
}
#endif
