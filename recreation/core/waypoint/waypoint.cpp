#include "core/waypoint/waypoint.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <algorithm>
#include <cstddef>
#include <memory>
#include <span>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// Version 1 held only the next waypoint, and 2 a list of them.
constexpr int kAdjacencyVersion = 2;

constexpr common::CVector3f kWayPointSize{.x = 0.5F, .y = 1.0F, .z = 0.5F};

} // namespace

// nocedit 0x005ebd10
constinit const CDemonActorType CWayPoint::kType =
    makeActorType("CWayPoint", &CTrigger::kType, &CWayPoint::create, kVersion);

// nocedit 0x005ebe70
CWayPoint::CWayPoint() {
    setTriggerSize(kWayPointSize);
}

// nocedit 0x005ec8d0
CWayPoint::~CWayPoint() = default;

// nocedit 0x005ebe60
const CDemonActorType &CWayPoint::getActorType() const {
    return kType;
}

// nocedit 0x005ebe30
std::unique_ptr<CDemonActor> CWayPoint::create(CActor & /*classes*/) {
    return std::make_unique<CWayPoint>();
}

// deferred: each adjacent waypoint's distance, with addAdj and findNearestReachable
// nocedit 0x005ebeb0
void CWayPoint::setup() {
    CTrigger::setup();
    const std::string &event = getCreateEvent();
    if (!event.empty() && !common::equalsIgnoringAsciiCase(event, "none") &&
        !common::equalsIgnoringAsciiCase(event, "true")) {
        common::displayErrorAndQuit("Can't have creation event for waypoint.");
    }
}

// Version 1's next waypoint is read and dropped. The original held 60 waypoints, which more
// overran.
// nocedit 0x005ec280
void CWayPoint::archive(CActorArchive &actor_archive) {
    CTrigger::archive(actor_archive);
    if (actor_archive.getSavedVersion(kType) < kAdjacencyVersion) {
        CDemonActor *next_waypoint = nullptr;
        actor_archive.archiveActor(next_waypoint, "nextWayPoint");
        return;
    }
    int adjacent_count = 0;
    actor_archive.archiveInteger(adjacent_count, "adjCount");
    adjacent_waypoints_.assign(static_cast<std::size_t>(std::max(adjacent_count, 0)), nullptr);
    for (CDemonActor *&waypoint : adjacent_waypoints_) {
        actor_archive.archiveActor(waypoint, "");
    }
}

std::span<CDemonActor *const> CWayPoint::getAdjacentWaypoints() const {
    return adjacent_waypoints_;
}

} // namespace nocturne::core
