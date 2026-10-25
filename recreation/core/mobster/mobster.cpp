#include "core/mobster/mobster.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// Without a factory until CMobster's constructor is ported, so missions can't make one yet.
// nocedit 0x00525070
constinit const CDemonActorType CMobster::kType =
    makeActorType("CMobster", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
