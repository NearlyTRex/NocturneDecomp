#include "core/beast/beast.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBeast's constructor is ported, so missions can't make one yet.
// nocedit 0x004181b0
constinit const CDemonActorType CBeast::kType =
    makeActorType("CBeast", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
