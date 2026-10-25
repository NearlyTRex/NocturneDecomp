#include "core/vampboss/vampireboss.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CVampireBoss's constructor is ported, so missions can't make one yet.
// nocedit 0x005e5520
constinit const CDemonActorType CVampireBoss::kType =
    makeActorType("CVampireBoss", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
