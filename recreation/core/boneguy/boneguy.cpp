#include "core/boneguy/boneguy.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 5;

} // namespace

// Without a factory until CBoneGuy's constructor is ported, so missions can't make one yet.
// nocedit 0x0041b6d0
constinit const CDemonActorType CBoneGuy::kType =
    makeActorType("CBoneGuy", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
