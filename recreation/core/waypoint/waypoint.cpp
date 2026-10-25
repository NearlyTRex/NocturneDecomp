#include "core/waypoint/waypoint.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CWayPoint's constructor is ported, so missions can't make one yet.
// nocedit 0x005ebd10
constinit const CDemonActorType CWayPoint::kType =
    makeActorType("CWayPoint", &CTrigger::kType, nullptr, kVersion);

} // namespace nocturne::core
