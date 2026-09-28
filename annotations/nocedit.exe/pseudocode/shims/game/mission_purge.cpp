// =============================================================================
// MISSION PURGE — see mission_purge.h
// =============================================================================

#include "game/mission_purge.h"
#include "nocturne.h"
#include "core/debug_log.h"

#include <cstddef>
#include <cstring>

namespace {

// A path map is embedded in a CHero or a CNPC; name whichever owns it.
const char *path_map_owner(CPathMap *map, const char **kind) {
    CDemonActor *owner = (CDemonActor *)((char *)map - offsetof(CHero, path_map));
    *kind = "hero";
    if (core_actor_cpp_castToClassHash_FUN_0040c790(owner, g_CHeroClassInfo.name_hash) ==
        (CDemonActor *)0x0) {
        owner = (CDemonActor *)((char *)map - offsetof(CNPC, path_map));
        *kind = "npc";
    }
    return owner->actor_name;
}

} // namespace

extern "C" void nocturne_mission_purge_leftovers(void) {
    for (int i = 0; i < g_PathMapCount; i++) {
        const char *kind;
        const char *name = path_map_owner(g_PathMapList[i], &kind);
        DLOG("netplay", "mission purge: stale pathmap %d/%d, %s %.32s", i + 1, g_PathMapCount,
             kind, name);
    }
    std::memset(g_PathMapList, 0, sizeof(g_PathMapList));
    g_PathMapCount = 0;
}
