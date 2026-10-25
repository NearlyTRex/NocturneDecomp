#include "core/shovel/shovel.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CShovel's constructor is ported, so missions can't make one yet.
// nocedit 0x00588b30
constinit const CDemonActorType CShovel::kType =
    makeActorType("CShovel", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
