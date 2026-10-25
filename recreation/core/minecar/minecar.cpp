#include "core/minecar/minecar.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CMineCar's constructor is ported, so missions can't make one yet.
// nocedit 0x00520e20
constinit const CDemonActorType CMineCar::kType =
    makeActorType("CMineCar", &CPlatform::kType, nullptr, kVersion);

} // namespace nocturne::core
