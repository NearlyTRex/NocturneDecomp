#include "core/pendulum/pendulum.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 8;

} // namespace

// Without a factory until CPendulum's constructor is ported, so missions can't make one yet.
// nocedit 0x00549320
constinit const CDemonActorType CPendulum::kType =
    makeActorType("CPendulum", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
