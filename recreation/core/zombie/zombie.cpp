#include "core/zombie/zombie.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;

} // namespace

// Without a factory until CZombie's constructor is ported, so missions can't make one yet.
// nocedit 0x005f8c90
constinit const CDemonActorType CZombie::kType =
    makeActorType("CZombie", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
