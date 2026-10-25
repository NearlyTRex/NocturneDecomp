#include "core/frankgen/frankenstienmachine.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CFrankenstienMachine's constructor is ported, so missions can't make one yet.
// nocedit 0x004d16b0
constinit const CDemonActorType CFrankenstienMachine::kType =
    makeActorType("CFrankenstienMachine", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
