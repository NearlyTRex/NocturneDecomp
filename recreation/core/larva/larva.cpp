#include "core/larva/larva.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CLarva's constructor is ported, so missions can't make one yet.
// nocedit 0x00502f20
constinit const CDemonActorType CLarva::kType =
    makeActorType("CLarva", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
