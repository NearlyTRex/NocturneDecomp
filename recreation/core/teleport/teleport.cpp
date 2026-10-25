#include "core/teleport/teleport.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTeleport's constructor is ported, so missions can't make one yet.
// nocedit 0x005da6e0
constinit const CDemonActorType CTeleport::kType =
    makeActorType("CTeleport", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
