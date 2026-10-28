#include "core/ghoul/ghoul.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 7;

} // namespace

// Without a factory until CGhoul's constructor is ported, so missions can't make one yet.
// nocedit 0x004e5f90
constinit const CDemonActorType CGhoul::kType =
    makeActorType("CGhoul", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
