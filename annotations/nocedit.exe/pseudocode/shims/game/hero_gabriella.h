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
// DYNAMITE IS THROWN UNLIT
//
// CGabriella::process has a complete charged throw: while fire is held with a
// CDynamite drawn it raises dynamite_charge_power from 10 to 60 at 25 a second,
// keeps the stick's toss_velocity along her aim pitch at that speed, and throws
// on release through CDynamite::fire. Nothing in her code lights the fuse -
// CStranger::updateWeaponLayerActions is the binary's only caller of
// CDynamite::lightFuse - so the stick leaves her hand with fuse_timer -1,
// CFireEffect::createToss clamps that to 0.0001 and the toss explodes on its
// first tick, where it left her hand. The fuse is lit on the first frame of the
// charge, and it burns 3.5 s.
//
// The throw follows the Stranger's rules. CStranger::autoAimAtThreat gives his
// dynamite no auto-aim target and no yaw: look input moves the aim between 60
// degrees up and 70 degrees down, and the throw goes along a pitch that eases
// after it at half pi a second, with no lift, so a level aim throws flat. His
// charge runs from 10 at 25 a second to 70 and holds there while fire is held.
// Hers aims the same way, and her charge stops at 70 rather than releasing
// itself at 60; a stick held until the fuse burns out is dropped.
//
// He carries the stick at his side and shows no aim until the fuse is lit.
// Her aim weight carries both her raised arm and her head and body turning to
// the aim, so with dynamite it rises only through the charge and the throw:
// drawn and idle, her arm follows her walk and stand with the stick in hand,
// and look input moves nothing visible. After a throw he plays his draw to
// take the next stick. She reaches to her hip with the frame of her draw
// motion where it takes the weapon from there, without the draw and holster
// sounds: the hand goes to her hip with the thrown stick hidden and comes back
// with the next. With none left, the empty hand shows no stick. Fire reads as
// released until a stick is in hand, so a held button cannot light one early.
//
// She shouldered the stick like a rifle and threw it flat. Her pose function
// gives every weapon that is not a CGun the two-handed long-gun pose, so dynamite
// takes the one-armed pistol pose instead. Over it, the charge raises her right
// arm in front of her to above the shoulder, and the release swings it forward
// and down to a follow-through, with the stick leaving her hand partway
// through: the throw waits in fire_state 2 until the arm reaches the release
// point. The arm is placed the way her pistol aim places it, pointed along a
// pitch, so the swing is a sweep of that pitch, and it fades with her draw
// blend, so holstering lowers it. Holstering also cancels the wind-up and the
// swing; fire_state stays 2 with the weapon away, and a stick still owed a
// throw swings again when she redraws.
//
// A fuse that burns out in her hand - she held the charge, holstered or was
// grabbed with the stick lit - is dropped at her feet with no velocity, as
// CStranger::processWeaponTick drops his.
//
// While she charges, the throw is previewed with the Stranger's arc:
// CStranger::renderOpaque steps the throw through CDemonSet::iterativeRaycast
// and draws it to the first hit with CFireEffect::createLaserPath. Her
// renderOpaque already calls the selected weapon's renderAimBeam at exactly that
// moment - a CDynamite drawn, with a nonzero toss_velocity - but
// CDynamite::renderAimBeam is empty. Her toss_velocity grows with the charge, so
// the arc lengthens as fire is held. It writes nothing the simulation reads.
//
// A SWITCH SWAPS THE WEAPON IN HER HAND
//
// Her code works only with inventory.selected_weapon, so a new selection was in
// her hand at once. The Stranger keeps the weapon in his hand apart from the
// selection and, when they differ, holsters it and draws the new one. Hers
// does the same: a player Gabriella's own process and render see the weapon
// in her hand in selected_weapon, and everything else - the HUD, the
// inventory's cycling - sees the selection. A new selection while she is drawn
// holsters the weapon in hand; when her hand reaches her hip the new one takes
// its place and she draws it, with the holster and draw sounds. Holstered, the
// swap is immediate, as before.
//
// FIRE AS THE STRANGER FIRES
//
// The Stranger never clears fire after a shot: held, his weapon fires again as
// soon as it is ready, after his 0.2 s recoil, and for the shotgun after
// draw_shotGunRecoil, which ejects the shell at 0.6 of its length. Her shot
// cleared fire for every weapon but the continuous ones, so in single player a
// held button fired once; in a network game the clear lasts one frame (see ONE
// PRESS, ONE ACTION), and a held button fired again. Her pistol's recoil is
// 0.2 s too, but tryFireWeapon gives a pump action (fire_mode 2) no wait at
// all, so a tap could fire the shotgun twice. Her shot no longer clears fire,
// so holding repeats in either game; a pump-action shot gets her long-gun
// recoil and a pump time in which no shot starts, and ejects its shell partway
// through it as his does: the shotgun's, and the elephant gun's under
// NOCTURNE_AUTHENTIC_ELEPHANT_GUN_SHELL 0. A press held through a holster reads
// as released, so it does not act once the weapon is away.
//
// A press that finds her weapon still in its own refire - the crossbow's is
// 0.666 s - left fire_state pending, and the shot went by itself when the
// refire ended, after the button was let go; in a network game a tap lasts
// several frames, so one tap fired twice. That pending shot is now dropped,
// and a held button fires again as soon as the weapon is ready.
//
// Gated by NOCTURNE_AUTHENTIC_HERO_ACTIONS at the call sites.

struct CGabriella;
struct CDynamite;

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

// From CGabriella::process on each frame of a dynamite charge (fire_state 3):
// lights the stick's fuse if it is not lit and the stick has a throw left.
void nocturne_hero_gabriella_charge_dynamite(struct CGabriella *gabriella,
                                             struct CDynamite *dynamite);

// From CGabriella::process after the selected weapon's process: steps the
// wind-up and swing, and drops a stick whose fuse burned out in her hand.
void nocturne_hero_gabriella_dynamite_tick(struct CGabriella *gabriella, float delta_time);

// Nonzero when her selected weapon is dynamite. CGabriella::updateWeaponAndAimAnimation
// gives it her one-armed CGun pose rather than the two-handed one, and
// CGabriella::updateAimTracking keeps look input out of its aim.
int nocturne_hero_gabriella_holds_dynamite(struct CGabriella *gabriella);

// From the top of CGabriella::updateAimTracking: with dynamite selected, aims
// as CStranger::autoAimAtThreat aims his throw and returns 1, so the function
// returns; otherwise 0.
int nocturne_hero_gabriella_dynamite_aim(struct CGabriella *gabriella, float delta_time,
                                         int is_holstering);

// From CGabriella::process once canFireWeapon passes: 1 when the throw may go.
// For dynamite thrown by a player, the first call starts the swing and the
// stick goes when the arm reaches its release point; any other weapon, and an
// NPC, fires at once.
int nocturne_hero_gabriella_throw_ready(struct CGabriella *gabriella);

// From the end of CGabriella::updateWeaponAndAimAnimation: the throwing arm's
// wind-up or swing, over the pose the function has built.
void nocturne_hero_gabriella_pose_throw(struct CGabriella *gabriella);

// From CGabriella::process in place of its draw_blend step: while she fetches
// the next stick after a throw, drives draw_blend through the holster and back
// without the draw and holster sounds, and returns 1; otherwise 0.
int nocturne_hero_gabriella_refetch_dynamite(struct CGabriella *gabriella, float delta_time);

// From CGabriella::updateWeaponAndAimAnimation's one-armed pose: while she
// fetches the next stick, sets the draw motion's weight and marker to reach
// straight to her hip and back, and returns 1; otherwise 0.
int nocturne_hero_gabriella_refetch_pose(struct CGabriella *gabriella, float *weight,
                                         float *marker);

// From CGabriella::renderOpaque before it draws the selected weapon: nonzero
// while dynamite is in her hand with no stick in it - thrown and not yet
// replaced, or none left.
int nocturne_hero_gabriella_weapon_hidden(struct CGabriella *gabriella);

// From CGabriella::renderOpaque in place of CDynamite::renderAimBeam: the
// throw's arc from the stick to the first thing it would hit.
void nocturne_hero_gabriella_render_throw_arc(struct CGabriella *gabriella,
                                              struct CDynamite *dynamite);

// Around CGabriella::process, renderOpaque and renderTransparent: hold puts the
// weapon in her hand in inventory.selected_weapon for her own code, release
// puts the selection back. Release must run on every exit after hold.
void nocturne_hero_gabriella_hold_weapon(struct CGabriella *gabriella);
void nocturne_hero_gabriella_release_weapon(struct CGabriella *gabriella);

// From CGabriella::process before its draw_blend step, between hold and
// release: holsters the weapon in her hand when the selection differs, and
// swaps in the selection once her hand is at her hip, drawing it if she was
// drawn.
void nocturne_hero_gabriella_switch_weapon(struct CGabriella *gabriella);

// From CGabriella::tryFireWeapon after a shot: starts the pump of a pump-action
// weapon, with her long-gun recoil.
void nocturne_hero_gabriella_fired(struct CGabriella *gabriella);

// From CGabriella::process when canFireWeapon refuses a pending shot: nonzero to
// keep it pending (her draw or aim is not ready, or it is a throw), 0 to drop
// it because the weapon's own refire is not.
int nocturne_hero_gabriella_keep_pending_shot(struct CGabriella *gabriella);

// From CGabriella::process with the fire test: nonzero while the pump runs, so
// no new shot starts.
int nocturne_hero_gabriella_pumping(struct CGabriella *gabriella);

// From CGabriella::process after the selected weapon's process: steps the pump
// and ejects the shell partway through it.
void nocturne_hero_gabriella_fire_tick(struct CGabriella *gabriella, float delta_time);

#ifdef __cplusplus
}
#endif

#define NOCTURNE_GABRIELLA_STRAFE_RATE 2.0f
