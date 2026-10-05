#pragma once

// =============================================================================
// BREAKING OUT OF A GRAB
// =============================================================================
//
// An addition, not a reconstruction, and the same shape as hero_interact: a
// piece of player behaviour that lives in CStranger and nowhere else, and that
// only becomes visible once anyone but the Stranger is at the controls.
//
// Eight of the nine playable classes read grabbed_by in their process and do
// the same three things with it: turn to face the grabber, call the grabber's
// attractActorToward, and - if the fire button is down - play a struggle
// motion. CSvetlana sets state 0x10, CIcePick 0x11, CMoloch merely skips the
// return to idle; CScat, CColonel, CHaystack and CGabriella are the same
// again. Not one of them ever calls releaseFromGrab. The struggle is animation
// and nothing else, so the grab ends only when the grabber decides it does.
//
// CStranger is the exception. He carries his own grab_timer, and once he has
// been held for 1.5 seconds and the grab is not the scripted kind he calls
// releaseFromGrab and walks away. That is the escape the player expects, and
// he is the only one who has it, because the shipped options screen pinned the
// player to him.
//
// WHAT THAT COSTS THE OTHER EIGHT. An enemy lets go on a motion event in its
// own animation - CSentinel::process case 0x65 is the only thing that calls
// releaseVictim on a sentinel. A sentinel that never reaches that event never
// lets go, and CSentinel::attractActorToward moves the victim with
// setPositionAndOrientation, which is a teleport with no collision test. So a
// held hero is dragged along wherever the sentinel flies, through walls,
// until the sentinel leaves the map and takes the hero with it. For the
// Stranger that is a 1.5 second inconvenience. For everyone else it is
// terminal, and no amount of mashing fire does anything about it.
//
// This gives the other eight the Stranger's escape, on his timer, through the
// game's own release path.
//
// EVERY HERO, AND DELIBERATELY NOT ONLY THE PLAYER'S. The obvious narrowing -
// check control_type, leave hero NPCs alone - is a determinism break, and a
// sharp one. CDemonMission::createHeros sets every hero to 1 and then
// g_HeroActors[g_LocalHeroIndex]->control_type = HERO_CONTROL_PLAYER, and
// g_LocalHeroIndex is *supposed* to differ per machine; it is the same
// per-machine identity net_sim.h exists to keep out of simulation code. A
// guest's hero would break free on the guest and stay held on the host, and
// the release draws through the motion controller, so the two RNG streams part
// in the same frame as the two positions.
//
// Applied to every hero it reads only grabbed_by and delta_time, which every
// machine already agrees on, and every machine runs every hero's process - so
// the escape happens on the same frame everywhere. A hero NPC an enemy has
// hold of gets out too, which is the right answer for the same reason it is
// for the player: nothing in the world should be held forever.
//
// THE MOTIONS. CStranger, at 1.5 seconds, asks for ESCAPEGRAB (his 0x23) and
// lets go only once neither it nor GETGRABBED (0x22) is blended in, so the
// kick in "hugFrontEnd" lands on a grabber that is still holding him. The same
// is done here by state name rather than by his raw indices: GETGRABBED, then
// ESCAPEGRAB or, in the skeletons that call it that, PUSHOFF. Gabriella,
// Svetlana, Scat, IcePick, Haystack and the Colonel carry both. Baron and
// Moloch have no GETGRABBED, so CHero::canBeGrabbed refuses them outright.
//
// Getting into GETGRABBED needs help too. CHero::getGrabbed asks for it once,
// and most classes route to it only from STAND or a fighting stance - the
// Colonel from STAND alone - so a hero grabbed mid-run kept running in the
// grabber's claws. The hero is steered through STAND, and put into the state
// directly if the class's own locomotion keeps turning it away.
//
// While held, the fire press is consumed here. Each class asked for its
// struggle motion from it, and that request would reverse the steering's
// tween; the escape is on the timer, as the Stranger's is.

// THE CARRY ITSELF. Breaking out bounds how long the drag lasts; it does not
// make the drag legal. Every attractActorToward moves the victim by writing a
// position, but the two that exist elsewhere are harmless about it -
// CImp::attractActorToward moves nobody, and CCharacter::attractActorToward
// pulls horizontally only, capped at delta_time * 5. CSentinel's snaps the
// victim onto the midpoint of its two claw bones every frame, on all three
// axes, with no cap and no collision test, so the victim goes exactly where
// the sentinel goes: through walls, out of the level, across whatever trigger
// happens to be behind them.
//
// The claw point is still where the victim belongs - that is what makes the
// carry look like a carry. It is the writing of it that is wrong, so the fix
// is to reach it the way everything else in the game moves, through
// CCharacter::moveAndCollide, which stops at geometry and keeps area_id
// right. A sentinel flying into a wall now leaves the victim at the wall
// instead of on the far side of it.

struct CHero;
struct CDemonActor;
struct CVector3f;

#ifdef __cplusplus
extern "C" {
#endif

// Advances the hold timer for `hero`, steers it into GETGRABBED, plays the
// escape motion once it has been held long enough and breaks the grab when that
// motion is done. Call once per frame from the hero's process, immediately
// before it reads grabbed_by: on release grabbed_by is cleared, so the class's
// own "not grabbed" branch picks the frame up and no other code has to change.
//
// Returns 1 on the frame the hero was released, 0 otherwise. Safe to call
// every frame whether or not the hero is grabbed, and a no-op for an AI hero,
// for a scripted grab, and when NOCTURNE_AUTHENTIC_HERO_ACTIONS is 1.
int nocturne_hero_grab_escape(struct CHero *hero, float delta_time);

// CSvetlana::getGrabbed is `return 0`: she refuses every grab, though SVETLANA.SKL
// has GETGRABBED and PUSHOFF and CSvetlana::process handles grabbed_by like every
// other class. That keeps the ACT1 escort from being carried off, and is kept
// for her as an NPC. A player Svetlana is grabbed through CHero::getGrabbed like
// the rest. Returns what the vtable slot returns: 1 when the grab took.
int nocturne_svetlana_get_grabbed(struct CHero *svetlana, struct CDemonActor *grabber,
                                  int grab_type);

// Moves `victim` to the world point `world_target` through the collision
// system rather than by writing the position. Call it from an
// attractActorToward in place of setPositionAndOrientation.
//
// Returns 1 when it moved the victim, and 0 when it did not - a null argument,
// a victim that is not a CCharacter and so has no moveAndCollide, or
// NOCTURNE_AUTHENTIC_HERO_ACTIONS set. A caller that gets 0 should fall through
// to its own original write, so the shipped path stays reachable.
int nocturne_grab_carry_move(struct CDemonActor *victim, struct CVector3f *world_target);

#ifdef __cplusplus
}
#endif
