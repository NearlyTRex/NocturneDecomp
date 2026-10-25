#include "core/bat/bat.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CBat's constructor is ported, so missions can't make one yet.
// nocedit 0x004146c0
constinit const CDemonActorType CBat::kType =
    makeActorType("CBat", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
