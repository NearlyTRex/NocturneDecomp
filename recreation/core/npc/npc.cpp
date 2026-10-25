#include "core/npc/npc.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CNPC's constructor is ported, so missions can't make one yet.
// nocedit 0x00544770
constinit const CDemonActorType CNPC::kType =
    makeActorType("CNPC", &CCharacter::kType, nullptr, kVersion);

} // namespace nocturne::core
