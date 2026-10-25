#include "core/flies/flies.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CFlies's constructor is ported, so missions can't make one yet.
// nocedit 0x004cbcf0
constinit const CDemonActorType CFlies::kType =
    makeActorType("CFlies", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
