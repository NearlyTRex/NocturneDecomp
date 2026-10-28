#include "core/melee/melee.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// Without a factory until CMelee's constructor is ported, so missions can't make one yet.
// nocedit 0x0050e760
constinit const CDemonActorType CMelee::kType =
    makeActorType("CMelee", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
