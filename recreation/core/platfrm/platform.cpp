#include "core/platfrm/platform.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 11;

} // namespace

// Without a factory until CPlatform's constructor is ported, so missions can't make one yet.
// nocedit 0x0054c7e0
constinit const CDemonActorType CPlatform::kType =
    makeActorType("CPlatform", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
