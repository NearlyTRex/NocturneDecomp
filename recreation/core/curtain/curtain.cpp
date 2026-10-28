#include "core/curtain/curtain.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CCurtain's constructor is ported, so missions can't make one yet.
// nocedit 0x00449610
constinit const CDemonActorType CCurtain::kType =
    makeActorType("CCurtain", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
