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
//   draw    jumps to "draw" and puts the pistol in his right hand. Drawing
//           again plays "draw" backwards, and the pistol goes away when it
//           reaches the start.
//   aim     with the pistol out, his right arm comes up onto the aim the way
//           CScat::blendAimBones raises Scat's: toward the nearest enemy that
//           passes CScat::scoreAimTarget's test - alive, offering a target
//           point, within 30 and in sight - and in a 30 degree cone in front of
//           him, else level with look up/down tilting it. Once the arm is on
//           the aim the laser sight is drawn, as the Stranger's and Scat's are.
//   fire    with the pistol out, fires it along the aim and jumps to "shoot".
//           Neither motion has a route out except its exit, so a shot is one
//           per "shoot".
//
// The reserve is put back after every shot (nocturne_hero_reload_extra_gun).
//
// A Colonel without the pistol, which includes every NPC Colonel, is left
// exactly as shipped. Only lockstep state is read - synced input, positions,
// the motion frame - so every machine fires the same shot.
//
// Gated at the CColonel::process and renderOpaque call sites on
// NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CColonel;

#ifdef __cplusplus
extern "C" {
#endif

// From CColonel::process after draw toggled guns_drawn.
void nocturne_colonel_draw(struct CColonel *colonel);

// From CColonel::process when fire is pressed with guns_drawn set. Returns 1
// when a shot was fired.
int nocturne_colonel_fire(struct CColonel *colonel);

// From CColonel::process immediately before the skeleton is updated: steps a
// holster's "draw" backwards.
void nocturne_colonel_pre_animate(struct CColonel *colonel, float delta_time);

// From CColonel::process after the skeleton is updated: turns the arm onto the
// aim, carries the pistol on the right hand and runs its process.
void nocturne_colonel_update_gun(struct CColonel *colonel, float delta_time);

// From CColonel::renderOpaque once the character has drawn: the pistol, and
// its laser sight once the arm is on the aim.
void nocturne_colonel_render_gun(struct CColonel *colonel);

#ifdef __cplusplus
}
#endif
