#pragma once

// =============================================================================
// MOTION, MOVEMENT AND AIM HELPERS FOR THE HERO ADDITIONS
// =============================================================================
//
// The small pieces the hero shims each need from the motion controller, the
// collision mover and the look input: what state a character is in, a state's
// index by name, forcing a state, whether an attack crossed its hit frame,
// moving by a world-space step through collision, and the look-driven aim
// pitch. Every one reads or writes only simulated state, so a network game
// stays in lockstep.

struct CCharacter;
struct CVector3f;

// CStranger::autoAimAtThreat's aim_pitch limits: up is negative.
#define NOCTURNE_STRANGER_PITCH_UP   (-1.047198f)
#define NOCTURNE_STRANGER_PITCH_DOWN 1.22173f

#ifdef __cplusplus
extern "C" {
#endif

// The state of the motion `character` is playing now.
int nocturne_hero_motion_state(struct CCharacter *character);

// `name`'s state index in `character`'s motion list, or -1. Looked up through
// findStateIndex rather than the byName form, which quits the process when the
// state is missing.
int nocturne_hero_motion_find_state(struct CCharacter *character, const char *name);

// Jumps straight into the first motion of `state` and makes it the desired
// state, for when no route reaches it. Returns 0 if the skeleton has no
// motion in that state.
int nocturne_hero_motion_force_state(struct CCharacter *character, int state);

// Whether a motion in `state` crossed `hit_frame` during the advance that just
// ran, given the state and frame read before it. A motion that started this
// frame crossed it if it is already at or past it.
int nocturne_hero_motion_crossed(struct CCharacter *character, int state, int prev_state,
                                 float prev_frame, float hit_frame);

// Moves `character` by a world-space step through CCharacter::moveAndCollide,
// which takes the step in the actor's own frame.
void nocturne_hero_move_world(struct CCharacter *character, const struct CVector3f *world_delta);

// `value` moved toward `target` by no more than `step`.
float nocturne_hero_approach(float value, float target, float step);

// `pitch` turned by the look up/down input at the Stranger's rate (one full
// turn a second at full deflection) and held within [up, down].
float nocturne_hero_look_pitch(float pitch, float look_speed, float delta_time,
                               float up, float down);

#ifdef __cplusplus
}
#endif
