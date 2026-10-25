#include "core/smiley/smiley.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CSmiley's constructor is ported, so missions can't make one yet.
// nocedit 0x005a23c0
constinit const CDemonActorType CSmiley::kType =
    makeActorType("CSmiley", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
