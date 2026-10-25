#include "core/conveyor/conveyor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CConveyor's constructor is ported, so missions can't make one yet.
// nocedit 0x00441c30
constinit const CDemonActorType CConveyor::kType =
    makeActorType("CConveyor", &CPlatform::kType, nullptr, kVersion);

} // namespace nocturne::core
