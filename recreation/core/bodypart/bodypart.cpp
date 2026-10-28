#include "core/bodypart/bodypart.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 5;

} // namespace

// Without a factory until CBodyPart's constructor is ported, so missions can't make one yet.
// nocedit 0x00418de0
constinit const CDemonActorType CBodyPart::kType =
    makeActorType("CBodyPart", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
