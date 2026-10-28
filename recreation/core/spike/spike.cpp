#include "core/spike/spike.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CSpike's constructor is ported, so missions can't make one yet.
// nocedit 0x005b81b0
constinit const CDemonActorType CSpike::kType =
    makeActorType("CSpike", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
