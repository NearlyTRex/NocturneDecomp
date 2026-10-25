#include "core/litecone/lightcone.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CLightCone's constructor is ported, so missions can't make one yet.
// nocedit 0x00506aa0
constinit const CDemonActorType CLightCone::kType =
    makeActorType("CLightCone", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
