#include "core/werewolf/werewolf.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CWerewolf's constructor is ported, so missions can't make one yet.
// nocedit 0x005efb70
constinit const CDemonActorType CWerewolf::kType =
    makeActorType("CWerewolf", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
