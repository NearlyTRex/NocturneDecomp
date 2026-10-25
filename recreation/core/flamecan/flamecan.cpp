#include "core/flamecan/flamecan.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CFlameCan's constructor is ported, so missions can't make one yet.
// nocedit 0x004cb0f0
constinit const CDemonActorType CFlameCan::kType =
    makeActorType("CFlameCan", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
