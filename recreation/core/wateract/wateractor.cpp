#include "core/wateract/wateractor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CWaterActor's constructor is ported, so missions can't make one yet.
// nocedit 0x005ea810
constinit const CDemonActorType CWaterActor::kType =
    makeActorType("CWaterActor", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
