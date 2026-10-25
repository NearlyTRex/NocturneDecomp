#include "core/batman/batman.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CBatman's constructor is ported, so missions can't make one yet.
// nocedit 0x004163e0
constinit const CDemonActorType CBatman::kType =
    makeActorType("CBatman", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
