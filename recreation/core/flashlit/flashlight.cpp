#include "core/flashlit/flashlight.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CFlashlight's constructor is ported, so missions can't make one yet.
// nocedit 0x004cbb50
constinit const CDemonActorType CFlashlight::kType =
    makeActorType("CFlashlight", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
