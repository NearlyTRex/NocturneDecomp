#include "core/drip/drip.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

// Without a factory until CDrip's constructor is ported, so missions can't make one yet.
// nocedit 0x0048df80
constinit const CDemonActorType CDrip::kType =
    makeActorType("CDrip", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
