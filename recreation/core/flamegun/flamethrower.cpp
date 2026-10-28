#include "core/flamegun/flamethrower.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CFlameThrower's constructor is ported, so missions can't make one yet.
// nocedit 0x004cb810
constinit const CDemonActorType CFlameThrower::kType =
    makeActorType("CFlameThrower", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
