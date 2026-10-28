#include "core/trash/trash.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CTrash's constructor is ported, so missions can't make one yet.
// nocedit 0x005deb00
constinit const CDemonActorType CTrash::kType =
    makeActorType("CTrash", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
