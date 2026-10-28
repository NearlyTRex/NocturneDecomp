#include "core/dynamite/dynamite.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CDynamite's constructor is ported, so missions can't make one yet.
// nocedit 0x0049cd40
constinit const CDemonActorType CDynamite::kType =
    makeActorType("CDynamite", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
