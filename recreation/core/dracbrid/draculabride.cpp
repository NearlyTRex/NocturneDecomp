#include "core/dracbrid/draculabride.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 9;

} // namespace

// Without a factory until CDraculaBride's constructor is ported, so missions can't make one yet.
// nocedit 0x00483ef0
// bw1 0x0047b000
// bw2 0x00462af0
constinit const CDemonActorType CDraculaBride::kType =
    makeActorType("CDraculaBride", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
