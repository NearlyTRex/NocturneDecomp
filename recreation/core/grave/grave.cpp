#include "core/grave/grave.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CGrave's constructor is ported, so missions can't make one yet.
// nocedit 0x004ee4a0
constinit const CDemonActorType CGrave::kType =
    makeActorType("CGrave", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
