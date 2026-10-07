#pragma once

// =============================================================================
// WHICH HEROES ARE PLAYERS
// =============================================================================
//
// The player heroes are g_HeroActors[0..g_HeroCount): one in single player,
// one per player in a network game. The AI companions (CSvetlana, CScat,
// CIcePick) derive from CHero too, so a class test cannot tell them apart;
// membership here can. The set and its order are the same on every machine,
// so a decision keyed on it stays in lockstep — unlike control_type or
// g_LocalHeroIndex, which differ per machine.

// The length of g_HeroActors. Per-hero state in the shims is indexed by slot.
#define NOCTURNE_HERO_SLOTS 4

struct CHero;

#ifdef __cplusplus
extern "C" {
#endif

// This machine's hero, g_HeroActors[g_LocalHeroIndex], or null when the index
// is out of range. The pointer can be stale between missions —
// CDemonMission::removeAllActors zeroes g_HeroCount without clearing the
// array — so a caller that can run then checks g_HeroCount as well.
struct CHero *nocturne_hero_local(void);

// `actor`'s index in g_HeroActors, or -1 for null and anyone else.
int nocturne_hero_slot(const void *actor);

// 1 when `actor` is a player hero.
int nocturne_hero_is_player(const void *actor);

#ifdef __cplusplus
}
#endif
