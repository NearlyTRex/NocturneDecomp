#include "core/ammobox/ammobox.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CAmmoBox's constructor is ported, so missions can't make one yet.
// nocedit 0x00411530
constinit const CDemonActorType CAmmoBox::kType =
    makeActorType("CAmmoBox", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
