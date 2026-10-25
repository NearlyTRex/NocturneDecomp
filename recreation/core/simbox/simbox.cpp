#include "core/simbox/simbox.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CSimBox's constructor is ported, so missions can't make one yet.
// nocedit 0x00588cd0
constinit const CDemonActorType CSimBox::kType =
    makeActorType("CSimBox", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
