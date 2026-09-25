#pragma once

// =============================================================================
// NETPLAY — GUEST BUTTON PRESSES DELIVERED EXACTLY ONCE
// =============================================================================
//
// A fix to the shipped protocol, not a reconstruction.
//
// Four SPlayerActionState fields are pulses: CGame::processKeyboardControls
// sets use_item, light, draw and jump to 1 only on the frame the key changes,
// and the hero code acts on every frame that sees a 1 — CStranger::processFrame
// flips guns_drawn each time draw is set.
//
// A guest's input reaches the host inside CNetGame::sendSimFrameAck, one sample
// per frame the guest applies. The host keeps only the latest sample per player
// and copies it into every sim frame it builds (CNetGame::processServerFrame),
// at the host's own frame rate, until the next sample arrives. The two rates
// never line up exactly, so a guest's pulse either lands in two or more host
// frames (a draw that toggles twice: on, then straight back off) or is
// overwritten by the next sample before any frame is built (a press that never
// happens). Fire, walk and run hold their value while the key is held and are
// unaffected. The host's own input is sampled once per frame it builds and is
// unaffected too.
//
// So a guest sends a running count of presses per pulse field instead of the
// pulse, and the host turns each increase into exactly one pulse, in the next
// sim frame it builds. A count survives a dropped or repeated ack, where a
// pulse does not.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call sites.

struct SPlayerInput;

#ifdef __cplusplus
extern "C" {
#endif

// Guest: counts the pulses in the sample CGame::playerControls just wrote.
// Called once per sample. Does nothing unless this machine is a network guest.
void nocturne_net_input_note_local(const struct SPlayerInput *controls);

// Guest: replaces the pulse fields of an outgoing ack with the running counts.
void nocturne_net_input_encode(struct SPlayerInput *outgoing);

// Host: turns the counts in `input`, the latest sample from `player`, into
// pulses for one sim frame. At most one pulse per field per frame; further
// presses are delivered in the frames that follow.
void nocturne_net_input_decode(int player, struct SPlayerInput *input);

// Drops all counts. Called on entry to the lobby, on both sides.
void nocturne_net_input_reset(void);

#ifdef __cplusplus
}
#endif
