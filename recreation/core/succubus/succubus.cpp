#include "core/succubus/succubus.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CSuccubus's constructor is ported, so missions can't make one yet.
// nocedit 0x005c6a10
constinit const CDemonActorType CSuccubus::kType =
    makeActorType("CSuccubus", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
