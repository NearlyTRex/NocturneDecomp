#include "core/elephant/elephantgun.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CElephantGun's constructor is ported, so missions can't make one yet.
// nocedit 0x004a6f70
constinit const CDemonActorType CElephantGun::kType =
    makeActorType("CElephantGun", &CWeapon::kType, nullptr, kVersion);

} // namespace nocturne::core
