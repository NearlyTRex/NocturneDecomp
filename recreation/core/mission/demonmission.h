#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::core {

class CDemonMission {
public:
    CDemonMission();
    ~CDemonMission();

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
    void setMissionName(char *name);
    void generateActorName(CDemonActor *actor);
    int startMission();
    int createHeros(CCharacter *existing_hero);
    int countDamageableEnemies();
};

} // namespace nocturne::core
