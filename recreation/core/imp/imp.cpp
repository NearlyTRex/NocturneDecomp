#include "core/imp/imp.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CImp's constructor is ported, so missions can't make one yet.
// nocedit 0x004f9830
constinit const CDemonActorType CImp::kType =
    makeActorType("CImp", &CEnemy::kType, nullptr, kVersion);

} // namespace nocturne::core
