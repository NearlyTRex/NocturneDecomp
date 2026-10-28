#include "core/keyactor/keyactor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CKeyActor's constructor is ported, so missions can't make one yet.
// nocedit 0x00501620
constinit const CDemonActorType CKeyActor::kType =
    makeActorType("CKeyActor", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
