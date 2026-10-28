#include "core/tbplayer/drummer.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CDrummer's constructor is ported, so missions can't make one yet.
// nocedit 0x005d9fd0
constinit const CDemonActorType CDrummer::kType =
    makeActorType("CDrummer", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
