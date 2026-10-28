#include "core/mission/demonmission.h"

#include "core/actor/demonactor.h"

#include <memory>
#include <span>

namespace nocturne::core {

CDemonMission::CDemonMission(const SMissionOwners &owners) : owners_(owners) {}

CDemonMission::~CDemonMission() = default;

// nocedit also clears skip_gore_load_flag and show_waypoint_coverage, editor fields retail lacks.
// deferred: clearing the pending teleport to area -1 at the origin, with setTeleportTarget and
//   process
// deferred: emptying the queue of actors to delete, with markActorToDelete and process
// deferred: clearing actor_lookup_count, with saveActor
// The original let go of any actors without destroying them.
// nocedit 0x00522c80
void CDemonMission::reset() {
    is_in_editor_ = false;
    mission_version_num_ = -1;
    mission_name_.clear();
    pending_mission_name_.clear();
    actors_.clear();
    actors_prepared_ = false;
    carried_start_.reset();
}

// nocedit 0x00524630
void CDemonMission::setMissionName(std::string_view name) {
    pending_mission_name_ = name;
}

bool CDemonMission::isInEditor() const {
    return is_in_editor_;
}

int CDemonMission::getMissionVersionNum() const {
    return mission_version_num_;
}

const std::string &CDemonMission::getMissionName() const {
    return mission_name_;
}

const std::string &CDemonMission::getPendingMissionName() const {
    return pending_mission_name_;
}

std::span<const std::unique_ptr<CDemonActor>> CDemonMission::getActors() const {
    return actors_;
}

} // namespace nocturne::core
