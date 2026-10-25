#include "core/trigger/trigger.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;

} // namespace

// Without a factory until CTrigger's constructor is ported, so missions can't make one yet.
constinit const CDemonActorType CTrigger::kType =
    makeActorType("CTrigger", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
