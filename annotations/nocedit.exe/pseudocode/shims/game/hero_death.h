#pragma once

// =============================================================================
// A KILLED HERO THAT KEEPS STANDING
// =============================================================================
//
// An addition. Each class's processDamage, on a killing blow, asks for its
// skeleton's DIE with setDesiredState. setDesiredState records the request in
// state_index even when the current motion has no route to it, and many have
// none: HAYSTACK.SKL reaches DIE only from locomotion, FSTANCE and
// GETGRABBED, not from the DAMAGE and FDAMAGE motions a hit plays, and the
// other non-Stranger skeletons are built the same way. The request then waits
// for the hit reaction to exit to STAND, and the class's process, finding him
// in STAND with walk or run held, asks for locomotion over it. The DIE request
// is gone, hit_points stays at zero, and CCharacter::getDeathState, which
// reads the motion's state name, reports him alive until a later blow lands
// while he stands still.
//
// Checked once a frame through nocturne_hero_frame, before the class's own
// state logic, for every class that is neither the Stranger nor Moloch: a
// player hero at zero hit
// points that reads ALIVE and no longer wants DIE or DEAD is jumped into DIE,
// as nocturne_hero_revive jumps out of it. A death still on its way —
// a tween into DIE, or DIE pending behind a hit reaction — is left alone.
//
// Only the heroes in g_HeroActors, and only lockstep state, so every machine
// makes the same decision. Gated on NOCTURNE_AUTHENTIC_HERO_ACTIONS.

struct CHero;

#ifdef __cplusplus
extern "C" {
#endif

// From nocturne_hero_frame (hero_frame.h), once a frame.
void nocturne_hero_check_death(struct CHero *hero);

// Whether a class that regenerates may do so this frame. CSvetlana::process
// adds delta_time to hit_points whenever they are under 100, dead or not, so a
// killed player Svetlana is back above zero on the next frame: the check above
// never sees her, and nocturne_hero_revive, which revives a hero at
// zero hit points, finds nothing to do. 0 for a player hero at zero hit points;
// 1 otherwise, so an NPC Svetlana regenerates as shipped.
int nocturne_hero_regenerates(struct CHero *hero);

// Brings a dead hero back where it stands: restores hit_points to
// max_hit_points, undoes a destroying death, and forces STAND so the motion
// controller stops wanting the death state. Returns 1 if the hero was dead and
// is now revived, 0 if it was alive and nothing changed. Used by the netplay
// respawn (net_respawn.h) and by CDemonMission::createHeros for a hero carried
// into the next mission. Not gated: its callers are.
int nocturne_hero_revive(struct CHero *hero);

#ifdef __cplusplus
}
#endif
