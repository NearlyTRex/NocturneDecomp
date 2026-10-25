#include "core/armour/armour.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CArmour's constructor is ported, so missions can't make one yet.
// nocedit 0x00412130
constinit const CDemonActorType CArmour::kType =
    makeActorType("CArmour", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
