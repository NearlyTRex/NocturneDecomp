#include "core/stairs/stairs.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CStairs's constructor is ported, so missions can't make one yet.
// nocedit 0x005b9b00
constinit const CDemonActorType CStairs::kType =
    makeActorType("CStairs", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
