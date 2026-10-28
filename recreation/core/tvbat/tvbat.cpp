#include "core/tvbat/tvbat.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 5;

} // namespace

// Without a factory until CTVBat's constructor is ported, so missions can't make one yet.
// nocedit 0x005e3e50
constinit const CDemonActorType CTVBat::kType =
    makeActorType("CTVBat", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
