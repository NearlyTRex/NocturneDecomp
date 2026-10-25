#include "core/battery/battery.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBattery's constructor is ported, so missions can't make one yet.
// nocedit 0x00417e20
constinit const CDemonActorType CBattery::kType =
    makeActorType("CBattery", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
