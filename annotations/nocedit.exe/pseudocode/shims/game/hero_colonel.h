#pragma once

// =============================================================================
// THE COLONEL'S PISTOL
// =============================================================================
//
// An addition. COLONEL.SKL carries "draw" (DRAW, 17 frames) and "shoot"
// (SHOOT, 22 frames), both exiting to STAND, with no route into either and no
// signal in either. CColonel::process toggles guns_drawn on draw and, once it
// is set, swallows fire without doing anything with it: the shipped Colonel
// draws nothing and shoots nothing.
//
// A player Colonel is given a pistol by nocturne_hero_default_weapon
// (hero_weapon.h). With it:
//
//   draw    plays "draw" and puts the pistol in his right hand. Drawing
//           again plays "draw" backwards, and the pistol goes away when it
//           reaches the start.
//   aim     with the pistol out, his right arm comes up onto the aim the way
//           CScat::blendAimBones raises Scat's: toward the nearest enemy that
//           passes CScat::scoreAimTarget's test - alive, offering a target
//           point, within 30 and in sight - and in a 30 degree cone in front of
//           him, else level with look up/down tilting it. Once the arm is on
//           the aim the laser sight is drawn, as the Stranger's and Scat's are.
//   fire    with the pistol out and "draw" finished, fires it along the aim
//           and plays "shoot". A shot is one per "shoot".
//
// Both motions are layered from Spine2 up over whatever the controller is
// playing, the way CIcePick::updateShootBlend layers "shoot", on a clock of
// their own at each motion's fps. DRAW and SHOOT are whole-body states with no
// root motion, and CColonel::process reads walk input only in STAND, WALK, RUN
// and BACKUP, so entering either would stop him until it exited. Layered, the
// legs stay on locomotion and he keeps moving while he draws and fires.
//
// The reserve is put back after every shot (nocturne_hero_reload_extra_gun).
//
// A Colonel without the pistol, which includes every NPC Colonel, is left
// exactly as shipped. Only lockstep state is read - synced input, positions,
// the layer clocks - so every machine fires the same shot.
//
// Gated at the CColonel::process and renderOpaque call sites on
// NOCTURNE_AUTHENTIC_HERO_ACTIONS.

//
// DYING. CColonel::processDamage asks for state 5 on a killing blow and
// guards on 5 and 6 (PUSH 0x5 at 00440570, CMP 0x5 / 0x6 above it). In
// COLONEL.SKL those are DAMAGE2 and DAMAGE3; DIE is 7 and DEAD 8. So a
// killed Colonel flinches, returns to STAND at 0 hit points, and
// CCharacter::getDeathState, which reads the state name, never reports him
// dying. A player's Colonel is sent to DIE instead; the NPC is left as
// shipped.
//
// THE PUSH-OFF. COLONEL.SKL's "pushoff" carries no signals, so breaking out
// of a grab (hero_grab.h) hurts nobody and leaves every enemy where it
// stood, ready to grab him again. When a player's Colonel breaks free, every
// enemy within reach of him, the grabber included, takes the 10-15 damage of
// Gabriella's escape kick and is shoved back (hero_shove.h).

struct CColonel;

#ifdef __cplusplus
extern "C" {
#endif

// From CColonel::process after draw toggled guns_drawn. Returns 1 when he holds
// the pistol and the draw is handled here, in which case the caller leaves his
// locomotion state alone rather than dropping him to STAND.
int nocturne_colonel_draw(struct CColonel *colonel);

// From CColonel::process when fire is pressed with guns_drawn set. Returns 1
// when a shot was fired.
int nocturne_colonel_fire(struct CColonel *colonel);

// From CColonel::process after the skeleton is updated: layers "draw" and
// "shoot" over the upper body, turns the arm onto the aim, carries the pistol
// on the right hand and runs its process.
void nocturne_colonel_update_gun(struct CColonel *colonel, float delta_time);

// From CColonel::renderOpaque once the character has drawn: the pistol, and
// its laser sight once the arm is on the aim.
void nocturne_colonel_render_gun(struct CColonel *colonel);

// From CColonel::processDamage: the state to use where the shipped code uses
// `shipped_state` (5, its dying state, or 6, its dead state). A player's
// Colonel gets COLONEL.SKL's DIE or DEAD; anything else gets `shipped_state`.
int nocturne_colonel_death_state(struct CColonel *colonel, int shipped_state);

// From CColonel::process when nocturne_hero_grab_escape has just released
// him: hits and shoves back every enemy within reach.
void nocturne_colonel_push_off(struct CColonel *colonel);

#ifdef __cplusplus
}
#endif
