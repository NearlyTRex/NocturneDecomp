#include "core/enemy/enemy.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 10;

} // namespace

// nocedit 0x004a94d0
constinit const CDemonActorType CEnemy::kType =
    makeActorType("CEnemy", &CCharacter::kType, nullptr, kVersion);

} // namespace nocturne::core
