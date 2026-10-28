#include "core/vessel/cryptvessel.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CCryptVessel's constructor is ported, so missions can't make one yet.
// nocedit 0x005e8df0
constinit const CDemonActorType CCryptVessel::kType =
    makeActorType("CCryptVessel", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
