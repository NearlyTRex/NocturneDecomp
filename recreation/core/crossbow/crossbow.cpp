#include "core/crossbow/crossbow.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CCrossbow's constructor is ported, so missions can't make one yet.
// nocedit 0x00448c00
constinit const CDemonActorType CCrossbow::kType =
    makeActorType("CCrossbow", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
