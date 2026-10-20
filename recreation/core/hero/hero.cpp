#include "core/hero/hero.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 12;

} // namespace

constinit const CDemonActorType CHero::kType =
    makeActorType("CHero", &CCharacter::kType, nullptr, kVersion);

// deferred: the path map, inventory and input, and the defaults the constructor gives the
//   collision, control, aiming, interaction and task fields, with the steps that read them
// deferred: creating the default weapon, with the weapon classes
// nocedit 0x004f2340
CHero::CHero() = default;

// The original also took the hero off the mission's heroes, which the mission does here as it
// destroys one.
// nocedit 0x004f2470
CHero::~CHero() = default;

} // namespace nocturne::core
