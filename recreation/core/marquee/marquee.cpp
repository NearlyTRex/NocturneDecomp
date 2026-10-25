#include "core/marquee/marquee.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CMarquee's constructor is ported, so missions can't make one yet.
// nocedit 0x0050baf0
constinit const CDemonActorType CMarquee::kType =
    makeActorType("CMarquee", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
