#pragma once

// =============================================================================
// FALL DAMAGE FOR THE CLASSES THAT ARE NOT THE STRANGER
// =============================================================================
//
// An addition, not a reconstruction. Every hero class falls: each process
// subtracts gravity from velocity.y and hands the step to
// CCharacter::moveAndCollide. Only CStranger::processFrame looks at how hard
// the landing was. It keeps the fall speed from before the move
// (fall_velocity_snapshot), and when the move leaves him on the ground:
//
//   under 20 units/s   a soft landing
//   20 and over        (speed - 20) * 5 damage through processDamage
//   over 100 damage    fatal: 9999 damage
//
// Every other class lands from any height unhurt. Nothing kills them except
// NOCTURNE_AUTHENTIC_BOTTOMLESS_FALL's floor under the world.
//
// This applies the Stranger's rule to the others. Each class's process calls
// it in place of moveAndCollide, so the snapshot is taken in the same place
// as his. Two classes are left out. CMoloch cannot be brought below
// MOLOCH_MIN_HIT_POINTS and has no death of his own (hero_moloch.h).
// CSvetlana is a vampire who makes high jumps in the story; her process
// already skips gravity and places her by hand in state 0x1a.
//
// The rule follows the Stranger's two fall flags:
//
//   GOD_MODE_FALL     god mode, or a script that turns damage off, prevents
//                     the landing. Tested here rather than through processDamage
//                     zeroing the damage, so the test does not depend on which
//                     processDamage a class has.
//   FATAL_FALL_HEAL   the fatal landing deals DAMAGE_TYPE_FALL, so
//                     autoUseHealth does not spend an item on it.
//
// The death is each class's own: a killing processDamage plays the class's
// death motion; a request that is lost on the way is caught by
// nocturne_hero_check_death (hero_death.h). The Stranger's splat (state 0x12) and fall-?.wav are
// STRANGER.SKL's and his sound set's, so they are not used.
//
// Only the heroes in g_HeroActors are touched. That set is the same on every
// machine, and every machine simulates every hero, so a network game stays in
// lockstep. An NPC of the same class keeps its shipped landing.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;
struct CVector3f;

#ifdef __cplusplus
extern "C" {
#endif

// CCharacter::moveAndCollide, followed by the Stranger's landing test for a
// player hero.
void nocturne_hero_fall_move(struct CHero *hero, struct CVector3f *step);

// From CCharacter::process, for every character, under
// NOCTURNE_AUTHENTIC_BOTTOMLESS_FALL (see that flag for why a fall out of the
// world never lands): a living character more than 32 units below the
// collision grid takes 9999 DAMAGE_TYPE_FALL damage, and the Stranger plays
// his fall splat.
struct CCharacter;
void nocturne_fall_out_of_world(struct CCharacter *character);

#ifdef __cplusplus
}
#endif
