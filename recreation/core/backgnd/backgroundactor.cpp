#include "core/backgnd/backgroundactor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CBackgroundActor's constructor is ported, so missions can't make one yet.
// nocedit 0x00412740
constinit const CDemonActorType CBackgroundActor::kType =
    makeActorType("CBackgroundActor", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
