#include "core/boxactor/lightactor.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CLightActor's constructor is ported, so missions can't make one yet.
// nocedit 0x00421650
constinit const CDemonActorType CLightActor::kType =
    makeActorType("CLightActor", &CBoxActor::kType, nullptr, kVersion);

} // namespace nocturne::core
