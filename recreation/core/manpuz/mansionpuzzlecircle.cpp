#include "core/manpuz/mansionpuzzlecircle.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CMansionPuzzleCircle's constructor is ported, so missions can't make one yet.
// nocedit 0x00508890
constinit const CDemonActorType CMansionPuzzleCircle::kType =
    makeActorType("CMansionPuzzleCircle", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
