#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>
#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

class CDemonMission {
public:
    CDemonMission();
    ~CDemonMission();
    CDemonMission(const CDemonMission &) = delete;
    CDemonMission &operator=(const CDemonMission &) = delete;
    CDemonMission(CDemonMission &&) = delete;
    CDemonMission &operator=(CDemonMission &&) = delete;

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
    // Takes the actor to the end of the list, naming it first if it has no name.
    void addActorToList(std::unique_ptr<CDemonActor> actor);
    // Takes the actor off the list and hands it back; null when it wasn't on it.
    std::unique_ptr<CDemonActor> removeActorFromList(const CDemonActor &actor_ptr);
    // Takes the actor off the list and destroys it, if it is on it.
    void removeActor(const CDemonActor &actor);
    // Destroys every actor, first to last.
    void removeAllActors();
    // The first actor so named, ignoring case; null when none is.
    [[nodiscard]] CDemonActor *findActorByName(std::string_view name) const;
    void setTeleportTarget(CLocation *teleport_target);
    void markActorToDelete(CDemonActor *actor, std::uint32_t flags);
    void process();
    void run();
    // Asks for the mission to load next, by name.
    void setMissionName(std::string_view name);
    // Names the actor after its class, without the leading 'C', and one more than the highest
    // number following that in any actor's name, counting on past names already taken.
    void generateActorName(CDemonActor &actor) const;
    int startMission();
    int createHeros(CCharacter *existing_hero);
    int countDamageableEnemies();

    [[nodiscard]] bool isInEditor() const;
    // -1 until a mission file is read.
    [[nodiscard]] int getMissionVersionNum() const;
    [[nodiscard]] const std::string &getMissionName() const;
    // The mission a script or menu asked for next; empty when none is waiting.
    [[nodiscard]] const std::string &getPendingMissionName() const;
    // The actors in list order.
    [[nodiscard]] std::span<const std::unique_ptr<CDemonActor>> getActors() const;

private:
    [[nodiscard]] std::string generateUniqueActorName(std::string_view base_name) const;

    bool is_in_editor_ = false;
    int mission_version_num_ = -1;
    std::string mission_name_;
    std::string pending_mission_name_;
    std::vector<std::unique_ptr<CDemonActor>> actors_;
};

} // namespace nocturne::core
