#include "core/dest/actordestination.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CActorDestination's constructor is ported, so missions can't make one yet.
// nocedit 0x0046f890
constinit const CDemonActorType CActorDestination::kType =
    makeActorType("CActorDestination", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
