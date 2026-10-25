#include "core/dog/zombiedog.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CZombieDog's constructor is ported, so missions can't make one yet.
// nocedit 0x0047efe0
constinit const CDemonActorType CZombieDog::kType =
    makeActorType("CZombieDog", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
