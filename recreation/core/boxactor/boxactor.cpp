#include "core/boxactor/boxactor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 15;

} // namespace

// Without a factory until CBoxActor's constructor is ported, so missions can't make one yet.
// nocedit 0x00421650
constinit const CDemonActorType CBoxActor::kType =
    makeActorType("CBoxActor", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
