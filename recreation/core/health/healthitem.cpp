#include "core/health/healthitem.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

// Without a factory until CHealthItem's constructor is ported, so missions can't make one yet.
// nocedit 0x004f1d60
constinit const CDemonActorType CHealthItem::kType =
    makeActorType("CHealthItem", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
