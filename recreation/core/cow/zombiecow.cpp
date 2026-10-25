#include "core/cow/zombiecow.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CZombieCow's constructor is ported, so missions can't make one yet.
// nocedit 0x004440d0
constinit const CDemonActorType CZombieCow::kType =
    makeActorType("CZombieCow", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
