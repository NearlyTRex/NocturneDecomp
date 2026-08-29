#pragma once

// =============================================================================
// RANDOM NUMBER FUNNEL
// =============================================================================
//
// An addition, not a reconstruction. The game draws random numbers from two
// unrelated generators, and which one a call site uses decides whether a
// network game stays in sync.
//
//   THE SIM STREAM - g_RandomSeedValue, advanced by generateRandomValue().
//     CGame::process re-seeds it at the top of every sim frame from
//     g_CNetGamePtr->random_seed, which in a network game is the value the host
//     drew for that frame and broadcast in the sim-frame packet
//     (processServerFrame -> applySimFrameHistory). Every machine therefore
//     starts each frame on the same number, and drift cannot accumulate across
//     frames - only draws made *within* one frame can diverge.
//
//   THE LIBC STREAM - rand(), which shims/crt.cpp implements as Watcom's LCG.
//     CNetGame::runLobby srand()s it from the same shared seed before loading
//     the mission, so the two machines do start together. They cannot stay
//     together: the host draws one rand() per sim frame to *produce* the seed
//     it broadcasts, and no guest makes that draw. The streams are one number
//     apart after the first frame and drift freely from there, further with
//     every render-rate-dependent effect that touches them.
//
// So the libc stream is per-machine noise by construction. This is not drift
// that could be plugged - the protocol itself makes the two sides consume
// different counts - and no amount of re-seeding makes rand() safe for
// simulation. The only workable rule is a partition:
//
//   * anything whose result reaches simulation state must draw from the sim
//     stream, and every machine must make the same draws in the same order;
//   * anything cosmetic may draw from libc rand() and is free to differ.
//
// Every rand() call site in the game is routed through one of the four doors
// below so that partition is written down at the call site rather than inferred
// from the function's name. A bare rand() left in game code is then a visible
// defect, and the audit counters here catch the ones that slip through.
//
// Gated by NOCTURNE_AUTHENTIC_RNG in shim_config.h: with it set every call site
// compiles back to the verbatim rand() the binary made, and every entry point
// here collapses to rand() as well.

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// The four doors
// ---------------------------------------------------------------------------

// SIMULATION. The result reaches simulation state, so every machine must draw
// the same number here on the same frame. In a network game this comes off the
// sim stream, masked to 15 bits so it is range-identical to the rand() it
// replaces - call sites take `% 6` and `& 0x3fff` of it and would otherwise
// shift their distribution. Outside a network game it is rand() unchanged, so
// single player keeps the shipped sequence exactly.
unsigned int nocturne_rng_sim(void);

// COSMETIC. The result never reaches simulation state - a texture flip, a
// corona's flicker, which way a spark drifts - so two machines disagreeing
// about it is harmless. Always rand(), identical to what the binary did; the
// call is a declaration that the site has been looked at and found harmless,
// and it keeps the site out of the undeclared-draw audit below.
unsigned int nocturne_rng_fx(void);

// The cosmetic-stream form of getRandomFloatFromRange, for decoration that was
// calling the game's own primitive and so drawing from the sim stream.
//
// The arithmetic is copied verbatim from getRandomFloatFromRange's own
// is_processing == 0 branch, so this is the same expression the game already
// uses whenever it draws a ranged float outside a sim frame.
//
// This exists because of CFlies. Its process() body - random flight points and
// all - is gated on `is_visible`, which CFlies::renderOpaque sets by frustum-
// culling the swarm against *this machine's camera*. In a network game the two
// cameras follow different heroes, so the swarm was on screen for one machine
// and not the other, and whether it drew three simulation randoms per fly point
// came down to where each player was looking. The two machines therefore make a
// different number of draws in the same frame, everything downstream of that
// frame differs, and the worlds drift apart from there.
//
// Flies collide with nothing (getCollisionType returns COLLISION_TYPE_NONE) and
// nothing reads their positions back, so the fix is not to make the swarm
// simulate in lockstep - it is to stop decoration drawing from the simulation's
// stream at all. Then it does not matter that it runs on one machine and not
// the other.
float nocturne_rng_fx_range(float min_value, float max_value);

// The cosmetic-stream form of randomChance, same arithmetic as that function's
// own is_processing == 0 branch. For "should this effect spawn" coin flips
// whose only outcome is something to look at.
int nocturne_rng_fx_chance(float probability_threshold);

// The cosmetic-stream form of getRandomInt, clamping quirk and all. For picking
// which decal texture or particle variant to draw.
int nocturne_rng_fx_int(int min_value, int max_value);

// OFF-FRAME. The `is_processing == 0` fallback inside the game's own RNG
// primitives (randomChance, getRandomFloat, getRandomFloatFromRange,
// getRandomInt). Those functions serve the sim stream while a sim frame is
// running and quietly fall back to rand() outside one - so a simulation
// decision made outside CGame::process lands on the per-machine stream without
// anything saying so. Always rand(), because there is no better answer at that
// point: the sim stream is not authoritative outside the frame. Counted and
// reported once per session in a network game, since arriving here at all is a
// desync source worth naming.
unsigned int nocturne_rng_offframe(void);

// SEED SOURCE. Produces the number the sim stream will then run on, at the
// three places that hand it over: CGame::process and CNetGame::processServerFrame
// picking a seed when there is no network game, and - the important one - the
// host drawing the seed it broadcasts in each sim-frame packet. Always rand(),
// and per-machine on purpose: outside a network game nothing has to agree, and
// inside one the host's draw is authoritative precisely because only the host
// makes it. (That asymmetry is also why the libc stream can never be
// deterministic in netplay: the host consumes one draw per frame here that no
// guest makes.)
unsigned int nocturne_rng_seed(void);

// THE GAME'S OWN PRIMITIVES, on their in-frame branch. randomChance,
// getRandomFloat, getRandomFloatFromRange and getRandomInt call
// generateRandomValue directly while a sim frame is running - the sim stream,
// and the right stream, so this changes nothing about which numbers come out.
// It exists to make the draws *countable and attributable*: pass
// __builtin_return_address(0) so the audit records which call site pulled each
// number.
//
// This is what turns "the guest drew 14 more times than the host in frame 2"
// into "and here is the function that did it". The frame fingerprint in
// sim_trace.h can only ever give the count.
unsigned int nocturne_rng_game(void *caller);

// ---------------------------------------------------------------------------
// Audit
// ---------------------------------------------------------------------------

// Sim-stream draws since the last nocturne_rng_frame_reset(). Reported in the
// desync packet (net_sync.h): two machines that made a different number of
// draws in the same frame have diverged, and the count says so a frame after it
// happens rather than whenever someone notices the world is wrong.
unsigned int nocturne_rng_sim_draws(void);

// Bare rand() calls - not through any of the doors above - made while a sim
// frame was running. Anything counted here is game code still drawing
// simulation-relevant randomness off the per-machine stream, or a cosmetic site
// that has not been marked yet. Should be zero.
unsigned int nocturne_rng_undeclared_draws(void);

// Latches the per-frame counters and starts the next frame's, told which frame
// is beginning so the per-draw log can bound itself to the opening frames.
// Called from nocturne_net_sync_check, which runs at the one point every
// machine agrees on a frame number.
void nocturne_rng_frame_reset(int sequence_number);

// Drops all counters. Called when a mission is torn down.
void nocturne_rng_reset(void);

// Called by crt.cpp's rand() on every draw, so the audit sees the ones that did
// not come through a door. rand() reports unconditionally and this decides what
// counts - which keeps crt.cpp free of game types and means a call site added
// later is caught without anyone remembering to instrument it.
void nocturne_rng_note_raw_draw(void);

#ifdef __cplusplus
}
#endif
