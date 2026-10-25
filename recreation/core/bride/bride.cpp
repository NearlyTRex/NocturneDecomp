#include "core/bride/bride.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CBride's constructor is ported, so missions can't make one yet.
// nocedit 0x00423700
constinit const CDemonActorType CBride::kType =
    makeActorType("CBride", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
