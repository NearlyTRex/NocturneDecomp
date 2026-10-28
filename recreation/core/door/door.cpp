#include "core/door/door.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;

} // namespace

// Without a factory until CDoor's constructor is ported, so missions can't make one yet.
// nocedit 0x0047fa60
constinit const CDemonActorType CDoor::kType =
    makeActorType("CDoor", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
