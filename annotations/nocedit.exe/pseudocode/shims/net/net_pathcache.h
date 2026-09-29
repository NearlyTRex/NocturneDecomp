#pragma once

// =============================================================================
// NETPLAY — THE PATH-MAP CACHE STARTS EVERY MISSION FRESH
// =============================================================================
//
// getOrCreatePathMap keeps a function-static cache of twelve CPathMaps for enemy
// pathfinding. It is built the first time any enemy asks for a path and lives
// until exit, and every entry registers in g_PathMapList like any other path
// map. That makes it per-process state lockstep cannot see:
//
//   - A machine that has played a mission already holds the cache; one that
//     has not builds it mid-game. Building it draws once per entry (the ctor's
//     CPathMap::reset), so the two machines draw a different number of times
//     on that frame.
//   - Twelve more registered maps also mean twelve more draws on every
//     resetAllPathMaps, which a load calls about 130 times.
//   - Its LRU order and cached voxel positions carry over from the last
//     mission, so the same lookup can hit on one machine and miss on another.
//
// So at every mission start in a network game the cache is brought to exactly
// the state a fresh build leaves it in: built if this process has not built it,
// otherwise each entry rewound the way the ctor sets it up, and the LRU order
// restarted. Either way that is twelve draws, after the shared load seed, on
// every machine.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call site.

#ifdef __cplusplus
extern "C" {
#endif

// Called from CDemonMission::removeAllActors. Does nothing outside a network
// game.
void nocturne_net_pathcache_rewind(void);

#ifdef __cplusplus
}
#endif
