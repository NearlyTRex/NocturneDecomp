#include "core/crate/crate.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CCrate's constructor is ported, so missions can't make one yet.
// nocedit 0x00448460
constinit const CDemonActorType CCrate::kType =
    makeActorType("CCrate", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
