#include "core/mimic/mimic.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CMimic's constructor is ported, so missions can't make one yet.
// nocedit 0x0051f100
constinit const CDemonActorType CMimic::kType =
    makeActorType("CMimic", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
