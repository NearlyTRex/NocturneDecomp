#include "core/bugs/bugs.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBugs's constructor is ported, so missions can't make one yet.
// nocedit 0x00424c40
constinit const CDemonActorType CBugs::kType =
    makeActorType("CBugs", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
