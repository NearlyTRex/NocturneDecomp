#include "core/sentinel/sentinel.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CSentinel's constructor is ported, so missions can't make one yet.
// nocedit 0x00567d40
constinit const CDemonActorType CSentinel::kType =
    makeActorType("CSentinel", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
