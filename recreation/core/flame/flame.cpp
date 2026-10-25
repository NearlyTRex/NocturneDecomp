#include "core/flame/flame.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// Without a factory until CFlame's constructor is ported, so missions can't make one yet.
// nocedit 0x004c9a30
constinit const CDemonActorType CFlame::kType =
    makeActorType("CFlame", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
