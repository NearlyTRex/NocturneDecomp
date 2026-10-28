#include "core/emitter/emitter.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// Without a factory until CEmitter's constructor is ported, so missions can't make one yet.
// nocedit 0x004a7c30
constinit const CDemonActorType CEmitter::kType =
    makeActorType("CEmitter", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
