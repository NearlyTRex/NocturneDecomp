#include "game/item_names.h"
#include "nocturne.h"

extern "C" CDemonActor *nocturne_item_names_find_actor(CDemonMission *mission,
                                                       const char *name)
{
    CDemonActor *actor;
    CHero *hero;
    int i;

    actor = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(mission, (char *)name);
    if (actor != (CDemonActor *)0x0) {
        return actor;
    }
    for (actor = mission->first_actor; actor != (CDemonActor *)0x0; actor = actor->next_actor) {
        hero = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(actor, g_CHeroClassInfo.name_hash);
        if (hero == (CHero *)0x0) {
            continue;
        }
        for (i = 0; i < hero->inventory.item_count; i++) {
            if ((hero->inventory.items[i] != (CDemonActor *)0x0) &&
                (_stricmp(hero->inventory.items[i]->actor_name, (char *)name) == 0)) {
                return hero->inventory.items[i];
            }
        }
    }
    return (CDemonActor *)0x0;
}
