#include "core/manpuz/mirrorhack.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CMirrorHack's constructor is ported, so missions can't make one yet.
// nocedit 0x00508890
constinit const CDemonActorType CMirrorHack::kType =
    makeActorType("CMirrorHack", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
