#include "core/baron/baronweapon.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBaronWeapon's constructor is ported, so missions can't make one yet.
// nocedit 0x00412b20
constinit const CDemonActorType CBaronWeapon::kType =
    makeActorType("CBaronWeapon", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
