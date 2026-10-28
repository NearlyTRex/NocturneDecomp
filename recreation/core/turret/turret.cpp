#include "core/turret/turret.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CTurret's constructor is ported, so missions can't make one yet.
// nocedit 0x005e2080
constinit const CDemonActorType CTurret::kType =
    makeActorType("CTurret", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
