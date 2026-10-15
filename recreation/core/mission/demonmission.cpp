#include "core/mission/demonmission.h"

namespace nocturne::core {

// nocedit also clears skip_gore_load_flag and show_waypoint_coverage, editor fields retail lacks.
// deferred: clearing the pending teleport to area -1 at the origin, with setTeleportTarget and
//   process
// deferred: emptying the queue of actors to delete, with markActorToDelete and process
// deferred: clearing actors_prepared, with prepareAllActors and loadSet
// deferred: clearing has_inventory_actors, next_inventory_actor and actor_lookup_count, with
//   readMissionFile, getNextLoadedInventoryActor and CInventory::load
// nocedit 0x00522c80
void CDemonMission::reset() {
    is_in_editor_ = false;
    mission_version_num_ = -1;
    mission_name_.clear();
    pending_mission_name_.clear();
    first_actor_ = nullptr;
    last_actor_ = nullptr;
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

CDemonActor *CDemonMission::getFirstActor() const {
    return first_actor_;
}

CDemonActor *CDemonMission::getLastActor() const {
    return last_actor_;
}

} // namespace nocturne::core
