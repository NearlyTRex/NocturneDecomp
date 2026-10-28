#include "core/teleport/teleportdest.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTeleportDest's constructor is ported, so missions can't make one yet.
// nocedit 0x005da6e0
constinit const CDemonActorType CTeleportDest::kType =
    makeActorType("CTeleportDest", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
