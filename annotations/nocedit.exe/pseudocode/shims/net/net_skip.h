#pragma once

// =============================================================================
// NETPLAY — AGREED CINEMATIC SKIP
// =============================================================================
//
// An addition, not a reconstruction. The shipped game can skip a cinematic, but
// only from the full pause menu, and CGame::runGameSession never builds that
// menu in a network game: the ESC handler branches on connection_type first and
// a host or client gets the small "abort / leave" dialog instead. So the
// "Skip cinematic." item — and with it every way to skip — exists in single
// player alone.
//
// The skip is offered in the same place here: an entry in the abort/leave dialog,
// in both the host and the client branch, which is where a network game's Escape
// key already goes. That dialog is driven a frame at a time through
// CPickList::handleDialogInput rather than the blocking
// displayChoicesAndWaitForInput the single-player menu uses, so the simulation
// keeps running underneath it and lockstep is never stalled by one player reading
// their own menu.
//
// WHAT A SKIP ACTUALLY IS. The menu item runs two different mechanisms behind
// one action, and which one it gets depends on the script:
//
//   CScript::skipCinematic returns 1 when the cinematic declared a target with
//   the setSkipLabel command. It jumps next_cmd to that label and steps the
//   script at a fixed dt of 0.25 until letterBox clears. Nothing renders and
//   nothing simulates; only the script's own command stream advances.
//
//   It returns 0 when there is no label, and the caller then sets
//   CGame::cinematic_skip_in_progress, which puts CGame::processFrame on its
//   fast-forward branch: no render, slamDT(0.25), but processClientFrame and
//   processServerFrame still run, so sim frames keep flowing.
//
// Both are ordinary lockstep state changes, so both desync permanently if one
// machine makes them alone.
//
// TWO VOTES AND ONE COMMIT. A skip needs every player to ask for it, which
// makes the request bidirectional; it also needs every machine to act on the
// same sim frame, which one machine has to decide. So the two halves travel as
// separate packets. A vote carries one player's current answer and is accepted
// from any peer. The commit names the frame and is issued by the host alone,
// exactly like the respawn next door.
//
// A vote is a LEVEL, not an edge: it carries whether that player wants to skip
// right now, and every machine broadcasts its own answer every frame for the
// length of a skippable cinematic. That is what makes selecting the entry a
// second time able to withdraw the request — a withdrawal is just the same packet
// carrying zero — and it costs nothing in reliability, since state re-sent every
// frame heals a dropped or reordered datagram without acks or serials. The
// commit is re-sent the same way while it is still in the future, because the
// transport is UDP and a lost commit on the jump path would be a desync rather
// than a dropped update.
//
// The withdrawal window closes when the last player agrees: the host commits on
// the frame it sees every answer set, and a commit already scheduled is not
// recalled. So the answer that completes the agreement is the confirmation, and
// only a player still waiting on someone else can take theirs back.
//
// WHY is_processing IS RAISED OVER THE SKIP. CScript::step reaches randomness
// in exactly one command — dismember, with a spread above zero, drawing twice
// from getRandomFloatFromRange. That function picks its generator from
// CGame::is_processing: set, it draws from the seed every machine shares; clear,
// it falls through to libc rand(), which is per-machine noise by construction
// (the host draws one rand() per sim frame that no guest makes). The apply below
// runs from CNetGame::applySimFrameHistory, outside CGame::process, where the
// flag is clear — so it raises the flag for the length of the skip and puts it
// back. Drawing there cannot accumulate drift: CGame::process re-seeds the sim
// generator from the distributed random_seed at the top of the very next sim
// window.
//
// A cinematic is identified by CScript::saved_cmd_index, the label index
// setSkipLabel wrote, and both packets carry it. A machine drops either one
// unless it is itself letterboxed on that same label, so a vote can only ever
// commit the cinematic it was cast for. The table is cleared whenever letterbox
// mode drops, which covers consecutive cinematics that both declare no label
// and therefore share the index -1.
//
// Single player is untouched: every entry point returns immediately outside a
// network game, and the pause menu keeps its own item.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY in shim_config_authentic.h: with authentic
// netplay on, every entry point here compiles to nothing.

// The packet types. The shipped protocol's own types stop at
// PACKET_PLAYER_INPUT (0x10), and 0x11 to 0x15 are taken by net_sync,
// net_weapon, net_mission, net_cheats and net_respawn.
#define NOCTURNE_NET_PACKET_SKIP_VOTE   0x16
#define NOCTURNE_NET_PACKET_SKIP_COMMIT 0x17

#ifdef __cplusplus
extern "C" {
#endif

// Keeps this machine's answer and any pending commit on the wire, and — on the
// host — issues the commit once every player has agreed. Called once per frame
// from CGame::processHotkeys, which is already inside that function's "no modal
// dialog, no skip in progress" guard.
//
// It reads no control of its own. The vote is cast from the network pause menu
// instead, through the three entry points below: the shipped game's own way to
// skip is a pause-menu item, and a menu entry needs no binding, collides with no
// gameplay action, and reads the same on a keyboard as on a pad. See
// nocturne_net_skip_vote_available.
void nocturne_net_skip_poll(void);

// The network pause menu's skip entry. CGame::runGameSession offers it in both
// the host and the client branch of the Escape dialog — a commit needs every
// player's answer, so every player needs somewhere to give one.
//
// Available only while this machine is in a skippable cinematic and the host has
// not already scheduled the skip: once the frame is set the other machines are
// counting on it, so the answer can no longer be taken back.
//
// The label reflects what selecting it would do, because the entry is a toggle
// and the dialog closes behind it: asking, then reopening the menu, offers the
// withdrawal. The string is returned untranslated, for the caller to pass
// through getLocalizedString like the entries around it.
int         nocturne_net_skip_vote_available(void);
const char *nocturne_net_skip_vote_label(void);
void        nocturne_net_skip_toggle_vote(void);

// Feeds one received packet to this module. Returns 1 when it was one of ours
// and has been consumed. Reached from CNetGame::processPacket.
int nocturne_net_skip_on_vote(const void *packet, int packet_size);
int nocturne_net_skip_on_commit(const void *packet, int packet_size);

// Called once per applied sim frame on every machine, from
// CNetGame::applySimFrameHistory — the one point every machine agrees on a
// frame number. Runs the skip on the frame the commit named.
void nocturne_net_skip_apply_if_due(int sequence_number);

// Drops the votes and any pending commit. Called when a mission is torn down,
// so a skip raised in the previous session can never land in this one.
void nocturne_net_skip_reset(void);

#ifdef __cplusplus
}
#endif
