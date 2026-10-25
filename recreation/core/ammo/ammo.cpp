#include "core/ammo/ammo.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CAmmo's constructor is ported, so missions can't make one yet.
// nocedit 0x00410d50
constinit const CDemonActorType CAmmo::kType =
    makeActorType("CAmmo", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
