#pragma once

// =============================================================================
// NETPLAY — DETERMINISTIC HERO SELECTION FOR SIMULATION CODE
// =============================================================================
//
// An addition, not a reconstruction. Roughly thirty simulation functions ask
// "where is the player?" by reading g_HeroActors[g_LocalHeroIndex] — enemy AI
// choosing something to chase, companion AI choosing someone to follow. In
// single player that is exactly right: there is one hero and one machine.
//
// In a network game it is a determinism break, and the worst kind, because
// g_LocalHeroIndex is *supposed* to differ per machine. The host's enemies
// chase hero 0 while a guest's chase hero 1, so every AI actor walks somewhere
// different on each machine and the two worlds part immediately. It parts them
// long before a guest has even entered the world, since the divergence has
// nothing to do with the guest and everything to do with who each machine
// thinks "the player" is.
//
// The replacement has to answer the same question identically on every machine
// while still being good co-op behaviour. Nearest hero does both: every machine
// has every hero's position as lockstep state, so "nearest" is computed from
// data all of them agree on, and an enemy chasing whoever is closest is what
// the AI was trying to express in the first place.
//
// Heroes not in the world are skipped — a guest the host has not brought in yet
// carries area_id -1 (see CDemonMission::createOneHero) and must not be a
// target, or the guest's AI would keep chasing it and the whole exercise would
// be pointless. During that period both machines see exactly one candidate and
// therefore agree.
//
// Outside a network game these return g_HeroActors[g_LocalHeroIndex] unchanged,
// so single player keeps the shipped behaviour byte for byte.

// Declared with forward references so this can be reached through
// shim_config.h, which nocturne.h includes long before the real types exist.
struct CHero;
struct CVector3f;
struct CDemonActor;

#ifdef __cplusplus
extern "C" {
#endif

// The form every AI call site uses. CDemonActor sits at offset 0 of every
// class in these chains (CGhoul -> CEnemy -> CCharacter -> CDemonActor,
// CSvetlana -> CHero -> CCharacter -> CDemonActor, ...), so
// `(CDemonActor *)this_ptr` is valid in all of them and one expression covers
// the whole sweep. Measures from the actor's own position.
struct CHero *nocturne_net_sim_target_for(struct CDemonActor *self);

// The hero an AI actor at `from` should treat as "the player": the nearest one
// that is actually in the world. Never returns a hero held out of the world.
// Falls back to the first in-world hero, then to the local hero, so it never
// returns null where the shipped code would have had an actor.
struct CHero *nocturne_net_sim_target_hero(const struct CVector3f *from);

// The party leader: the first hero in the world, which is the host's.
// Deterministic for the same reason — every machine walks g_HeroActors in the
// same order.
//
// This is what COMPANION AI follows, and the split from nearest is deliberate.
// Nearest is right for an enemy but self-reinforcing for a follower: a
// companion closes to within its stop distance and is then itself nearest to
// that hero, so only someone coming closer still could take over — in practice
// it would never adopt the guest at all. Following hero 0 is stable and
// predictable, and a guest that wants the companion's help can walk to it.
//
// Also the right answer wherever there is no position to measure from.
struct CHero *nocturne_net_sim_leader_hero(void);

// "AM I THE PLAYER?" — the other shape of the same break
//
// The calls above answer "where is the player?". A second, smaller family asks
// "am I the player?" — a hero subclass testing `this == g_HeroActors[
// g_LocalHeroIndex]` in its setup and, if so, writing its own simulation state.
// CIcePick::setup does exactly this, widening its collision cylinder from the
// 0.9 CHero::ctor set to 1.5.
//
// In single player that is every hero there is. In a network game it is true on
// exactly one machine, so the same actor ends up with two different collision
// radii, collision resolves differently on each, and the lockstep simulation
// parts the first time anything pushes that hero.
//
// Rather than find and patch each subclass, the identity test is made to answer
// correctly at its one chokepoint. CDemonMission::prepareAllActors dispatches
// setup for every actor in a single loop, so while it is setting up hero i,
// g_LocalHeroIndex is set to i. Every such test then sees "yes, this is the
// hero being set up" on every machine, and every hero gets the state the
// shipped code gave only to one.
//
// Deterministic because the substituted value is the hero's own index, which
// every machine agrees on. Safe because nothing else in the hero setup chain
// reads g_LocalHeroIndex or g_HeroActors — CDemonActor::setup and CHero::setup
// touch neither, and a subclass that asks is asking exactly the question this
// is answering. A non-hero actor's setup is left completely alone, so
// CEmitter::setup and CMimic::setup still see the true local hero.
//
// This covers setup only. A subclass making the same test from ::process would
// need the same treatment at that call site; IcePick makes it nowhere else.

// Substitutes the local-hero index for the duration of one actor's setup, if
// that actor is one of the heroes. Returns the previous g_LocalHeroIndex to
// hand back to nocturne_net_sim_end_hero_setup. Outside a network game, and for
// any actor that is not a hero, this changes nothing and the paired call is
// equally inert.
int nocturne_net_sim_begin_hero_setup(struct CDemonActor *actor);

// Restores what the paired begin returned.
void nocturne_net_sim_end_hero_setup(int saved_local_hero_index);

// Simulation code must not call rand() directly either — that is the other half
// of the same problem, and it lives in rng.h (nocturne_rng_sim).

#ifdef __cplusplus
}
#endif
