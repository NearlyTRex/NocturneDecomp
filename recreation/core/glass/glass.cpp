#include "core/glass/glass.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CGlass's constructor is ported, so missions can't make one yet.
// nocedit 0x004e8fd0
constinit const CDemonActorType CGlass::kType =
    makeActorType("CGlass", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
