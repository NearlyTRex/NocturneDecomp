#pragma once

// =============================================================================
// COLD BREATH FOR THE CLASSES THAT ARE NOT THE STRANGER
// =============================================================================
//
// An addition, not a reconstruction. CCharacter::processSmoking puffs breath
// from the "Bip01 head" bone while the character stands idle (state 0) in a
// set whose active camera fog is below 32 degrees. Every CCharacter carries
// its timers, but only three processes call it: CStranger::processFrame,
// CSvetlana::process and CNPC::process. Gabriella, Scat, IcePick, Haystack,
// the Colonel and Moloch stand in the same cold rooms without it.
//
// This calls it for five of those six — Moloch is a demon and does not
// breathe — for the heroes in g_HeroActors only, so a Scat
// or IcePick companion keeps its shipped behaviour. The effect is cosmetic:
// nothing in the simulation reads the smoke pool, and with
// NOCTURNE_AUTHENTIC_RNG off its one random draw (CSmokeParticle::init) goes
// through the effects stream in shims/net/rng.h, so a network game stays in
// lockstep. The Stranger's own breath already depends on each machine's
// camera in the same way.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;

#ifdef __cplusplus
extern "C" {
#endif

// From nocturne_hero_frame (hero_frame.h), once a frame.
void nocturne_hero_breath(struct CHero *hero, float delta_time);

#ifdef __cplusplus
}
#endif
