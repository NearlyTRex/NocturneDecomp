#include "core/tommygun/tommygun.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTommyGun's constructor is ported, so missions can't make one yet.
// nocedit 0x005dda20
constinit const CDemonActorType CTommyGun::kType =
    makeActorType("CTommyGun", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
