#include "core/weapon/weapon.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// nocedit 0x005ede40
constinit const CDemonActorType CWeapon::kType =
    makeActorType("CWeapon", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
