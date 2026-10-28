#include "core/lightgun/lightgun.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CLightGun's constructor is ported, so missions can't make one yet.
// nocedit 0x00505890
constinit const CDemonActorType CLightGun::kType =
    makeActorType("CLightGun", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
