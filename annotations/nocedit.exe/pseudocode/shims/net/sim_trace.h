#pragma once

// =============================================================================
// NETPLAY — SIM STATE TRACE (offline diff)
// =============================================================================
//
// A diagnostic, not a fix. The desync detector (net_sync.h) says *when* two
// machines parted and *which* actor did it, because that is all a per-frame
// packet can afford to carry. It cannot say which field of that actor went
// first, and that is the question that names the bug: an enemy whose position
// differs has already been diverging for some frames in whatever decided to
// move it.
//
// So instead of widening the packet, both machines write the same trace to
// their own log and the two files are diffed afterwards. Every machine walks
// g_CDemonSetPtr->characters in the same order and prints one line per
// character per applied sim frame, so the two files line up exactly and the
// first differing line is the origin of the desync - frame, actor, and field.
//
// Written from nocturne_net_sync_check, the one point every machine agrees on a
// frame number and has finished every frame before it. That is *before*
// CGame::process runs for that frame, so a line labelled frame N is the state
// the frame-N simulation is about to start from - which is also what the sync
// hashes compare, so the trace and the DESYNC reports agree by construction.
//
// Floats print with %.9g, which round-trips a 32-bit float exactly. A field
// that differs in the last bit therefore shows up as a textual difference; the
// diff is bit-exact, like the hash comparison it exists to explain.
//
// Only runs during a network game in NET_MODE_PLAYING, which bounds the volume
// on its own - nothing is written in single player, the menus, or the lobby.
// Still, expect a few MB per minute. Gated by NOCTURNE_NETPLAY_SIM_TRACE in
// shim_config_netplay.h; turn it off once the desync it is chasing is found.

#ifdef __cplusplus
extern "C" {
#endif

// One block of lines for the given sim frame, into nocturne_simtrace.log, led
// by an "F" header line carrying the frame's RNG and timing fingerprint:
//
//   F <seq> seed=<g_RandomSeedValue> netseed=<the frame seed> draws=<n>
//           process=<CGame::process calls so far> dt=<delta_time>
//
// seed is the one that matters. g_RandomSeedValue is the sim generator's live
// state, and the trace is written before CGame::process re-seeds it, so it is
// the residue of every sim draw the previous frame made - value and count
// together. Two machines that simulated the previous frame identically have the
// same seed here, bit for bit; the first frame whose seed differs is the frame
// whose draws differed, whether that was one extra draw or one different value.
// The draw count alone cannot tell those apart, which is why both are printed.
//
// process counts CGame::process calls, so a machine simulating more frames than
// it applied shows up as a widening gap against the sequence number.
//
// Two kinds of body line follow the header:
//
//   <seq> <slot> <name> pos=... area=... hp=... mstate=... victim=... ...
//       one per character, every frame - the AI state that names a desync.
//
//   <seq> <slot>F fire=<n> bones=<hash> size=<f> burned=<0|1> alpha=<f>
//       after a character's line, only while it is burning.
//   <seq> <slot>W weapon=<x,y,z> orient=<x,y,z>
//       after a CStranger's, CScat's or CGabriella's line, while it holds a
//       weapon.
//
//   <seq> A <index> <name> pos=... area=...
//       one per ACTOR, but only when its position or area changed since this
//       machine last printed it.
//
//   <seq> E cur|pend <event>       a raised event, visible for one frame
//   <seq> E flag+|flag- <name>     a game flag appearing or disappearing
//   <seq> E timer+ <name> <secs>   a timer arriving, with its initial duration
//   <seq> E timer- <name>          a timer expiring
//       the event list, which decides WHEN a scripted thing happens.
//
// The actor lines exist because the character list is not the list the desync
// hash walks. net_sync.cpp hashes g_CDemonSetPtr->actors; the character pass
// covers g_CDemonSetPtr->characters, a subset. A desync confined to
// non-character actors is therefore invisible in the character pass, and can
// sit there for thousands of frames while every traced character stays
// bit-identical. Diff the actor lines by replaying them into a per-index
// timeline; do not compare them positionally, since the two machines emit
// different subsets by construction.
//
// The event lines answer the question the actor lines raised next: a scripted
// spawn that happens on BOTH machines but three sim frames apart is enough to
// part the two worlds, because during those frames one side has an extra actor
// drawing from the sim stream. So the interesting comparison is not "does this
// event differ" but "at which frame did each machine first emit it" - which is
// what scripts/Python/netplay_trace_diff.py reports.
void nocturne_sim_trace_frame(int sequence_number);

// One line per damage event, from the entry of CCharacter::processDamage:
//
//   <seq> D <target> type=<n> amount=<f> hp=<f> from=<slot>(<name>)
//
// The frame and actor pass above say a character stopped existing; they cannot
// say why, because the result of a dismemberment (one character gone, a dozen
// actors created) looks identical whether the hit landed one frame early on one
// machine or landed on only one machine at all. Diff the D lines to tell those
// apart: same target, same type, same amount on both, different <seq>, means a
// phase error in when damage resolves rather than divergent damage.
//
// `hp` is read before the branch, so it is the health the hit was applied to.
//
// Covers CCharacter::processDamage only, which is the base of forty overrides.
// A class that dismembers in its own override is invisible here — see the body
// part probe below, which is the one that cannot be bypassed.
void nocturne_sim_trace_damage(struct CCharacter *target, struct SDamageInfo *info);

// One line per body part, from inside createBodyPart:
//
//   <seq> B <name> pos=<x>,<y>,<z> from=<source actor>
//
// createBodyPart is the single funnel for every dismemberment in the game, so
// unlike the damage probe this sees all of them regardless of which class drove
// it. A dismemberment emits about a dozen of these on one frame, which makes the
// burst itself the thing to compare: the same burst a frame apart on the two
// machines is a phase error in when the dismemberment resolves, and a burst on
// one machine alone is real divergence.
void nocturne_sim_trace_bodypart(struct CDemonActor *part, struct CDemonActor *source);

// Called from CGame::process so the header above can report how many times the
// simulation has actually run, and with what delta time.
void nocturne_sim_trace_note_process(float delta_time);

// Starts a new file. Called when a mission is torn down, so frames from a
// previous session cannot be diffed against this one.
void nocturne_sim_trace_reset(void);

// How many times CGame::process has run since the last reset. Exposed because
// the count is the thing that distinguishes two machines that agree on every
// sim frame but have stepped the world a different number of times — a guest
// one process ahead applies the same sequence numbers with the same seeds and
// still ends up permanently offset in position. Zero when the trace is
// compiled out, so a caller reads "no information", not a wrong number.
int nocturne_sim_trace_process_calls(void);

#ifdef __cplusplus
}
#endif
