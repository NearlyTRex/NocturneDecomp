#include "core/stone/templestone.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTempleStone's constructor is ported, so missions can't make one yet.
// nocedit 0x005baca0
constinit const CDemonActorType CTempleStone::kType =
    makeActorType("CTempleStone", &CBoxActor::kType, nullptr, kVersion);

} // namespace nocturne::core
