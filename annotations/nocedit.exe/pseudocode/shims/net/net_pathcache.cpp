// =============================================================================
// NETPLAY — THE PATH-MAP CACHE STARTS EVERY MISSION FRESH — see net_pathcache.h
// =============================================================================

#include "net/net_pathcache.h"
#include "shim_config.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_NETPLAY

extern "C" void nocturne_net_pathcache_rewind(void)
{
    int i;

    if ((g_CNetGamePtr == (CNetGame *)0x0) ||
        (g_CNetGamePtr->connection_type == CONNECTION_NONE)) {
        return;
    }

    if ((g_PathMapCacheInitFlag & 1) == 0) {
        // The same first-use init getOrCreatePathMap performs.
        g_PathMapCacheInitFlag = g_PathMapCacheInitFlag | 1;
        __arrinit(g_PathMapCache, 0xc, &g_CPathMapTypeInfo);
        _atexit(&g_PathMapCacheDestructorNode);
    }
    else {
        // What CPathMap::ctor sets up, without registering the entry again.
        for (i = 0; i < 0xc; i++) {
            g_PathMapCache[i].cached_voxel_coords.x = 0x7fffffff;
            g_PathMapCache[i].cached_voxel_coords.y = 0x7fffffff;
            g_PathMapCache[i].cached_voxel_coords.z = 0x7fffffff;
            core_path_cpp_CPathMap_reset_FUN_00548510(&g_PathMapCache[i]);
        }
    }
    for (i = 0; i < 0xc; i++) {
        g_PathMapLRUCounters[i] = i;
    }
}

#else

extern "C" void nocturne_net_pathcache_rewind(void) {}

#endif
