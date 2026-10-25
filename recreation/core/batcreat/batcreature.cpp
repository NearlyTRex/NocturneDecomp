#include "core/batcreat/batcreature.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBatCreature's constructor is ported, so missions can't make one yet.
// nocedit 0x00415080
constinit const CDemonActorType CBatCreature::kType =
    makeActorType("CBatCreature", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
