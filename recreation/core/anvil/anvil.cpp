#include "core/anvil/anvil.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CAnvil's constructor is ported, so missions can't make one yet.
// nocedit 0x00411c70
constinit const CDemonActorType CAnvil::kType =
    makeActorType("CAnvil", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
