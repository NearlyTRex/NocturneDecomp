#include "core/ladder/ladder.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CLadder's constructor is ported, so missions can't make one yet.
// nocedit 0x005024d0
constinit const CDemonActorType CLadder::kType =
    makeActorType("CLadder", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
