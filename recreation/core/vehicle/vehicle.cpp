#include "core/vehicle/vehicle.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CVehicle's constructor is ported, so missions can't make one yet.
// nocedit 0x005e78d0
constinit const CDemonActorType CVehicle::kType =
    makeActorType("CVehicle", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
