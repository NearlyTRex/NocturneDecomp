#pragma once

// =============================================================================
// MOLOCH'S FIRE BUTTON
// =============================================================================
//
// An addition. Draw morphs, as it always did (CMoloch::process calls
// startMorph). Fire, which reached nothing, now attacks in demon form.
//
// MOLOCH_D.SKL has PUNCH (11) and OVERHEADSMASH (10), which no code plays, and the
// human skeleton has no attack at all. Fire alternates the two. Their motions
// carry no signals, so the hit lands when the motion
// crosses a fixed frame, tested from both hand bones the way
// CHaystack::checkMeleeHit tests one.
//
// Only synced input and the motion frame are read, so every machine in a
// network game lands the same hit. Gated at the call sites on
// NOCTURNE_AUTHENTIC_HERO_ACTIONS.
//
// HEALTH
//
// CMoloch has no processDamage. His vtable carries CCharacter::processDamage,
// which plays the hit's effects and never writes hit_points (no store to
// 0x243c in 0042c3c0-0042c579), so in the shipped game nothing hurts him. He
// also has no death motion, and CCharacter::getDeathState reads the motion,
// so a Moloch at zero health would still be standing.
//
// A player's Moloch now takes damage the way the other heroes do — none while
// invincibility_timer runs or god mode is on — but never below
// MOLOCH_MIN_HIT_POINTS, and regenerates MOLOCH_REGEN_PER_SECOND back up to
// max_hit_points. The damage types that take a body apart (explode, fall
// apart, shatter, chopped) are dealt as generic damage, since a dismembered
// hero is ACTOR_DESTROYED and leaves the world. He is also left out of fall
// damage (hero_fall.h). The NPC Moloch keeps his shipped invulnerability.

struct CMoloch;
struct CHero;

#define MOLOCH_MIN_HIT_POINTS   1.0f
#define MOLOCH_REGEN_PER_SECOND 5.0f

#ifdef __cplusplus
extern "C" {
#endif

// From CMoloch::process's stand/walk/backup branch, after the interaction
// test. Takes the state that branch chose and returns the one to request.
unsigned int nocturne_moloch_fire(struct CMoloch *moloch, unsigned int desired_state);

// From CMoloch::process after the motion advance, with the state and frame
// read before it. Lands the hit when an attack crosses its hit frame.
void nocturne_moloch_attack_hit(struct CMoloch *moloch, int prev_state, float prev_frame);

// Whether an attack is requested or playing. CMoloch::process holds off both
// morphs while it is: the morph mirrors the current motion onto the other
// skeleton by name, and the human one has no attack motions, which is a
// "Can't find motion" quit.
int nocturne_moloch_is_attacking(struct CMoloch *moloch);

// From CMoloch::ctor, after it installs g_CMolochVTable. Points the Moloch at a
// copy of that vtable whose processDamage is his own: for a player's Moloch it
// takes the damage off hit_points down to the floor and turns a destroying
// damage type into generic damage, then hands on to CCharacter::processDamage
// for the hit's effects. An NPC Moloch goes straight to
// CCharacter::processDamage, as shipped. Nothing compares vtable pointers, so
// the copy is a CMoloch in every other respect.
void nocturne_moloch_install_vtable(struct CMoloch *moloch);

// From nocturne_hero_frame (hero_frame.h), once a frame.
void nocturne_moloch_regenerate(struct CMoloch *moloch, float delta_time);

#ifdef __cplusplus
}
#endif
