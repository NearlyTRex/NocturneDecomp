#include "core/barrier/barrier.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CBarrier's constructor is ported, so missions can't make one yet.
// nocedit 0x00414150
constinit const CDemonActorType CBarrier::kType =
    makeActorType("CBarrier", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
