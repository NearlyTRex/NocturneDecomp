#pragma once

// =============================================================================
// HERO SUPPORT — the party, and the vtable every test actor shares
// =============================================================================
//
// Four heroes for the party's slots and characters that are not heroes, the
// party globals, and the hero class infos registered as a first construction
// does it. Every test actor shares one vtable: getActorType answers through
// class_support.h, getDeathState from `death`, and a test fills in any other
// slot it needs. reset() puts everything back.

#include "nocturne.h"

#include <map>

namespace hero_support {

extern CHero *heroes[4];
CCharacter *character(int i);

// A Stranger, which is larger than a CHero: his own fields are past its end.
// reset() leaves him out of the party, of class CStranger.
extern CStranger *stranger;

// Every test actor's vtable; reset() leaves only getActorType and getDeathState.
extern CHero_full_vtable vtable;

// What getDeathState answers each character; ALIVE when unset.
extern std::map<const void *, EDeathState> death;

// Classes with no class info of their own: an item, under nothing.
extern CDemonActorType item_type;

// Give an actor the shared vtable and a class.
void give_class(CDemonActor *actor, CDemonActorType *type);

// Put heroes[0..count) in the party, as players at full health.
void place_heroes(int count);

void reset();

} // namespace hero_support
