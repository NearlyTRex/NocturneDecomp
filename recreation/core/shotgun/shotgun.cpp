#include "core/shotgun/shotgun.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CShotgun's constructor is ported, so missions can't make one yet.
// nocedit 0x00587e70
constinit const CDemonActorType CShotgun::kType =
    makeActorType("CShotgun", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
