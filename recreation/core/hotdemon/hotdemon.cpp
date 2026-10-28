#include "core/hotdemon/hotdemon.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CHotDemon's constructor is ported, so missions can't make one yet.
// nocedit 0x004f6c30
constinit const CDemonActorType CHotDemon::kType =
    makeActorType("CHotDemon", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
