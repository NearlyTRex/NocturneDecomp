#include "core/hpriest/highpriestofgardath.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CHighPriestOfGardath's constructor is ported, so missions can't make one yet.
// nocedit 0x004f7b00
constinit const CDemonActorType CHighPriestOfGardath::kType =
    makeActorType("CHighPriestOfGardath", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
