#include "core/trap/trap.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTrap's constructor is ported, so missions can't make one yet.
// nocedit 0x005de620
constinit const CDemonActorType CTrap::kType =
    makeActorType("CTrap", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
