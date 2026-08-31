#pragma once

// =============================================================================
// HERO WORLD INTERACTION
// =============================================================================
//
// An addition, not a reconstruction. Six of the nine playable classes reach the
// CHero interaction set from their fire button while their weapon is put away -
// tryInteract, then a door, then a conversation, then a lever. CSvetlana,
// CIcePick, CColonel and CHaystack each carry their own inline copy of exactly
// the same chain, and CGabriella and CStranger carry longer ones.
//
// CScat and CMoloch carry none of it. CScat::process goes from the fire button
// straight to the weapon, and CMoloch::process reads fire only to let him
// struggle out of a grab. Neither can open a door, pull a lever or talk to
// anybody - in a mission built around levers and locked doors that is not a
// missing flourish, it is a hero who cannot finish the level.
//
// The shipped game never noticed because the options screen pinned the player
// to the Stranger, who has the fullest set of all.
//
// None of it needs animation. CHero::tryOpenDoor checks the key and calls
// CDoor::onOpened; CHero::executeLeverPull calls CLever::activate; the rest are
// proximity and facing tests against actors in the set. The Stranger plays an
// opendoor/pulllever motion over the top, and he is the only skeleton that has
// one - which is why the other five already work without them, and why this
// carries none of the constraint that ladders do (only STRANGER.SKL has the
// ladderup*/ladderdown* motions, and CGabriella's climb is her own).
//
// What is deliberately NOT here: object pickup, item use and box pushing. Those
// are held in CStranger (tryPickupObject, handleActionButton, tryPlaceObject,
// processPickupComplete) around carry-hand state that the other classes do not
// maintain, and CGabriella's partial version is her own. Adding them is a
// bigger piece of work than routing a call.

struct CHero;

#ifdef __cplusplus
extern "C" {
#endif

// Runs the CHero interaction set in the order the classes that have it use:
// interact, then a nearby door (unlocking it when the nearby test says the door
// is the reason), then a conversation, then a lever. Returns nonzero when
// something was acted on, so a caller can swallow the button press.
//
// Safe to call for any hero; every step is a no-op when nothing is in range.
int nocturne_hero_interact(struct CHero *hero);

#ifdef __cplusplus
}
#endif
