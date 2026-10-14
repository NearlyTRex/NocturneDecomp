#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>
#include <string>
#include <string_view>

namespace nocturne::core {

class CDemonMission {
public:
    // No mission loaded, no actors, and none waiting to be loaded.
    void reset();
    void clearMission();
    void load(char *mission_filename, int load_flags);
    void readMissionFile(std::FILE *file_handle, int load_flags);
    CDemonActor *getNextLoadedInventoryActor(char *actor_name);
    void writeFile(std::FILE *file_handle);
    CDemonActor *loadActor(std::FILE *file, CDemonActor *current_actor, char *property_description);
    void saveActor(CDemonActor *actor_ptr, std::FILE *file, CDemonActor *current_actor,
                   char *description);
    void addActorToList(CDemonActor *actor);
    void removeActorFromList(CDemonActor *actor_ptr);
    CDemonActor *findActorByName(char *name);
    void setTeleportTarget(CLocation *teleport_target);
    void markActorToDelete(CDemonActor *actor, std::uint32_t flags);
    void process();
    void run();
    // Asks for the mission to load next, by name.
    void setMissionName(std::string_view name);
    void generateActorName(CDemonActor *actor);
    int startMission();
    int createHeros(CCharacter *existing_hero);
    int countDamageableEnemies();

    [[nodiscard]] bool isInEditor() const;
    // -1 until a mission file is read.
    [[nodiscard]] int getMissionVersionNum() const;
    [[nodiscard]] const std::string &getMissionName() const;
    // The mission a script or menu asked for next; empty when none is waiting.
    [[nodiscard]] const std::string &getPendingMissionName() const;
    [[nodiscard]] CDemonActor *getFirstActor() const;
    [[nodiscard]] CDemonActor *getLastActor() const;

private:
    bool is_in_editor_ = false;
    int mission_version_num_ = -1;
    std::string mission_name_;
    std::string pending_mission_name_;
    CDemonActor *first_actor_ = nullptr;
    CDemonActor *last_actor_ = nullptr;
};

} // namespace nocturne::core
