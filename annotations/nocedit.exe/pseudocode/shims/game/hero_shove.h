#pragma once

// =============================================================================
// SHOVING AN ENEMY AWAY FROM A HERO
// =============================================================================
//
// An addition. A hit that throws an enemy back: the target slides `distance`
// straight away from the hero, eased out over a quarter second, through
// CCharacter::moveAndCollide so it stops at walls and keeps its area right.
// Used by Gabriella's kick (hero_gabriella.h) and the Colonel's push-off
// (hero_colonel.h).
//
// Shoves are stepped from their owner's process, so they advance on the same
// frame on every machine of a network game. A shove whose owner is no longer
// a player hero, or whose target has left the set, is dropped.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;
struct CCharacter;

#ifdef __cplusplus
extern "C" {
#endif

// Starts pushing `target` `distance` units away from `owner`, level.
void nocturne_hero_shove_start(struct CHero *owner, struct CCharacter *target, float distance);

// Once per frame from the owner's process: advances that owner's shoves.
void nocturne_hero_shove_step(struct CHero *owner, float delta_time);

#ifdef __cplusplus
}
#endif
