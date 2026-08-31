#pragma once

// =============================================================================
// HERO DEFAULT WEAPON
// =============================================================================
//
// An addition, not a reconstruction. CHero::ctor ends with a direct call to
// CHero::createDefaultWeapon, so every hero the game can build - Svetlana,
// IcePick, Haystack, Colonel, Moloch, all of them - is constructed holding a
// CGun named "Your_weapon" with a hundred rounds in it, whatever that class is
// actually able to do with a gun. Most of them cannot do anything: their fire
// button drives melee motion states and never reads inventory.selected_weapon
// at all, so the pistol sits in the weapon slot describing a weapon that does
// not exist.
//
// It is a direct call, not a virtual one, because it is made from a
// constructor - so the CHero version runs even for a class that overrides the
// slot, and the vtable entry is dispatched nowhere in the binary. CScat is the
// only class that corrects it, from its own constructor, which is why Scat is
// the one hero already holding something that suits him.
//
// The shipped game never showed the problem because the options screen pinned
// the player to the Stranger, for whom a CGun is exactly right. Once the lobby
// hands out the other eight (see net_hero.h) the wrong slot is visible on
// screen from the first frame.
//
// WHY THIS RUNS FROM createOneHero AND NOT FROM THE CONSTRUCTORS
//
// A hero-class actor read from a mission file is loaded through
// CDemonActor::load -> CHero::archive -> CInventory::load, which clears the
// inventory - destroying whatever the constructor put there - before filling it
// from the mission record. So correcting the weapon in a constructor reaches
// every companion NPC of that class, allocates a weapon and loads its model for
// each one, and then has all of it thrown away during the same load. It is also
// actively unsafe: CInventory::addItem removes a CMelee from the world through
// the mission's *deferred* delete queue while every other weapon is unlinked
// immediately, so a CMelee built in a constructor is queued against a mission
// that has not started processing and freed before the queue drains.
//
// CDemonMission::createOneHero is where the distinction lives. A hero built
// there by CHeroPlaceholder::createHero is never read from a mission file, so
// CInventory::load never runs on it - it is the only case where a corrected
// weapon survives, and the only case that needs one. Applying it there leaves
// every NPC untouched, and leaves a hero carried over from a previous mission
// (createOneHero's existing_actor branch) holding the inventory it earned.
//
// WHERE THE SLOT'S TEXT COMES FROM
//
// getItemDisplayName and getItemIconName look the weapon's CKeyFramedModel-
// Instance model name up in ITEMLIST.TXT (ENGLISH.POD), and return that row's
// name and description; a model with no row prints as "Add to dict: <model>".
// So naming a weapon is a matter of choosing a model whose row already reads
// correctly, and every POD is mounted at startup, which means any row in that
// file is reachable from any act. Nothing here adds or edits game data.
//
// A class that attacks with nothing - Haystack, who strikes from the L and R
// Hand bones, and Colonel, whose fire button only lets him struggle out of a
// grab - is left with an empty slot rather than a weapon it does not have. A
// class the shipped game already equips correctly is left alone entirely.

struct CHero;
struct CWeapon;

#ifdef __cplusplus
extern "C" {
#endif

// Gives a freshly built player hero the weapon its own class attacks with,
// chosen by EHeroType. Call once from CDemonMission::createOneHero, on the
// CHeroPlaceholder::createHero branches only.
//
// For the melee classes nothing reads the weapon back, so this decides what the
// weapon slot says and nothing else - it changes no fire path and no damage.
// An unrecognised hero_type, and every hero the shipped game already equips
// correctly, is left exactly as its constructor built it.
//
// One hero also gains a *second* weapon in a network game: Scat, whose fire
// path can drive a real one and who otherwise arrives with only the Baron he
// summons. The Baron keeps the selection, so he plays as before until the
// player cycles weapons.
void nocturne_hero_default_weapon(struct CHero *hero, int hero_type);

// Puts the extra pistol's reserve back after a shot, so it never runs down.
// Call immediately after the weapon's fire() in the hero's process.
//
// It has to be infinite rather than merely generous, because the hero holding
// it cannot reload: collecting ammunition goes through the pickup machinery,
// which lives in CStranger, and CScat reaches none of it. A finite reserve is
// therefore spent permanently the first time it runs out, leaving a weapon that
// only plays CGun's dry click.
//
// Does nothing outside a network game, and nothing for a weapon that is not the
// pistol - the Baron summon reaches the same call site and has no ammunition
// concept to restore.
void nocturne_hero_reload_extra_gun(struct CHero *hero, struct CWeapon *weapon);

#ifdef __cplusplus
}
#endif
