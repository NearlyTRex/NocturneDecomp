#include "core/gun/gun.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CGun's constructor is ported, so missions can't make one yet.
// nocedit 0x004f0280
constinit const CDemonActorType CGun::kType =
    makeActorType("CGun", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
