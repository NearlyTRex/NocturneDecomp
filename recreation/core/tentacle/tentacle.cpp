#include "core/tentacle/tentacle.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CTentacle's constructor is ported, so missions can't make one yet.
// nocedit 0x005daef0
constinit const CDemonActorType CTentacle::kType =
    makeActorType("CTentacle", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
