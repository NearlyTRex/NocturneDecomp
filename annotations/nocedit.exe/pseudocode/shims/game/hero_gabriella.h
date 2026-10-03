#pragma once

// =============================================================================
// GABRIELLA AS A PLAYER HERO
// =============================================================================
//
// An addition, not a reconstruction. GABRIELA.SKL authors a pickup, a rummage
// and both strafes, and CGabriella's code handles them, but the shipped game
// never let a player reach them properly. Everything here is built on her motion
// routes, which research/21-character_motions/heroes.md lists: a state asked for
// from a motion with no route to it is never taken.
//
// PICKUP IS ON THE WRONG BUTTON
//
// CGabriella::findAndPickupNearbyObject chooses the nearest object in reach and
// starts PICKUP_CARRY, RUMMAGE or PICKUP_INVENTORY, whose signals her
// processMotionEvents turns into the pickup, collectAmmo and the inventory add.
// CGabriella::process calls it only from use_item, while every other class picks
// up from the action button, and nocturne_hero_items_process spends use_item on a
// selected health item before her branch sees it. The hook below puts the same
// call at the head of her action-button chain. Only STAND routes into the three
// states.
//
// STRAFES ARE NEVER SELECTED
//
// CGabriella::process moves her sideways by the STRAFE_L/STRAFE_R blend weights,
// but nothing asks for either state. The selection is CStranger::processFrame's:
// strafe only when neither walking nor backing up. Only STAND and WALK route into
// a strafe, and neither strafe into the other, so from anything else STAND is
// asked for first and the strafe follows on a later frame.
//
// STRAFES PLAY TOO SLOWLY
//
// "gab strafe l" and "gab strafe r" are a three-second loop (90 frames at 30 fps)
// with no root motion, while CGabriella::process moves her a flat 2 units a second.
// Her body glides at the Stranger's pace while her legs step at a sixth of his rate
// (his "strafe_l" is 21 frames at 45 fps). The motion rate below plays her strafe
// faster without changing how far she moves. It applies only while a strafe plays
// on its own: during a crossfade the other motion's root motion accumulates too,
// and scaling it would move her. Neither strafe motion emits signals.
//
// AN UNARMED KICK
//
// "gab kick door open" is a left-leg kick that nothing asks for. With her weapon
// put away, an action press that finds nothing to interact with kicks, but only
// when an enemy stands within reach in front of her, so interacting never turns
// into a stray kick. Reach is measured to the edge of the enemy's collision
// cylinder, and the same test starts the kick and lands it, so a kick that starts
// connects. Only STAND routes into KICK_DOOR; a press made while she is still
// settling into it (the end of a walk, a turn in place) is held for half a second
// rather than dropped. The motion carries no signal, so the blow lands when it
// crosses a fixed frame, as CMoloch's attacks do, with her grab-escape kick's
// damage record: 10-15, the left foot as the impact point. The enemy is then
// shoved away from her, eased over a quarter second through
// CCharacter::moveAndCollide, so walls stop it.
//
// ONE PRESS, ONE ACTION
//
// Action and fire are one button. In single player a consumer clears
// player_input.fire and it stays clear while the button is held; in a network
// game the synced input is applied again every frame, so a held press repeated
// the pickup each frame and re-rummaged a box as each rummage ended. A press
// that a pickup or kick has used now reads as released until the button is let
// go, and so does a press held through a draw, which would otherwise shoot the
// moment the draw completes.
//
// Every decision reads motion state, player_input or lockstep positions, which
// every machine shares, so a network game stays in lockstep.
//
// Gated by NOCTURNE_AUTHENTIC_HERO_ACTIONS at the call sites.

struct CGabriella;

#ifdef __cplusplus
extern "C" {
#endif

// Her action button: starts her pickup or rummage on the nearest object in reach
// when she is standing on the ground. Returns nonzero and consumes the press when
// one started.
int nocturne_hero_gabriella_pickup(struct CGabriella *gabriella);

// The locomotion state to ask for, given the one CGabriella::process chose from
// walk, run and backup (0 for none of them): STRAFE_L or STRAFE_R from strafe
// input when the current motion can route there, STAND when it cannot, otherwise
// `chosen_state` unchanged.
int nocturne_hero_gabriella_strafe_state(struct CGabriella *gabriella, int chosen_state);

// The end of her action-button chain, when nothing else acted: starts the kick if
// she stands and an enemy is in reach in front. Returns nonzero and consumes the
// press when it started.
int nocturne_hero_gabriella_kick(struct CGabriella *gabriella);

// Replaces CGabriella::process's call to processMotionEvents, which is the first
// thing in her frame to read fire. Clears a used or draw-crossing press, advances
// her motion with the strafe rate applied (NOCTURNE_GABRIELLA_STRAFE_RATE while STRAFE_L or
// STRAFE_R plays untweened), lands the kick when it crosses its hit frame, and
// steps her active shoves.
void nocturne_hero_gabriella_process_motion(struct CGabriella *gabriella, float delta_time);

#ifdef __cplusplus
}
#endif

#define NOCTURNE_GABRIELLA_STRAFE_RATE 2.0f
