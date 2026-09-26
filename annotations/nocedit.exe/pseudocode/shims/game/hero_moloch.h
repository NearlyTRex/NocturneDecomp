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

struct CMoloch;
struct CHero;

#define NOCTURNE_MOLOCH_AMULET_NAME "Moloch_amulet"

#ifdef __cplusplus
extern "C" {
#endif

// Names the amulet so its slot text can explain the two buttons. Called by
// nocturne_hero_default_weapon after the amulet is installed.
void nocturne_moloch_setup_items(struct CHero *hero);

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

#ifdef __cplusplus
}
#endif
