#include "core/gasmask/gasmask.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CGasMask's constructor is ported, so missions can't make one yet.
// nocedit 0x004e5c90
constinit const CDemonActorType CGasMask::kType =
    makeActorType("CGasMask", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
