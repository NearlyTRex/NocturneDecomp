#include "core/gargoyle/gargoyle.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CGargoyle's constructor is ported, so missions can't make one yet.
// nocedit 0x004e4470
constinit const CDemonActorType CGargoyle::kType =
    makeActorType("CGargoyle", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
