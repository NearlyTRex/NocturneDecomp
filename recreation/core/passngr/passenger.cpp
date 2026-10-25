#include "core/passngr/passenger.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CPassenger's constructor is ported, so missions can't make one yet.
// nocedit 0x00545ac0
constinit const CDemonActorType CPassenger::kType =
    makeActorType("CPassenger", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
