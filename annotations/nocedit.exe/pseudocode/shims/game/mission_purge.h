#pragma once

// =============================================================================
// MISSION PURGE — drop registry entries a finished mission left behind
// =============================================================================
//
// CDemonMission::removeAllActors deletes every actor in the mission, and each
// destructor takes its entries out of the global registries. An owner that
// left the mission without being deleted never does, so its CPathMap stays in
// g_PathMapList into the next mission. resetAllPathMaps then draws once per
// stale entry, and a netplay host that played single player first loads with
// more sim draws than its guest: a desync at frame 0.
//
// Called once every actor is gone, so anything still registered is stale. The
// owners are logged, not deleted — their state is unknown.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call site.

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_mission_purge_leftovers(void);

#ifdef __cplusplus
}
#endif
