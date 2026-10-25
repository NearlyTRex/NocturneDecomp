#include "core/biggs/biggs.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBiggs's constructor is ported, so missions can't make one yet.
// nocedit 0x00418550
constinit const CDemonActorType CBiggs::kType =
    makeActorType("CBiggs", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
