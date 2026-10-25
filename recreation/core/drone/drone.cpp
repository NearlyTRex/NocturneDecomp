#include "core/drone/drone.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CDrone's constructor is ported, so missions can't make one yet.
// nocedit 0x0048eae0
constinit const CDemonActorType CDrone::kType =
    makeActorType("CDrone", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
