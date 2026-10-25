#include "core/hostage/hostage.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 12;

} // namespace

// Without a factory until CHostage's constructor is ported, so missions can't make one yet.
// nocedit 0x004f47d0
constinit const CDemonActorType CHostage::kType =
    makeActorType("CHostage", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
